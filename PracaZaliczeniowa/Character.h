//
// Created by nomuron on 11.12.2019.
//

#ifndef PRACAZALICZENIOWA_CHARACTER_H
#define PRACAZALICZENIOWA_CHARACTER_H

#include <string>
#include <vector>
using namespace std;

class Character {
    int itsXCoord;
    int itsYCoord;
    bool finished=false;
    vector <string> inventory;

public:
    int getXCoord();
    void setXCoord(int itsXCoord);
    int getYCoord();
    void setYCoord(int itsYCoord);
};


#endif //PRACAZALICZENIOWA_CHARACTER_H
