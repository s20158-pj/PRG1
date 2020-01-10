//
// Created by nomuron on 10.01.2020.
//

#include "Earth.h"
bool Earth::EarthRiddle() {
    cout << "Idąc przez las natrafiasz na dziwne ruiny. Ziemia wydaje się niezwykle miękka i pulchna, a roślinność gęśta w tym rejonie. "
            "Postanawiasz podejść bliżej, żeby się przyjrzeć. Podchodząc do ruin słyszysz głos w głowie mówiący:\n"
            "- Witaj przybyszu. Chodź! Przybądź na moje wezwanie! Jeśli powiesz mi co znajduje się w pustym miejscu tego ciągu, nie ominie cię nagroda! 0 2 6 12 _ 30\n";
    cin >> riddleNumE;
    if (riddleNumE==20){
        cout << "Brawo. Widzę, że nagroda pobudza do myślenia. Proszę, zasłużyłeś. Oto znak ziemi.\n";
        riddlePassed = true;
    }
    else {
        cout << "Niestety nie. Musisz opuścić moje ruiny. Wróć jak przemyślisz moją zagadkę.\n";
    }
    return riddlePassed;
}