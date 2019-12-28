//
// Created by 38063 on 24.12.2019.
//

#include "Bank.h"

Bank::Bank(): moneyAmount(100000){}

void Bank::give_money(int amount){
    moneyAmount = moneyAmount - amount;
}

int Bank::getAmount(){
    return moneyAmount;
}

void Bank::take_money(int amount){
    moneyAmount = moneyAmount + amount;
}