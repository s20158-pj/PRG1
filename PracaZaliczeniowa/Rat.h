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
    string description = "Idąc lasem nagle słyszysz jakiś szelestz krzaków i dziwny pisk.\n"
                         "Z krzaków wychodzi wielki szczur. Wielki jakby od małego żarł metanabol.\n"
                         "Syczy agresywnie na ciebie. Chyba nie masz innego wyboru tylko podjąć walkę.\n\n";
    void fight(int strength);

private:
    int strength=1;
    int experience = 1;
};


#endif //PRACAZALICZENIOWA_RAT_H
