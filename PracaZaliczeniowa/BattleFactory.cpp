//
// Created by nomuron on 08.01.2020.
//

#include <iostream>
#include "BattleFactory.h"


void BattleFactory::createRat() {
    Rat rat;
    cout << rat.description;
}

void BattleFactory::createWolf() {
    Wolf wolf;
    cout << wolf.description;
}

void BattleFactory::createGoblin() {
    Goblin goblin;
    cout << goblin.description;
}

void BattleFactory::runBattleFactory(char field) {
    if (field=='r'){
        createRat();
    } else if (field=='w'){
        createWolf();
    } else if (field=='g'){
        createGoblin();
    }
}