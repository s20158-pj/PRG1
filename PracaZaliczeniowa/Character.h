//
// Created by nomuron on 11.12.2019.
//

#ifndef PRACAZALICZENIOWA_CHARACTER_H
#define PRACAZALICZENIOWA_CHARACTER_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Character {
    int itsXCoord;
    int itsYCoord;
    int backupXCoord;
    int backupYCoord;
    int exp;
    int level;
    int strength;
    bool hasCor;
    bool hasAir;
    bool hasEarth;
public:
    int getLevel();

    void setLevel(int level);

    bool hasHoly;

    void setFinished(bool finished);

    bool isHasCor();

    void setHasCor(bool hasCor);

    bool isHasHoly();

    void setHasHoly(bool hasHoly);

    bool isHasAir();

    void setHasAir(bool hasAir);

    bool isHasEarth();

    void setHasEarth(bool hasEarth);

    bool finished = false;

    vector<string> inventory;

    int getXCoord();

    void setXCoord(int itsXCoord);

    int getYCoord();

    void setYCoord(int itsYCoord);

    int getStrength();

    void setStrength(int strength);

    void showInventory(Character hero);

    int getBackupXCoord();

    void setBackupXCoord(int backupXCoord);

    int getBackupYCoord();

    void setBackupYCoord(int backupYCoord);

    int getExp();

    void setExp(int exp);
};


#endif //PRACAZALICZENIOWA_CHARACTER_H
