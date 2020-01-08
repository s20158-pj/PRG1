//
// Created by nomuron on 08.01.2020.
//

#ifndef PRACAZALICZENIOWA_RAT_H
#define PRACAZALICZENIOWA_RAT_H

#include <string>
#include "Monster.h"
using namespace std;

class Rat {
public:
    int getStrength();
    int getExperience();
    string description = "Widzisz szczura!";

private:
    int strength=1;
    int experience = 1;
};


#endif //PRACAZALICZENIOWA_RAT_H
