//
// Created by 38063 on 24.12.2019.
//

#ifndef UNTITLED6_MOVE_ACTION_H
#define UNTITLED6_MOVE_ACTION_H
#include "Player.h"
#include "Action.h"

class MoveAction : public Action {

private:
    int amount;

public:
    //constructors
    MoveAction(std::string nameChoice, int amountInput);
    MoveAction(std::string nameChoice);
    MoveAction();

    //other functions
    void set_amount(int amountInput);
    void move_amount(Player *player, int amountInput);
    int get_amount();
    void executeAction(Player* player1, Player* player2, int amount);
};
#endif //UNTITLED6_MOVE_ACTION_H
