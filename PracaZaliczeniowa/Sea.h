//
// Created by nomuron on 12.12.2019.
//

#ifndef PRACAZALICZENIOWA_SEA_H
#define PRACAZALICZENIOWA_SEA_H


#include "Field.h"

class Sea: public Field {
    bool hasItem=false;
    bool hasMonster=false;
    bool movable=false;
    string description="Morze rozciągające się, aż po horyzont uświadamia ci, że przepłynięcie bez statku czy pomocy innych ludzi nie ma sensu. "
                       "Horyzont nieskażony żadną wysepką czy statkiem jest tylko motywatorem do tego byś się odwrócił, i spróbował znaleźć wyjście z tej wyspy.\n";
public:
    void makeEvent();
    bool getMoveble();
};


#endif //PRACAZALICZENIOWA_SEA_H
