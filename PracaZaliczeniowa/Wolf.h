//
// Created by nomuron on 08.01.2020.
//

#ifndef PRACAZALICZENIOWA_WOLF_H
#define PRACAZALICZENIOWA_WOLF_H

#include <iostream>
#include <string>
//#include "Monster.h"
#include "RollDice.h"
using namespace std;

class Wolf {
int strength = 2;
int experience = 2;
    bool wasDefeat = false;
public:
    int getStrength();
    int getExperience();
    void setDefeat(bool defeat);
    string description = "Widzisz wilka!\n";
    void fight(int strength);
};


#endif //PRACAZALICZENIOWA_WOLF_H
