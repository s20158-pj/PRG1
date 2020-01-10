//
// Created by nomuron on 08.01.2020.
//

#include "Rat.h"

int Rat::getStrength() {
    return strength;
}

int Rat::getExperience() {
    return experience;
}

void Rat::setDefeat(bool defeat) {
    Rat::wasDefeat=defeat;
}

void Rat::fight(int strength) {
    cout << description;
    RollDice rollDice;
    int charStr = (strength + rollDice.rolling());
    int ratStr = (Rat::strength + rollDice.rolling2());
    if (!Rat::wasDefeat) {
        if (charStr > ratStr) {
            cout << "wygrałeś\n";
            Rat::wasDefeat = true;
        } else if (charStr == ratStr) {
            cout << "remis\n";
        } else if (charStr < ratStr) {
            cout << "przegrałeś\n";
        }
    } else if (Rat::wasDefeat) {
        cout << "Już wygrałeś\n";
    }
}
