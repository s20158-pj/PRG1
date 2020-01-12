//
// Created by nomuron on 12.12.2019.
//

#ifndef PRACAZALICZENIOWA_FOREST_H
#define PRACAZALICZENIOWA_FOREST_H


#include "Field.h"

class Forest: public Field {
    bool hasItem=false;
    bool hasMonster=false;
    bool movable=true;
    string description="Znajdujesz się we wspaniałym dzikim lesie. Otacza cię śpiew ptaków, zapach kwiatów oraz runa leśnego.\n";
public:
    void makeEvent();
    bool getMoveble();
};


#endif //PRACAZALICZENIOWA_FOREST_H
