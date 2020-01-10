//
// Created by nomuron on 10.01.2020.
//


#include "Holy.h"
bool Holy::HolyRiddle() {
    cout << "Idąc przez las natrafiasz na dziwne ruiny. Spoko z nich bijący nadnaturalnie cię uspokaja. "
            "Postanawiasz podejść bliżej, żeby się przyjrzeć. Podchodząc do ruin słyszysz głos w głowie mówiący:\n"
            "- Udowodnij, że jesteś godny świętego znaku, wojowniku. Dane są ci cyfry:  7 12 22 42. Jaka będzie się znajdowała po nich?\n";
    cin >> riddleNumH;
    if (riddleNumH==82){
        cout << "Dobrze! Zasługujesz na nagrodę, dumny wojowniku! Przyjmij ten o to znak świętości!\n";
        riddlePassed = true;
    }
    else {
        cout << "Źle! Nie tobie jest dane kroczyć po tych świętych ruinach! Odejdź!\n";
    }
    return riddlePassed;
}