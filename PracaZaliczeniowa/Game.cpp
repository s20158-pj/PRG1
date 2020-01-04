//
// Created by nomuron on 15.12.2019.
//

#include "Game.h"
#include "Move.h"

void Game::startGame() {
    Map map;
    Character Hero;
    Hero.setXCoord(4);
    Hero.setYCoord(4);
    Move move;
    if (Hero.finished==false){
        cout << "Jesteś w :" << Hero.getXCoord() << ", " << Hero.getYCoord() << endl;
        cout << "Gdzie chcesz iść\n";
        cout << "1)Północ 2)Południe 3)Wschód 4)Zachód: ";
        int moving;
        cin >> moving;
        move.move(moving, Hero);
    }

}
