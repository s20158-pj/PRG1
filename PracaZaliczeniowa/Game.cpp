//
// Created by nomuron on 15.12.2019.
//

#include "Game.h"
#include "FactoryChoose.h"

using namespace std;

void Game::startGame() {
    Map mapa;
    Character hero;
    hero.setXCoord(3);
    hero.setYCoord(3);
    Move move;
    char field;
    int moving;
    do {
        cout << "Jesteś w :" << hero.getXCoord() << ", " << hero.getYCoord() << endl;
        cout << "Gdzie chcesz iść\n";
        cout << "1)Północ 2)Południe 3)Zachód 4)Wschód: ";
        cin >> moving;
        move.move(moving);
        int backupXCoord = hero.getXCoord();
        int backupYCoord = hero.getYCoord();
        hero.setXCoord(hero.getXCoord() + move.getX());
        hero.setYCoord(hero.getYCoord() + move.getY());
        field = mapa.map[hero.getXCoord()][hero.getYCoord()];
        FieldFactory fieldFactory;
        fieldFactory.runFactory(field);
        if (field == 's' || field == 'm' || field == 'l') {
        hero.setXCoord(backupXCoord);
        hero.setYCoord(backupYCoord);
        }
    } while (!hero.finished);

}
