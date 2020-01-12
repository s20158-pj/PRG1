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
    int wolfStr = (Wolf::strength + rollDice.rolling2());
    if (!Wolf::wasDefeat) {
        if (charStr > wolfStr) {
            cout << "Mimo długiej i ciężkiej walki twój przeciwnik musiał ugiąć się pod twoją siłą.\n"
                    "Udało ci się. Wygrałeś.\n\n";
            Wolf::wasDefeat = true;
        } else if (charStr == wolfStr) {
            cout << "Twój przeciwnik się poddaje. Widać, że poraniony odchodzi, ale ty też nie jesteś w pełny sił. \n"
                    "Mimo, że jesteś blisko wygranej, decydujesz nie kontynuować walki i zaakcpetować równość waszej siły \n\n";
        } else if (charStr < wolfStr) {
            cout << "Niestety twoje siły nie wystraczyły na pokonanie przeciwnika. Podejmujesz decyzje o ucieczce.To jedyne co możesz zrobić.\n\n";
        }
    } else if (Wolf::wasDefeat) {
        cout << "Już wygrałeś\n";
    }
}