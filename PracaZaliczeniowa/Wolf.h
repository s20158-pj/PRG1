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
int strength = 1;
int experience = 2;
public:
    int getStrength();
    int getExperience();
    void setDefeat(bool defeat);
    string description = "Idąc lasem słyszysz warczenie z za siebie. Odwracają się widzisz powoli zbliżającego się do ciebie \n"
                         "wilka. Duży szary wilk z najeżonym grzbietem powoli się do ciebie zbliża oraz rzuca się na ciebie.\n\n";
    void fight(int strength);
    bool wasDefeat = false;
};


#endif //PRACAZALICZENIOWA_WOLF_H
