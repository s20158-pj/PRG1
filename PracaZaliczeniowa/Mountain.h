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
    string description="Idąc lasem oraz polaną widzisz niezwykle wysoką górę. \n"
                       "Zatanawia cię fakt istnienia takiej góry na wyspie, ale już nie jedną dziwną rzecz widziałeś.\n"
                       "Decydujesz się wejść na tą górę. Niestety po chwili wspinaczki zauważasz, że bez specjalnego sprzętu raczej ci się to nie uda.\n"
                       "Zlatujesz w dół. Na szczęście z niewielkiej wysokości. Chyba nie warto znowu próbować się wspinać\n";
public:
    void makeEvent();
    bool getMoveble();
};


#endif //PRACAZALICZENIOWA_MOUNTAIN_H
