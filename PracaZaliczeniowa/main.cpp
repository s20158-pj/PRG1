#include <iostream>
#include "Character.h"
#include "Map.h"
#include "Moving.h"

using namespace std;

int main() {
    int move;
    Character Hero;
    Hero.setXCoord(4);
    Hero.setYCoord(4);
    cout << "Jesteś w :" << Hero.getXCoord() << ", " << Hero.getYCoord() << endl;
    cout << "Gdzie chcesz iść\n";
    cout << "1)Północ 2)Południe 3)Wschód 4)Zachód: ";
    Moving moving;
    cin >> move;
    moving.setMove(move);

    Map mapa;
    cout << mapa.map[Hero.getXCoord()][Hero.getYCoord()];


    cout << "Jesteś w : " << Hero.getXCoord() << ", " << Hero.getYCoord();
    return 0;
}
