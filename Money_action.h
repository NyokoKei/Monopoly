//
// Created by 38063 on 24.12.2019.
//

#ifndef UNTITLED6_MONEY_ACTION_H
#define UNTITLED6_MONEY_ACTION_H
#include "Player.h"
#include "Bank.h"
#include "Action.h"

class MoneyAction: public Action{
    int money;
public:
    MoneyAction();
    MoneyAction(std::string );
    MoneyAction(std::string , int );

    void pay_money(Player* , Player* , int );
    int get_money();
    void execute_action(Player* , Player* , int );
    void given_bank(Player* , Bank* , int );
    void take_bank(Player* , Bank* , int );
};
#endif //UNTITLED6_MONEY_ACTION_H
