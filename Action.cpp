//
// Created by 38063 on 24.12.2019.
//

#include "Action.h"
#include <string>
Action::Action() {
    name = "Action Name";
}

Action::Action(std::string inputName) {
    name = inputName;
}