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
            cout << "Mimo długiej i ciężkiej walki twój przeciwnik musiał ugiąć się pod twoją siłą.\n"
                    "Udało ci się. Wygrałeś.\n\n";
            Rat::wasDefeat = true;
        } else if (charStr == ratStr) {
            cout << "Twój przeciwnik się poddaje. Widać, że poraniony odchodzi, ale ty też nie jesteś w pełny sił. \n"
                    "Mimo, że jesteś blisko wygranej, decydujesz nie kontynuować walki i zaakcpetować równość waszej siły \n\n";
        } else if (charStr < ratStr) {
            cout << "Niestety twoje siły nie wystraczyły na pokonanie przeciwnika. Podejmujesz decyzje o ucieczce.To jedyne co możesz zrobić.\n\n";
        }
    } else if (Rat::wasDefeat) {
        cout << "Już wygrałeś\n";
    }
}
