//
// Created by nomuron on 12.12.2019.
//

#ifndef PRACAZALICZENIOWA_MAP_H
#define PRACAZALICZENIOWA_MAP_H

#include <iostream>
#include <string>
using namespace std;

class Map {
public:
    string map[7][7] = {{"s", "s", "s", "s", "s", "s", "s"}, {"s", "f", "f", "f", "f", "f", "s"}, {"s", "f", "m", "f", "f", "f", "s"},
                        {"s", "m", "m", "f", "l", "l", "s"}, {"s", "f", "m", "f", "l", "f", "s"}, {"s", "f", "f", "f", "f", "f", "s"},
                        {"s", "s", "s", "s", "s", "s", "s"}};

//public:
//    string getField();
};


#endif //PRACAZALICZENIOWA_MAP_H
