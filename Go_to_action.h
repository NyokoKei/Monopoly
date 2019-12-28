//
// Created by 38063 on 24.12.2019.
//

#ifndef UNTITLED6_GO_TO_ACTION_H
#define UNTITLED6_GO_TO_ACTION_H
#include "Action.h"
#include "Player.h"

class GoToAction : public Action {

private:
    int spaceLocation;

public:
    GoToAction();
    void executeAction(Player* player1, Player* player2, int amount);

};
#endif //UNTITLED6_GO_TO_ACTION_H
