//
// Created by nomuron on 08.01.2020.
//



#include <unistd.h>
#include "RollDice.h"
int RollDice::rolling() {
    srand(time(0));
    RollDice::num = rand()%6;
    return num;
}

int RollDice::rolling2() {
    sleep(1);
    srand(time(0));
    RollDice::num2 = rand()%4;
    return num2;
}