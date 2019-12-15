#include <iostream>
#include "Character.h"
#include "Lake.h"
#include "Map.h"
#include "Moving.h"

using namespace std;

int main() {
    int move;
    Character Hero;
    Hero.setXCoord(4);
    Hero.setYCoord(4);
    cout << "You are at :" << Hero.getXCoord() << ", " << Hero.getYCoord() << endl;
    cout << "You find yourself in a clearing. Make a move\n";
    cout << "1)North 2)South 3)East 4)West: ";
    Moving moving;
    cin >> move;
    moving.setMove(move);

    Map mapa;
    cout << mapa.map[Hero.getXCoord()][Hero.getYCoord()];
//    if (move == 1){
//        Hero.setXCoord(Hero.getXCoord()+1);
//        Lake Lake;
//        if (!Lake.getMoveble()){
//            cout << "wez spierdalaj!\n";
//        }
//        //Lake.makeEvent();
//    }
//    if (move == 2){
//        Hero.setXCoord(Hero.getXCoord()-1);
//    }
//    if (move == 3){
//        Hero.setYCoord(Hero.getYCoord()-1);
//    }
//    if (move == 4){
//        Hero.setYCoord(Hero.getYCoord()+1);
//    }

    cout << "Currently you are at: " << Hero.getXCoord() << ", " << Hero.getYCoord();
    return 0;
}
