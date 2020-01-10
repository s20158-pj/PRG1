//
// Created by nomuron on 08.01.2020.
//

#ifndef PRACAZALICZENIOWA_RAT_H
#define PRACAZALICZENIOWA_RAT_H

#include <iostream>
#include <string>
//#include "Monster.h"
#include "RollDice.h"
using namespace std;

class Rat {
public:
    int getStrength();
    int getExperience();
    bool wasDefeat = true;
    void setDefeat(bool defeat);
    string description = "Widzisz szczura!\n";
    void fight(int strength);

private:
    int strength=1;
    int experience = 1;
};


#endif //PRACAZALICZENIOWA_RAT_H
