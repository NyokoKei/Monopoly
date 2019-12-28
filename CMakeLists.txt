cmake_minimum_required(VERSION 3.15)
project(untitled6)

set(CMAKE_CXX_STANDARD 14)

find_package(SFML 2.5.1 COMPONENTS system window graphics network audio)

add_executable(untitled6 main.cpp Dice.h Dice.cpp Player.h Player.cpp Action.h Action.cpp Card.h Card.cpp Bank.cpp Bank.h Card_money.h Card_money.cpp Card_move.h Card_move.cpp Game_board.h Game_board.cpp Go_to_action.h Go_to_action.cpp Money_action.h Money_action.cpp Move_action.h Move_action.cpp Space.h Space.cpp Menu.h)

target_link_libraries(untitled6 sfml-system sfml-window sfml-graphics sfml-audio sfml-network)