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
    int gobStr = (Goblin::strength + rollDice.rolling2());
    if (!Goblin::wasDefeat) {
        if (charStr > gobStr) {
            cout << "Mimo długiej i ciężkiej walki twój przeciwnik musiał ugiąć się pod twoją siłą.\n"
                    "Udało ci się. Wygrałeś.\n\n";
            Goblin::wasDefeat = true;
        } else if (charStr == gobStr) {
            cout << "Twój przeciwnik się poddaje. Widać, że poraniony odchodzi, ale ty też nie jesteś w pełny sił. \n"
                    "Mimo, że jesteś blisko wygranej, decydujesz nie kontynuować walki i zaakcpetować równość waszej siły \n\n";
        } else if (charStr < gobStr) {
            cout << "Niestety twoje siły nie wystraczyły na pokonanie przeciwnika. Podejmujesz decyzje o ucieczce.To jedyne co możesz zrobić.\n\n";
        }
    } else if (Goblin::wasDefeat) {
        cout << "Już wygrałeś\n";
    }
}