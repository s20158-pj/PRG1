//
// Created by nomuron on 10.01.2020.
//

#ifndef PRACAZALICZENIOWA_HOLY_H
#define PRACAZALICZENIOWA_HOLY_H
#include <iostream>
#include <string>
#include "Character.h"

using namespace std;

class Holy {
public:
    int riddleNumH;
    bool riddlePassed;
    string description = "Święta świątynia";
    bool HolyRiddle();
};


#endif //PRACAZALICZENIOWA_HOLY_H
