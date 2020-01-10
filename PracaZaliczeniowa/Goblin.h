//
// Created by nomuron on 08.01.2020.
//

#ifndef PRACAZALICZENIOWA_GOBLIN_H
#define PRACAZALICZENIOWA_GOBLIN_H

#include <iostream>
#include <string>
//#include "Monster.h"
#include "RollDice.h"
using namespace std;

class Goblin {
int strength=3;
int experience=3;
    bool wasDefeat = false;

public:
    int getStrength();
    int getExperience();
    void setDefeat(bool defeat);
    string description = "Widzisz goblina!\n";
    void fight(int strength);
};


#endif //PRACAZALICZENIOWA_GOBLIN_H
