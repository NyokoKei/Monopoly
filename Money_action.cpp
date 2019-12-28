//
// Created by 38063 on 24.12.2019.
//

#include "Money_action.h"

MoneyAction::MoneyAction() : Action(){
    money = 0;
}

MoneyAction::MoneyAction(std::string nameChoice) : Action(nameChoice) {
    money = 0;
}

MoneyAction::MoneyAction(std::string nameChoice, int moneyInput) : Action(nameChoice){
    money = moneyInput;
}

void MoneyAction::pay_money(Player* player1, Player* player2, int amount) {
    player1->take_money(amount);
    player2->give_money(amount);
}

int MoneyAction::get_money() {
    return money;
}

void MoneyAction::execute_action(Player* player1, Player* player2, int amount) {
    player1->take_money(amount);
    player2->give_money(amount);
}

void MoneyAction::given_bank(Player* player1, Bank* bank1, int amount) {
    player1->give_money(amount);
    bank1->give_money(amount);
}

void MoneyAction::take_bank(Player* player1, Bank* bank1, int amount) {
    bank1->take_money(amount);
    player1->take_money(amount);
}