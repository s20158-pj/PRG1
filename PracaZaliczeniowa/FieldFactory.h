//
// Created by nomuron on 05.01.2020.
//

#ifndef PRACAZALICZENIOWA_FIELDFACTORY_H
#define PRACAZALICZENIOWA_FIELDFACTORY_H


#include "Field.h"
#include "Forest.h"
#include "Sea.h"
#include "Mountain.h"
#include "Lake.h"
#include "Rat.h"
#include "Wolf.h"
#include "Goblin.h"
#include "Character.h"

class FieldFactory {
public:
    Character hero;
    Rat rat;
    Wolf wolf;
    Goblin goblin;
    bool rid;
    void createF();
    void createS();
    void createM();
    void createL();
    Rat createRat(int strength);
    Wolf createWolf(int strength);
    Goblin createGoblin(int strength);
    Character createP(Character hero);
    Character createB(Character hero);
    Character createD(Character hero);
    Character createH(Character hero);
    Character createC(Character hero);
    Character createA(Character hero);
    Character createE(Character hero);
    Character createT(Character hero);
    Character runFactory (char field, int strength, Character hero);
};


#endif //PRACAZALICZENIOWA_FIELDFACTORY_H
