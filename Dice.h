//
// Created by 38063 on 24.12.2019.
//

#ifndef UNTITLED6_DICE_H
#define UNTITLED6_DICE_H

#include <string>

class Dice{
    int sides;
public:
    Dice(); //constructor
    int rollDice();
    std::string showDice(int);
};
#endif //UNTITLED6_DICE_H
