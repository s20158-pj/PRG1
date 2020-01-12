cmake_minimum_required(VERSION 3.15)
project(PracaZaliczeniowa)

set(CMAKE_CXX_STANDARD 11)

add_executable(PracaZaliczeniowa main.cpp Character.cpp Character.h Field.h Lake.cpp Lake.h Map.cpp Map.h Mountain.cpp Mountain.h Forest.cpp Forest.h Sea.cpp Sea.h Move.cpp Move.h Game.cpp Game.h FieldFactory.cpp FieldFactory.h Rat.cpp Rat.h Monster.h Wolf.cpp Wolf.h Goblin.cpp Goblin.h RollDice.cpp RollDice.h Potion.cpp Potion.h Holy.cpp Holy.h Corrupted.cpp Corrupted.h Air.cpp Air.h Earth.cpp Earth.h Temple.cpp Temple.h Belt.cpp Belt.h DarkTome.cpp DarkTome.h LevelUp.cpp LevelUp.h)