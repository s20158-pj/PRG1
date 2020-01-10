//
// Created by nomuron on 15.12.2019.
//

#include "Game.h"
#include "RollDice.h"

using namespace std;

void Game::startGame() {
    cout << "Budzisz się. Otwierasz oczy. Czujesz potężny ból głowy. Nie wiesz co tu robisz. Nie wiesz jak się tu znalazłeź. \n"
            "Szum morza informuje cię, że chyba jesteś na jakiejś wyspie. Ale skąd? Jak? Sprawdzasz kieszenie. Puste. Myślisz co ostatnio robiłeś.\n"
            "Jadłeś obiad z żoną a potem pustka. Po chwili rozmyślań decydujesz się ruszyć w podróż po wyspie. W końcu musisz jakoś znaleźć wyjście!\n";
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
        } else {
            move.move(moving);
        }
        int backupXCoord = hero.getXCoord();
        int backupYCoord = hero.getYCoord();
        hero.setXCoord(hero.getXCoord() + move.getX());
        hero.setYCoord(hero.getYCoord() + move.getY());
        field = mapa.map[hero.getXCoord()][hero.getYCoord()];
        FieldFactory fieldFactory;
        hero = fieldFactory.runFactory(field, strength, hero);
        if (field == 's' || field == 'm' || field == 'l') {
            hero.setXCoord(backupXCoord);
            hero.setYCoord(backupYCoord);
        }
        moving = NULL;
    } while (!hero.finished);
    cout << "";
}
