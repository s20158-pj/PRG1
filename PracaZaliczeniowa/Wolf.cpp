//
// Created by nomuron on 08.01.2020.
//

#include "Wolf.h"

int Wolf::getStrength() {
    return strength;
}

int Wolf::getExperience() {
    return experience;
}

void Wolf::setDefeat(bool defeat) {
    Wolf::wasDefeat=defeat;
}

void Wolf::fight(int strength) {
    cout << description;
    RollDice rollDice;
    int charStr = (strength + rollDice.rolling());
    int ratStr = (Wolf::strength + rollDice.rolling2());
    if (!Wolf::wasDefeat) {
        if (charStr > ratStr) {
            cout << "wygrałeś\n";
            Wolf::wasDefeat = true;
        } else if (charStr == ratStr) {
            cout << "remis\n";
        } else if (charStr < ratStr) {
            cout << "przegrałeś\n";
        }
    } else if (Wolf::wasDefeat) {
        cout << "Już wygrałeś\n";
    }
}