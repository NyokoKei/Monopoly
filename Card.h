//
// Created by 38063 on 24.12.2019.
//

#ifndef UNTITLED6_CARD_H
#define UNTITLED6_CARD_H
#include "Bank.h"
#include "Player.h"

class Card{
    std::string name; //название карточки
public:
    Card();
    virtual void set_amount(int ) = 0;
    virtual void set_card_text(std::string ) = 0;
    virtual void card_action(Bank* , Player* ) = 0;
    virtual std::string get_card_text(int ) = 0;
};
#endif //UNTITLED6_CARD_H
