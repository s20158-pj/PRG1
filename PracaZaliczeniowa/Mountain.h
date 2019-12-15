//
// Created by nomuron on 12.12.2019.
//

#ifndef PRACAZALICZENIOWA_MOUNTAIN_H
#define PRACAZALICZENIOWA_MOUNTAIN_H


#include "Field.h"

class Mountain: public Field {
    bool hasItem=false;
    bool hasMonster=false;
    bool movable=false;
    string description="Widzisz zajebiaszcze góry.\n";
public:
    void makeEvent();
    bool getMoveble();
};


#endif //PRACAZALICZENIOWA_MOUNTAIN_H
