//
// Created by nomuron on 08.01.2020.
//

#include "Goblin.h"

int Goblin::getStrength() {
    return strength;
}

int Goblin::getExperience() {
    return experience;
}

void Goblin::setDefeat(bool defeat) {
    Goblin::wasDefeat=defeat;
}

void Goblin::fight(int strength) {
    cout << description;
    RollDice rollDice;
    int charStr = (strength + rollDice.rolling());
    int ratStr = (Goblin::strength + rollDice.rolling2());
    if (!Goblin::wasDefeat) {
        if (charStr > ratStr) {
            cout << "wygrałeś\n";
            Goblin::wasDefeat = true;
        } else if (charStr == ratStr) {
            cout << "remis\n";
        } else if (charStr < ratStr) {
            cout << "przegrałeś\n";
        }
    } else if (Goblin::wasDefeat) {
        cout << "Już wygrałeś\n";
    }
}