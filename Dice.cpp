//
// Created by 38063 on 24.12.2019.
//

#include "Dice.h"

Dice::Dice() :sides(6){};

int Dice::rollDice() {
    int roll;
    roll=rand() % 6 + 1;

    return roll;
}

std::string Dice::showDice(int d){
    std::string s;
    switch(d){
        case 1:
            s="dice1.png";
            break;
        case 2:
            s="dice2.png";
            break;
        case 3:
            s="dice3.png";
            break;
        case 4:
            s="dice4.png";
            break;
        case 5:
            s="dice5.png";
            break;
        case 6:
            s="dice6.png";
            break;
    }
    return s;
}
