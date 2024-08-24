#include "HashTable.h"

HashTable::HashTable(int size) : table(size) {}

int HashTable::hashFunction(const std::string& word) const {
    int hash = 0;
    for (char ch : word) {
        hash = (hash * 31 + ch) % table.size();
    }
    return hash;
}

void HashTable::addText(const std::string& word) {
    int index = hashFunction(word);
    for (auto& entry : table[index]) {
        if (entry.first == word) {
            entry.second++;
            return;
        }
    }
    table[index].emplace_back(word, 1);
}

int HashTable::countWord(const std::string& word) const {
    int index = hashFunction(word);
    for (const auto& entry : table[index]) {
        if (entry.first == word) {
            return entry.second;
        }
    }
    return 0;
}

bool HashTable::containsWord(const std::string& word) const {
    int index = hashFunction(word);
    for (const auto& entry : table[index]) {
        if (entry.first == word) {
            return true;
        }
    }
    return false;
}

void HashTable::removeWord(const std::string& word) {
    int index = hashFunction(word);
    for (auto it = table[index].begin(); it != table[index].end(); ++it) {
        if (it->first == word) {
            table[index].erase(it);
            return;
        }
    }
}

void HashTable::printTable() const {
    for (std::vector<std::list<std::pair<std::string, int>>>::size_type i = 0; i < table.size(); ++i) {
        std::cout << "Índice " << i << ": ";
        for (const auto& entry : table[i]) {
            std::cout << "(" << entry.first << ", " << entry.second << ") -> ";
        }
        std::cout << "NULL\n";
    }
}