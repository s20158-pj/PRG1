//
// Created by nomuron on 10.01.2020.
//

#include "Air.h"
bool Air::AirRiddle() {
    cout << "Idąc przez las natrafiasz na dziwne ruiny. Powietrze wydaje się dziwnie czyste i odświeżające! "
            "Postanawiasz podejść bliżej, żeby się przyjrzeć. Podchodząc do ruin słyszysz głos w głowie mówiący:\n"
            "- Podróżniku! Nie bój się. Podejdź. Udowodnij, żeś godzień wizyty w ruinach świątyni powietrza. Zadam ci zagadkę, a ty racz mi odpowiedzieć."
            "Po 2 jest 3, po 3 jest 1, po 1 jest 4, po 4 jest 0, co będzie po zerze?\n";
    cin >> riddleNumA;
    if (riddleNumA==5){
        cout << "Wspaniale! Cieszę się, że w końcu ktoś rozwiązał zagadkę tych ruin. W nagrodę otrzymasz znak. Znak powietrza już zawsze będzie ci towarzyszył i cię wspierał.\n";
        riddlePassed = true;
    }
    else {
        cout << "Niestety przyjacielu. Nie dane ci jeszcze wejść do tych ruin. Mam nadzieję, że spotkamy się w przyszłości.\n";
    }
    return riddlePassed;
}