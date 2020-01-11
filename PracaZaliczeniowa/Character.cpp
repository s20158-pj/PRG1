//
// Created by nomuron on 11.12.2019.
//

#include "Character.h"

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

int Character::getStrength() {
    return strength;
}

void Character::setStrength(int strength) {
    Character::strength = strength;
}

void Character::showInventory(Character hero) {
    if (hero.inventory.empty()){
        cout << "Twój ekwipunek jest pusty!\n";
    } else {
        cout << "Posiadasz: \n";
        vector <string> inv = hero.inventory;
        int invLength = inv.size();
        for (int i=0; i<invLength; i++) {
            cout << inv[i];
        }
    }
}

bool Character::isHasCor() {
    return hasCor;
}

void Character::setHasCor(bool hasCor) {
    Character::hasCor = hasCor;
}

bool Character::isHasHoly() {
    return hasHoly;
}

void Character::setHasHoly(bool hasHoly) {
    Character::hasHoly = hasHoly;
}

bool Character::isHasAir() {
    return hasAir;
}

void Character::setHasAir(bool hasAir) {
    Character::hasAir = hasAir;
}

bool Character::isHasEarth() {
    return hasEarth;
}

void Character::setHasEarth(bool hasEarth) {
    Character::hasEarth = hasEarth;
}

void Character::setFinished(bool finished) {
    Character::finished = finished;
}

int Character::getBackupXCoord() {
    return backupXCoord;
}

void Character::setBackupXCoord(int backupXCoord) {
    Character::backupXCoord = backupXCoord;
}

int Character::getBackupYCoord() {
    return backupYCoord;
}

void Character::setBackupYCoord(int backupYCoord) {
    Character::backupYCoord = backupYCoord;
}
