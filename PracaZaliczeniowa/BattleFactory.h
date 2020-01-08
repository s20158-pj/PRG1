//
// Created by nomuron on 08.01.2020.
//

#ifndef PRACAZALICZENIOWA_BATTLEFACTORY_H
#define PRACAZALICZENIOWA_BATTLEFACTORY_H
#include "Rat.h"
#include "Wolf.h"
#include "Goblin.h"
using namespace std;

class BattleFactory {
public:
    void createRat();
    void createWolf();
    void createGoblin();
    void runBattleFactory(char field);
};


#endif //PRACAZALICZENIOWA_BATTLEFACTORY_H
