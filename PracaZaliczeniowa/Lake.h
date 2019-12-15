//
// Created by nomuron on 11.12.2019.
//

#ifndef PRACAZALICZENIOWA_LAKE_H
#define PRACAZALICZENIOWA_LAKE_H


#include "Field.h"

class Lake: public Field {
    bool hasItem=false;
    bool hasMonster=false;
    bool movable=false;
    string description="Widzisz zajebiaszcze jezioro.\n";
public:
    void makeEvent();
    bool getMoveble();
};


#endif //PRACAZALICZENIOWA_LAKE_H
