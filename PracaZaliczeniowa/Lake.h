//
// Created by nomuron on 11.12.2019.
//

#ifndef PRACAZALICZENIOWA_LAKE_H
#define PRACAZALICZENIOWA_LAKE_H

#include <iostream>
#include "Field.h"

class Lake: public Field {
    bool hasItem=false;
    bool hasMonster=false;
    bool movable=false;
    string description="Idąc lasem zauważasz wielkie jezioro. Akwen wodny rozciągający się daleko, \n\n"
                       " aż po horyzont. Nie widzisz żadnej łodzi, ani promu, ani żadnej innej formy transpotu. \n"
                       " Decydujesz się spróbowac przepłynąć.\n\n"
                       "To nie był dobry pomysł\n\n"
                       "Z jakiegoś powodu czujesz jakby przebywanie w wodzie niemalże natychmiast zabierała ci całą siłę.\n"
                       "Niemalże od razu od wejścia czujesz się niezwykle zmęczony. Decydujesz się wyjść z wody. \n"
                       "Stwierdzasz, że to pewnie nie jest dobry pomysł próbować przepływać jeziora na tej wyspie. \n\n";
public:
    void makeEvent();
    bool getMoveble();
};


#endif //PRACAZALICZENIOWA_LAKE_H
