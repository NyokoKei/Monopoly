//
// Created by 38063 on 24.12.2019.
//

#include "Card_move.h"

CardMove::CardMove() : Card(){
    cardText = "Card Name";
    location_num = -1;
}

void CardMove::set_amount(int num) {
    location_num = num;
}

void CardMove::set_card_text(std::string text1) {
    cardText = text1;
}

void CardMove::card_action(Bank *bank1, Player *player1) {
    player1->setLocation(location_num);
}

std::string CardMove::get_card_text(int num) {
    return cardText;
}
int CardMove::get_amount(){
    return location_num;
}