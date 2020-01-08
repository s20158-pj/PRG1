//
// Created by nomuron on 08.01.2020.
//

#ifndef PRACAZALICZENIOWA_GOBLIN_H
#define PRACAZALICZENIOWA_GOBLIN_H

#include <string>

using namespace std;

class Goblin {
int strength=3;
int experience=3;
public:
    int getStrength();
    int getExperience();
    string description = "Widzisz goblina!";
};


#endif //PRACAZALICZENIOWA_GOBLIN_H
