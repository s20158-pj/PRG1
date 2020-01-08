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

class FieldFactory {
public:
    void createF();
    void createS();
    void createM();
    void createL();
    void createRat();
    void createWolf();
    void createGoblin();
    void runFactory (char field);
};


#endif //PRACAZALICZENIOWA_FIELDFACTORY_H
