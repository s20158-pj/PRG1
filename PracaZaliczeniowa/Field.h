//
// Created by nomuron on 11.12.2019.
//
#ifndef PRACAZALICZENIOWA_FIELD_H
#define PRACAZALICZENIOWA_FIELD_H

#include <string>
using namespace std;


class Field {
public:
    virtual void makeEvent() = 0;

protected:
    bool hasItem;
    bool hasMonster;
    bool movable;
    string description;
};


#endif //PRACAZALICZENIOWA_FIELD_H
