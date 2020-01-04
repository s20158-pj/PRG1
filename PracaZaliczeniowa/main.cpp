#include <iostream>
#include "Character.h"
#include "Map.h"
#include "Move.h"
#include "Game.h"

using namespace std;

int main() {
    Game game;
    game.startGame();



    Move moving;
    cin >> move;
    moving.setMove(move);

    Map mapa;
    cout << mapa.map[Hero.getXCoord()][Hero.getYCoord()];


    cout << "Jesteś w : " << Hero.getXCoord() << ", " << Hero.getYCoord();
    return 0;
}
