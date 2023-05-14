//
//  HashNames.cpp
//  fin
//
//  Created by Sean Madzelonka on 5/13/23.
//

#include "HashNames.hpp"
#include <fstream>
#include <iostream>

HashNames::HashNames(const std::string& filename) {
    hashTable.resize(TABLE_SIZE); // initialize the hash table with size TABLE_SIZE
    std::ifstream file(filename);
    if (!file) {
        std::cerr << "File could not be opened\n";
        return;
    }
    std::string name;
    while (std::getline(file, name)) {
        int hashVal = djbHash(name);
        hashTable[hashVal].push_back(name);
    }
}

int HashNames::djbHash(std::string data) {
    int hashVal = 5381;
    for (char c : data) {
        hashVal *= 33;
        hashVal += static_cast<int>(c);
    }
    hashVal %= TABLE_SIZE;
    return abs(hashVal);
}

void HashNames::printNames() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        if (!hashTable[i].empty()) {
            std::cout << i << ": ";
            for (const auto& name : hashTable[i]) {
                std::cout << name << ", ";
            }
            std::cout << "\n";
        }
    }
    
}
// Testing
void HashNames::printFileContents(const std::string& filename) {
    std::ifstream file(filename);
    if(!file) {
        std::cerr << "File could not be opened\n";
        return;
    }

    std::string name;
    while(getline(file, name)) {
        std::cout << name << "\n";
    }
    file.close();
}
