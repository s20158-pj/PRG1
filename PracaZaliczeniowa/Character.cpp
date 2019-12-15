//
// Created by nomuron on 11.12.2019.
//
#include <string>
#include <vector>
#include "Character.h"
using namespace std;
int Character::getXCoord(){
    return itsXCoord;
}

void Character::setXCoord(int xCoord){
    itsXCoord = xCoord;
}

int Character::getYCoord(){
    return itsYCoord;
}

void Character::setYCoord(int yCoord){
    itsYCoord = yCoord;
}

