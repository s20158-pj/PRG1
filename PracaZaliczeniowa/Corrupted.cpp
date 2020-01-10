//
// Created by nomuron on 10.01.2020.
//

#include "Corrupted.h"

bool Corrupted::CorRiddle() {
    cout << "Idąc przez las natrafiasz na dziwne ruiny. Ogarnia cię niezrozumiały strach oraz zmęczenie. "
            "Postanawiasz podejść bliżej, żeby się przyjrzeć. Podchodząc do ruin słyszysz głos w głowie mówiący:\n"
            "- Ty robaku! Myślisz, że możesz od tak sobie tu wejść! DObrze ci radzę, lepiej natychmiast odpowiedz na moje pytanie albo czeka cię wieczna męka."
            "pomiędzy liczbami 1 1 2 3 5 oraz 13 znajduje się liczba. Mów jaka? Natychmiast!\n";
    cin >> riddleNumC;
    if (riddleNumC==8){
        cout << "Udało ci się robaku. Otrzymasz teraz znak zepsucia. Oby pomógł ci nieść chaos oraz zniszczenie w świece!\n";
        riddlePassed = true;
    }
    else {
        cout << "Źle! Jesteś tylko bezmózgą glizdą! Wynoś się stąd! Natychmiast!!!\n";
    }
    return riddlePassed;
}
