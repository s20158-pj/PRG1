//
// Created by nomuron on 08.01.2020.
//

#include "FactoryChoose.h"

#include <utility>

void FactoryChoose::factoryChooser(char field) {
    if (field=='r' || field=='w' || field=='g'){
        fieldType=field;
        FieldFactory fieldFactory;
        fieldFactory.runFactory(fieldType);
    } else {
        BattleFactory battleFactory;
        battleFactory.runBattleFactory(fieldType);
    }
}