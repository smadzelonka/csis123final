//
//  HashNames.hpp
//  fin
//
//  Created by Sean Madzelonka on 5/13/23.
//

#ifndef HashNames_hpp
#define HashNames_hpp

#include <stdio.h>
#include <vector>
#include <string>

class HashNames {
private:
    std::vector<std::vector<std::string>> hashTable;
    const int TABLE_SIZE = 53;
    int djbHash(std::string data);

public:
    HashNames(const std::string& filename);
    void printFileContents(const std::string& filename);
    void printNames();
};


#endif /* HashNames_hpp */
