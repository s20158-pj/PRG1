//
// Created by nomuron on 08.01.2020.
//

#ifndef PRACAZALICZENIOWA_WOLF_H
#define PRACAZALICZENIOWA_WOLF_H

#include <string>

using namespace std;

class Wolf {
int strength = 2;
int experience = 2;
public:
    int getStrength();
    int getExperience();
    string description = "Widzisz wilka!";
};


#endif //PRACAZALICZENIOWA_WOLF_H
