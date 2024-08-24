#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <iostream>
#include <string>
#include <vector>
#include <list>

class HashTable {
private:
    std::vector<std::list<std::pair<std::string, int>>> table;
    int hashFunction(const std::string& word) const; 

public:
    HashTable(int size); 
    void addText(const std::string& word);
    int countWord(const std::string& word) const;
    bool containsWord(const std::string& word) const;
    void removeWord(const std::string& word);
    void printTable() const;
};

#endif // HASHTABLE_H
