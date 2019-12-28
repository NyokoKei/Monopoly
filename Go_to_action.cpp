//
// Created by 38063 on 24.12.2019.
//

#include "Go_to_action.h"

GoToAction::GoToAction() : Action(){
    spaceLocation = 0;
}

void GoToAction::executeAction(Player* player1, Player* player2, int amount){
    player1->setLocation(amount);
}