//
// Created by nomuron on 12.01.2020.
//

#include "LevelUp.h"
Character LevelUp::levelUp(Character hero){
    LevelUp::hero = hero;
    if(hero.getExp() >= 5 && hero.getLevel()==1) {
        cout << "Zdobywasz drugi poziom";
        hero.setLevel(hero.getLevel()+1);
        hero.setExp(hero.getExp()-5);
        hero.setStrength(hero.getStrength()+1);
    }
    return hero;
}