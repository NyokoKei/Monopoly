#include "Card_money.h"

CardMoney::CardMoney() : Card(){
    cardText = "Card Name";
    money_amount = 0;
}

void CardMoney::set_amount(int num) {
    money_amount = num;
}
void CardMoney::set_card_text(std::string text1) {
    cardText = text1;
}

void CardMoney::card_action(Bank *bank1, Player *player1) {
    bank1->take_money(money_amount);
    player1->give_money(money_amount);
}

std::string CardMoney::get_card_text(int num) {
    return cardText;
}//
// Created by 38063 on 24.12.2019.
//

