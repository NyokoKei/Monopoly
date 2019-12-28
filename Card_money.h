//
// Created by 38063 on 24.12.2019.
//

#ifndef UNTITLED6_CARD_MONEY_H
#define UNTITLED6_CARD_MONEY_H
#include "Card.h"

class CardMoney: public Card{
    std::string cardText;
    int money_amount;
public:
    CardMoney();
    void set_amount(int );
    void set_card_text(std::string );
    void card_action(Bank* , Player* );
    std::string get_card_text(int );
};
#endif //UNTITLED6_CARD_MONEY_H
