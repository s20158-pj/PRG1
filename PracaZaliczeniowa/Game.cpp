//
// Created by nomuron on 15.12.2019.
//

#include "Game.h"

using namespace std;

void Game::startGame() {
    cout << "Budzisz się. Otwierasz oczy. Czujesz potężny ból głowy. Nie wiesz co tu robisz. Nie wiesz jak się tu znalazłeź. \n"
            "Szum morza informuje cię, że chyba jesteś na jakiejś wyspie. Ale skąd? Jak? Sprawdzasz kieszenie. Puste. Myślisz co ostatnio robiłeś.\n"
            "Jadłeś obiad z żoną a potem pustka. Po chwili rozmyślań decydujesz się ruszyć w podróż po wyspie. W końcu musisz jakoś znaleźć wyjście!\n\n";
    Map mapa;
    Character hero;
    hero.setXCoord(7);
    hero.setYCoord(7);
    hero.setStrength(1);
    Move move;
    char field;
    int strength = hero.getStrength();
    do {
        int moving;
        cout << "Jesteś w :" << hero.getXCoord() << ", " << hero.getYCoord() << endl;
        cout << "Gdzie chcesz iść\n";
        cout << "1)Północ 2)Południe 3)Zachód 4)Wschód 5)Sprawdź ekwipunek: ";
        cin >> moving;
        if (moving == 5) {
            hero.showInventory(hero);
            move.move(moving);
        } else {
            move.move(moving);
        }
        hero.setBackupXCoord(hero.getXCoord());
        hero.setBackupYCoord(hero.getYCoord());
        hero.setXCoord(hero.getXCoord() + move.getX());
        hero.setYCoord(hero.getYCoord() + move.getY());
        field = mapa.map[hero.getXCoord()][hero.getYCoord()];
        FieldFactory fieldFactory;
        hero = fieldFactory.runFactory(field, strength, hero);
        if (field == 's' || field == 'm' || field == 'l') {
            hero.setXCoord(hero.getBackupXCoord());
            hero.setYCoord(hero.getBackupYCoord());
        }
    } while (!hero.finished);
    cout << "Widzisz otwierający się przed tobą portal. Stwierdzasz, że po tym co cię na tej wyspie spotkało nie masz nic do stracenia. \n"
            "Wchodzisz. \n"
            "Robi ci się ciemno przed oczami. Czujesz jakby ktoś cię wsadził do kolejki górskiej. Uczucie latania ciała we wszystkie strony. \n"
            "Po chwili się budzisz. Leżysz na kanapie w swoim mieszkaniu. Z kuchni dobiega odgłos mycia naczyń. Zrywasz się i tam biegniesz. \n"
            "Widzisz swoją piękną żone, która zmywa po obiedzie. Patrzysz na nia z utęsknieniem, podchodzisz do niej i obejmujesz ze szczęścia. \n"
            "- Co ci jest? - powiedziała zdziwionym głosem. \n"
            "- Nic nieważne. - odrzekasz z uśmiechem. - Wiesz, zostaw to na chwilę. Opowiem ci co mi się śniło. \n\n"
            "KONIEC!!!";
}
