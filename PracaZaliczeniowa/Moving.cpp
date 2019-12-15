//
// Created by nomuron on 13.12.2019.
//

#include "Moving.h"
#include "Character.h"

void Moving::setMove(int moveDir){
    move = moveDir;
}

void Moving::makeMove(){
    if (move == 1){
        Character.setXCoord(Character.getXCoord()+1);
    }
    if (move == 2){
        Hero.setXCoord(Hero.getXCoord()-1);
    }
    if (move == 3){
        Hero.setYCoord(Hero.getYCoord()-1);
    }
    if (move == 4){
        Hero.setYCoord(Hero.getYCoord()+1);
    }
}