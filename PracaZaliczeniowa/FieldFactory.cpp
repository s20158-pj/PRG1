//
// Created by nomuron on 05.01.2020.
//

#include "FieldFactory.h"


void FieldFactory::createF() {
    Forest forest;
    forest.makeEvent();
}

void FieldFactory::createS() {
    Sea sea;
    sea.makeEvent();
}

void FieldFactory::createM() {
    Mountain mountain;
    mountain.makeEvent();
}

void FieldFactory::createL() {
    Lake lake;
    lake.makeEvent();
}

void FieldFactory::createRat() {
    Rat rat;
    cout << rat.description;
}

void FieldFactory::createWolf() {
    Wolf wolf;
    cout << wolf.description;
}

void FieldFactory::createGoblin() {
    Goblin goblin;
    cout << goblin.description;
}

void FieldFactory::runFactory(char field) {
    if (field=='f'){
        createF();
    } else if (field=='s'){
        createS();
    } else if (field=='m'){
        createM();
    } else if (field=='l'){
        createL();
    } else if (field=='r'){
        createRat();
    } else if (field=='w'){
        createWolf();
    } else if (field=='g'){
        createGoblin();
    }
}