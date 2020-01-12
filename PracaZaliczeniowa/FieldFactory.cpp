//
// Created by nomuron on 05.01.2020.
//

#include "FieldFactory.h"
#include "Potion.h"
#include "Holy.h"
#include "Corrupted.h"
#include "Air.h"
#include "Earth.h"
#include "Belt.h"
#include "DarkTome.h"


void FieldFactory::createF() {
    Forest forest;
    forest.makeEvent();
}

void FieldFactory::createS() {
    Sea sea;
    sea.makeEvent();
}

void FieldFactory::createM() {
    Mountain mountain;
    mountain.makeEvent();
}

void FieldFactory::createL() {
    Lake lake;
    lake.makeEvent();
}

Rat FieldFactory::createRat(int strength) {
    Rat rat;
    rat.setDefeat(false);
    rat.fight(strength);
    return rat;
}

Wolf FieldFactory::createWolf(int strength) {
    Wolf wolf;
    wolf.setDefeat(false);
    wolf.fight(strength);
    return wolf;
}

Goblin FieldFactory::createGoblin(int strength) {
    Goblin goblin;
    goblin.setDefeat(false);
    goblin.fight(strength);
    return goblin;
}

Character FieldFactory::createP(Character hero) {
    FieldFactory::hero = hero;
    cout << "Znajdujesz leżący na ziemi wywar.\n\n";
    Potion potion;
    string potionName = potion.getName();
    vector<string> inv = hero.inventory;
    inv.insert(inv.begin(),potionName);
    hero.inventory = inv;
    return hero;
}

Character FieldFactory::createB(Character hero) {
    FieldFactory::hero = hero;
    cout << "Znajdujesz leżący na ziemi pasek.\n\n";
    Belt belt;
    string beltName = belt.getName();
    vector<string> inv = hero.inventory;
    inv.insert(inv.end(),beltName);
    hero.inventory = inv;
    return hero;
}

Character FieldFactory::createD(Character hero) {
    FieldFactory::hero = hero;
    cout << "Znajdujesz leżacą na ziemi księge.\n\n";
    DarkTome darkTome;
    string TomeName = darkTome.getName();
    vector<string> inv = hero.inventory;
    inv.insert(inv.end(),TomeName);
    hero.inventory = inv;
    return hero;
}

Character FieldFactory::createH(Character hero) {
    hero = hero;
    Holy holy;
    rid = holy.HolyRiddle();
    if (rid==true){
        hero.setHasHoly(true);
        vector<string> inv = hero.inventory;
        inv.insert(inv.end(),"Święty pierścień\n");
        hero.inventory = inv;
    }
    return hero;
}

Character FieldFactory::createC(Character hero) {
    FieldFactory::hero = hero;
    Corrupted corrupted;
    rid = corrupted.CorRiddle();
    if (rid==true){
        hero.setHasCor(true);
        vector<string> inv = hero.inventory;
        inv.insert(inv.end(),"Pierścień zepsucia\n");
        hero.inventory = inv;
    }
    return hero;
}

Character FieldFactory::createA(Character hero) {
    FieldFactory::hero = hero;
    Air air;
    rid = air.AirRiddle();
    if (rid==true){
        hero.setHasAir(true);
        vector<string> inv = hero.inventory;
        inv.insert(inv.end(),"Pierścień powietrza\n");
        hero.inventory = inv;
    }
    return hero;
}

Character FieldFactory::createE(Character hero) {
    FieldFactory::hero = hero;
    Earth earth;
    rid = earth.EarthRiddle();
    if (rid==true){
        hero.setHasEarth(true);
        vector<string> inv = hero.inventory;
        inv.insert(inv.end(),"Pierścień ziemi\n");
        hero.inventory = inv;
    }
    return hero;
}

Character FieldFactory::createT(Character hero) {
    FieldFactory::hero = hero;
    cout << "Podchodzisz do dziwnej jaskini. Losowego bloku skalnego na środku łaki. Zastanawiasz się o co tu chodzi. \n"
            " Skąd ta wielka skała z jaskinią od tak na środku pola. Decydujesz się podejść bliżej. Nagle słyszysz głos w głowie. \n"
            "- Witaj przyjacielu. Widzę, że szukasz wyjścia z tego miejsca. Podejdź mój drogi i dotknij ścian tej jaskini. \n"
            "Okaże się czy jesteś gotowy.\n\n";
    if (hero.isHasHoly()&&hero.isHasCor()&&hero.isHasAir()&&hero.isHasEarth()){
        cout << "Doświadczyłeś wielu rzeczy podczas podróży przez tą wyspę mój drogi. Nauczyłeś się tego, czego miałeś się nauczyć. \n"
                "A teraz wracaj do domu.\n\n";
        hero.setFinished(true);
    }
    else {
        cout << "Niestety nie jesteś jeszcze gotowy na powrót. Święta księga mówi jasno. Tylko ten co zaznał dobro i zło, \n"
                "oraz ten co powietrze nad nami, oraz ziemię, nasz budulec, pod nami, posiadł, ten może wyjść z więzienia własnego umysłu. \n"
                "Wyruszaj dalej przyjacielu. Na tej wyspie jest jeszcze sporo tajemnic, które musisz odkryć.";
    }
    return hero;
}

Character FieldFactory::runFactory(char field, int strength, Character hero) {
    strength = strength;
    hero = hero;
    if (field=='f'){
        createF();
    } else if (field=='s'){
        createS();
    } else if (field=='m'){
        createM();
    } else if (field=='l'){
        createL();
    } else if (field=='r'){
        createRat(strength);
    } else if (field=='w'){
        createWolf(strength);
    } else if (field=='g'){
        createGoblin(strength);
    } else if (field=='p'){
        hero = createP(hero);
    } else if (field=='b'){
        hero = createB(hero);
    } else if (field=='d'){
        hero = createD(hero);
    } else if (field=='h'){
        hero = createH(hero);
    } else if (field=='c'){
        hero = createC(hero);
    } else if (field=='a'){
        hero = createA(hero);
    } else if (field=='e'){
        hero = createE(hero);
    } else if (field=='t'){
        hero = createT(hero);
    }
    return hero;
}