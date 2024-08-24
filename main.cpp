#include <iostream>
#include <string>
#include "HashTable.h"

int main() {
    HashTable hashTable(100); 

    hashTable.addText("apple");
    hashTable.addText("orange");
    hashTable.addText("banana");
    hashTable.addText("grape");
    hashTable.addText("cherry");
    hashTable.addText("peach");
    hashTable.addText("mango");
    hashTable.addText("apricot");
    hashTable.addText("plum");
    hashTable.addText("date");
    hashTable.addText("fig");
    hashTable.addText("kiwi");
    hashTable.addText("melon");
    hashTable.addText("lime");
    hashTable.addText("nectarine");
    hashTable.addText("tangerine");
    hashTable.addText("pear");
    hashTable.addText("quince");
    hashTable.addText("raspberry");
    hashTable.addText("coconut");

    std::cout << "Quantidade de 'apple': " << hashTable.countWord("apple") << std::endl;
    std::cout << "Quantidade de 'orange': " << hashTable.countWord("orange") << std::endl;
    std::cout << "Quantidade de 'banana': " << hashTable.countWord("banana") << std::endl;
    std::cout << "Quantidade de 'grape': " << hashTable.countWord("grape") << std::endl;
    std::cout << "Quantidade de 'cherry': " << hashTable.countWord("cherry") << std::endl;

    if (hashTable.containsWord("peach")) {
        std::cout << "'peach' está presente na tabela." << std::endl;
    } else {
        std::cout << "'peach' não está presente na tabela." << std::endl;
    }

    hashTable.removeWord("date");
    if (!hashTable.containsWord("date")) {
        std::cout << "'date' foi removida da tabela." << std::endl;
    }

    hashTable.printTable();

    return 0;
}
