//
//  main.cpp
//  final Project
//  Created by Sean Madzelonka on 5/13/23.
//  Sean Madzelonka
//  ID 0266099
//

#include <iostream>
#include <unistd.h>
#include "HashNames.hpp"
// working dir
// Users/seanmadzelonka/Library/Developer/Xcode/DerivedData/fin-cagphirntsqhnocvwqcevfeejobk/Build/Products/Debug

int main() {
//    ~~~~ TESTING PWD ~~~~
    char buffer[PATH_MAX];
    if (getcwd(buffer, sizeof(buffer)) != NULL) {
        std::cout << "Current working directory: " << buffer << std::endl;
    } else {
        std::cerr << "Error getting current working directory" << std::endl;
        return 1;
    }
    HashNames printFileContents("names.txt");
    HashNames hashNames("names.txt");
    hashNames.printNames();
//    printFileContents.printNames();
    return 0;
}

// output
//Current working directory: /Users/seanmadzelonka/Library/Developer/Xcode/DerivedData/fin-cagphirntsqhnocvwqcevfeejobk/Build/Products/Debug
//0: Levi
//, Cooper
//, Gael
//, Jensen
//, Winston
//, Zaiden
//, Trenton
//, Francis
//, Quincy
//, Kelvin
//, Rey
//, Draven
//, Jabari
//, Cedric
//,
//1: Michael
//, Maverick
//, Micah
//, Luis
//, Edward
//, Israel
//, Manuel
//, Jett
//, Cohen
//, Conner
//, Nehemiah
//, Adan
//, Bruce
//, Ronald
//, Cannon
//, Trent
//, Valentino
//, Kristian
//, Harlan
//, Jerome
//, Kace
//, Leif
//, Anton
//,
//2: Isaiah
//, Diego
//, Brantley
//, Matteo
//, Erick
//, Iker
//, Kane
//, Edgar
//, Lennox
//, Keith
//, Lawrence
//, Jaziel
//, Stefan
//, Enoch
//, Guillermo
//, Terrell
//, Ulises
//, Leroy
//, Markus
//, Nickolas
//, Gianluca
//,
