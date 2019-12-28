//
// Created by 38063 on 24.12.2019.
//

#ifndef UNTITLED6_GAME_BOARD_H
#define UNTITLED6_GAME_BOARD_H
#include "Space.h"
#include "Move_action.h"
#include "Player.h"
#include <string>
#include <array>
#include <vector>

class Game_Board{
    //Space spaces[40];
    std::array<Space, 40> spaces;
    Player* players;
    MoveAction movement;
public:
    Game_Board();

    void create_players(int);
    void set_player_name(int , std::string );
    void set_game_piece(int , std::string );


    std::string get_player_name(int );
    std::string get_game_piece(int );

    void move(int , int );
    Player* get_player(int );
    int get_player_location(int );
    int get_player_money(int );
    std::string space_type(int );
    int get_space_ownership(int );
    int get_space_property_cost(int );
    void set_space_ownership(int , int );
    int get_space_rent(int );
    int get_space_tax(int );
    int get_space_free_parking(int );
    std::string get_space_name(int , int );
    void upgrade_space(int );
    bool is_player_alive(int );
    void player_lost(int );
    int get_space_x(int);
    int get_space_y(int);
    void set_space_occupied(int );
    bool get_space_occupied(int );
};
#endif //UNTITLED6_GAME_BOARD_H
