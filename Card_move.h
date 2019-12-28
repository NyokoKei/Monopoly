//
// Created by 38063 on 24.12.2019.
//

#ifndef UNTITLED6_CARD_MOVE_H
#define UNTITLED6_CARD_MOVE_H
#include "Card.h"

class CardMove : public Card{
    std::string cardText;
    int location_num;
public:
    CardMove();
    void set_amount(int );
    void set_card_text(std::string );
    void card_action(Bank* , Player* );
    std::string get_card_text(int );
    int get_amount();
};
#endif //UNTITLED6_CARD_MOVE_H
