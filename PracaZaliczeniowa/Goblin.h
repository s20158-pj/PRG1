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
    string description = "Idąc lasem zauważasz truchło szczura. Kompletnie okrojone z mięsa. W ciszy słyszysz odgłosy.\n"
                         "Przypominają bulgotanie bądź próby powiedzenia czegoś. Nagle widzisz, że z krzaku wychodzi \n"
                         "duża, zielona, humanoidalną postać. Pierwszym raz widzisz postać w stylu. Przypomina jakiegoś goblina \n"
                         "z gier Skyrima. Patrzy na ciebie wyłupiastymi ślepiami. PO chwili rzuca się na ciebie.";
    void fight(int strength);
};


#endif //PRACAZALICZENIOWA_GOBLIN_H
