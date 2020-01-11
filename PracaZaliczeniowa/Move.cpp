//
// Created by nomuron on 13.12.2019.
//
#include <iostream>
#include "Move.h"

void Move::move(int move) {
        switch (move) {
            case 1:
                x = -1;
                y = 0;
                break;
            case 2:
                x = 1;
                y = 0;
                break;
            case 3:
                x = 0;
                y = -1;
                break;
            case 4:
                x = 0;
                y = 1;
                break;
            case 5:
                x = 0;
                y = 0;
                break;
            default:
                cout << "Nie ma takiej czynności.\n";
                x = 0;
                y = 0;
                break;
        }
    }

int Move::getX() {
    return x;
}

int Move::getY() {
    return y;
}