//
// Created by 38063 on 24.12.2019.
//

#include "Game_board.h"


Game_Board::Game_Board() {
    //Use functions in Space class to initialize each space

    //Space 0
    spaces[0].set_name("   GO!   ", "         ");
    spaces[0].set_type("START");
    spaces[0].set_property_cost(0);
    spaces[0].set_occupied(true);
    spaces[0].set_ownership(-1);
    spaces[0].set_mortgaged(false);
    spaces[0].set_rent(0);
    spaces[0].set_tax(0);
    spaces[0].set_action_text("Pass Go! ", "Get $200 ");
    spaces[0].set_X(620);
    spaces[0].set_Y(610);

    //Space 1
    spaces[1].set_name("   Mediterranean   ", "   Avenue   ");
    spaces[1].set_type("Property");
    spaces[1].set_property_cost(60);
    spaces[1].set_occupied(false);
    spaces[1].set_ownership(-1);
    spaces[1].set_mortgaged(false);
    spaces[1].set_rent(2);
    spaces[1].set_tax(0);
    spaces[1].set_action_text("         ", "  $60  ");
    spaces[1].set_X(560);
    spaces[1].set_Y(610);

    //Space 2
    spaces[2].set_name("Community", "  Chest  ");
    spaces[2].set_type("Community Chest");
    spaces[2].set_property_cost(0);
    spaces[2].set_occupied(false);
    spaces[2].set_ownership(-1);
    spaces[2].set_mortgaged(false);
    spaces[2].set_rent(0);
    spaces[2].set_tax(0);
    spaces[2].set_action_text(" Draw a  " ,"  Card   ");
    spaces[2].set_X(500);
    spaces[2].set_Y(610);

    //Space 3
    spaces[3].set_name(" Baltic ", "  Avenue  ");
    spaces[3].set_type("Property");
    spaces[3].set_property_cost(60);
    spaces[3].set_occupied(false);
    spaces[3].set_ownership(-1);
    spaces[3].set_mortgaged(false);
    spaces[3].set_rent(4);
    spaces[3].set_tax(0);
    spaces[3].set_action_text("         ", "  $60  ");
    spaces[3].set_X(440);
    spaces[3].set_Y(610);

    //Space 4
    spaces[4].set_name(" Income ", "  Tax  ");
    spaces[4].set_type("Tax");
    spaces[4].set_property_cost(0);
    spaces[4].set_occupied(false);
    spaces[4].set_ownership(-1);
    spaces[4].set_mortgaged(false);
    spaces[4].set_rent(0);
    spaces[4].set_tax(200);
    spaces[4].set_action_text("         ", "Pay $200  ");
    spaces[4].set_X(380);
    spaces[4].set_Y(610);

    //Space 5
    spaces[5].set_name(" Reading ", "  Railroad  ");
    spaces[5].set_type("Railroad");
    spaces[5].set_property_cost(200);
    spaces[5].set_occupied(false);
    spaces[5].set_ownership(-1);
    spaces[5].set_mortgaged(false);
    spaces[5].set_rent(25);
    spaces[5].set_tax(0);
    spaces[5].set_action_text("         ", " $200  ");
    spaces[5].set_X(320);
    spaces[5].set_Y(610);

    //Space 6
    spaces[6].set_name(" Oriental ", "  Avenue  ");
    spaces[6].set_type("Property");
    spaces[6].set_property_cost(100);
    spaces[6].set_occupied(false);
    spaces[6].set_ownership(-1);
    spaces[6].set_mortgaged(false);
    spaces[6].set_rent(6);
    spaces[6].set_tax(0);
    spaces[6].set_action_text("         ", " $100  ");
    spaces[6].set_X(260);
    spaces[6].set_Y(610);

    //Space 7
    spaces[7].set_name(" Chance ", "       ");
    spaces[7].set_type("Chance");
    spaces[7].set_property_cost(0);
    spaces[7].set_occupied(false);
    spaces[7].set_ownership(-1);
    spaces[7].set_mortgaged(false);
    spaces[7].set_rent(0);
    spaces[7].set_tax(0);
    spaces[7].set_action_text(" Draw a   ", "    card  ");
    spaces[7].set_X(200);
    spaces[7].set_Y(610);
    //Space 8
    spaces[8].set_name(" Vermont ", "  Avenue  ");
    spaces[8].set_type("Property");
    spaces[8].set_property_cost(100);
    spaces[8].set_occupied(false);
    spaces[8].set_ownership(-1);
    spaces[8].set_mortgaged(false);
    spaces[8].set_rent(6);
    spaces[8].set_tax(0);
    spaces[8].set_action_text("         ", "   $100  ");
    spaces[8].set_X(140);
    spaces[8].set_Y(610);
    //Space 9
    spaces[9].set_name(" Connecticut ", "  Avenue  ");
    spaces[9].set_type("Property");
    spaces[9].set_property_cost(120);
    spaces[9].set_occupied(false);
    spaces[9].set_ownership(-1);
    spaces[9].set_mortgaged(false);
    spaces[9].set_rent(8);
    spaces[9].set_tax(0);
    spaces[9].set_action_text("         ", "  $120  ");
    spaces[9].set_X(80);
    spaces[9].set_Y(610);
    //Space 10
    spaces[10].set_name(" SACS!  ", "         ");
    spaces[10].set_type("Jail");
    spaces[10].set_property_cost(0);
    spaces[10].set_occupied(false);
    spaces[10].set_ownership(-1);
    spaces[10].set_mortgaged(false);
    spaces[10].set_rent(0);
    spaces[10].set_tax(0);
    spaces[10].set_action_text("  Just   ", "Visiting ");
    spaces[10].set_X(20);
    spaces[10].set_Y(610);
    //Space 11
    spaces[11].set_name(" St. Charles  ", "  Place    ");
    spaces[11].set_type("Property");
    spaces[11].set_property_cost(140);
    spaces[11].set_occupied(false);
    spaces[11].set_ownership(-1);
    spaces[11].set_mortgaged(false);
    spaces[11].set_rent(10);
    spaces[11].set_tax(0);
    spaces[11].set_action_text("      ", "  $140   ");
    spaces[11].set_X(20);
    spaces[11].set_Y(550);

    //Space 12
    spaces[12].set_name("  Electric  ", "  Company    ");
    spaces[12].set_type("Utility");
    spaces[12].set_property_cost(150);
    spaces[12].set_occupied(false);
    spaces[12].set_ownership(-1);
    spaces[12].set_mortgaged(false);
    spaces[12].set_rent(10);
    spaces[12].set_tax(0);
    spaces[12].set_action_text("      ", "  $150   ");
    spaces[12].set_X(20);
    spaces[12].set_Y(490);

    //Space 13
    spaces[13].set_name("  States  ", "  Avenue    ");
    spaces[13].set_type("Property");
    spaces[13].set_property_cost(140);
    spaces[13].set_occupied(false);
    spaces[13].set_ownership(-1);
    spaces[13].set_mortgaged(false);
    spaces[13].set_rent(10);
    spaces[13].set_tax(0);
    spaces[13].set_action_text("      ", "  $140   ");
    spaces[13].set_X(20);
    spaces[13].set_Y(430);

    //Space 14
    spaces[14].set_name("  Virgina  ", "  Avenue    ");
    spaces[14].set_type("Property");
    spaces[14].set_property_cost(160);
    spaces[14].set_occupied(false);
    spaces[14].set_ownership(-1);
    spaces[14].set_mortgaged(false);
    spaces[14].set_rent(12);
    spaces[14].set_tax(0);
    spaces[14].set_action_text("      ", "  $160   ");
    spaces[14].set_X(20);
    spaces[14].set_Y(370);
    //Space 15
    spaces[15].set_name("  Pennsylvania  ", "  Railroad    ");
    spaces[15].set_type("Property");
    spaces[15].set_property_cost(200);
    spaces[15].set_occupied(false);
    spaces[15].set_ownership(-1);
    spaces[15].set_mortgaged(false);
    spaces[15].set_rent(25);
    spaces[15].set_tax(0);
    spaces[15].set_action_text("      ", "  $200   ");
    spaces[15].set_X(20);
    spaces[15].set_Y(310);

    //Space 16
    spaces[16].set_name("  St. James  ", "  Place    ");
    spaces[16].set_type("Property");
    spaces[16].set_property_cost(180);
    spaces[16].set_occupied(false);
    spaces[16].set_ownership(-1);
    spaces[16].set_mortgaged(false);
    spaces[16].set_rent(14);
    spaces[16].set_tax(0);
    spaces[16].set_action_text("      ", "  $180   ");
    spaces[16].set_X(20);
    spaces[16].set_Y(250);

    //Space 17
    spaces[17].set_name("  Community  ", "  chest    ");
    spaces[17].set_type("Community chest");
    spaces[17].set_property_cost(0);
    spaces[17].set_occupied(false);
    spaces[17].set_ownership(-1);
    spaces[17].set_mortgaged(false);
    spaces[17].set_rent(0);
    spaces[17].set_tax(0);
    spaces[17].set_action_text("   Draw a ", "  card  ");
    spaces[17].set_X(20);
    spaces[17].set_Y(190);

    //Space 18
    spaces[18].set_name("  Tennessee  ", "  Avenue    ");
    spaces[18].set_type("Property");
    spaces[18].set_property_cost(190);
    spaces[18].set_occupied(false);
    spaces[18].set_ownership(-1);
    spaces[18].set_mortgaged(false);
    spaces[18].set_rent(14);
    spaces[18].set_tax(0);
    spaces[18].set_action_text("      ", "  $180   ");
    spaces[18].set_X(20);
    spaces[18].set_Y(130);
    //Space 19
    spaces[19].set_name("  New York  ", "  Avenue    ");
    spaces[19].set_type("Property");
    spaces[19].set_property_cost(200);
    spaces[19].set_occupied(false);
    spaces[19].set_ownership(-1);
    spaces[19].set_mortgaged(false);
    spaces[19].set_rent(16);
    spaces[19].set_tax(0);
    spaces[19].set_action_text("      ", "  $200   ");
    spaces[19].set_X(20);
    spaces[19].set_Y(70);

    //Space 20
    spaces[20].set_name("  Free  ", "  Parking    ");
    spaces[20].set_type("Free Parking");
    spaces[20].set_property_cost(0);
    spaces[20].set_occupied(false);
    spaces[20].set_ownership(-1);
    spaces[20].set_mortgaged(false);
    spaces[20].set_rent(0);
    spaces[20].set_tax(0);
    spaces[20].set_action_text("      ", "        ");
    spaces[20].set_X(20);
    spaces[20].set_Y(10);

    //Space 21
    spaces[21].set_name("  Kentucky  ", "  Avenue    ");
    spaces[21].set_type("Property");
    spaces[21].set_property_cost(220);
    spaces[21].set_occupied(false);
    spaces[21].set_ownership(-1);
    spaces[21].set_mortgaged(false);
    spaces[21].set_rent(18);
    spaces[21].set_tax(0);
    spaces[21].set_action_text("      ", "  $220  ");
    spaces[21].set_X(80);
    spaces[21].set_Y(10);

    //Space 22
    spaces[22].set_name("  Chance  ", "      ");
    spaces[22].set_type("Chance");
    spaces[22].set_property_cost(0);
    spaces[22].set_occupied(false);
    spaces[22].set_ownership(-1);
    spaces[22].set_mortgaged(false);
    spaces[22].set_rent(0);
    spaces[22].set_tax(0);
    spaces[22].set_action_text(" Draw a  ", "  Card   ");
    spaces[22].set_X(140);
    spaces[22].set_Y(10);

    //Space 23
    spaces[23].set_name("  Indiana  ", "  Avenue    ");
    spaces[23].set_type("Property");
    spaces[23].set_property_cost(220);
    spaces[23].set_occupied(false);
    spaces[23].set_ownership(-1);
    spaces[23].set_mortgaged(false);
    spaces[23].set_rent(18);
    spaces[23].set_tax(0);
    spaces[23].set_action_text("      ", "  $220  ");
    spaces[23].set_X(200);
    spaces[23].set_Y(10);

    //Space 24
    spaces[24].set_name("  Illinois  ", "  Avenue    ");
    spaces[24].set_type("Property");
    spaces[24].set_property_cost(240);
    spaces[24].set_occupied(false);
    spaces[24].set_ownership(-1);
    spaces[24].set_mortgaged(false);
    spaces[24].set_rent(20);
    spaces[24].set_tax(0);
    spaces[24].set_action_text("      ", "  $240  ");
    spaces[24].set_X(260);
    spaces[24].set_Y(10);

    //Space 25
    spaces[25].set_name("  B.& O.  ", "  Railroad    ");
    spaces[25].set_type("Railroad");
    spaces[25].set_property_cost(200);
    spaces[25].set_occupied(false);
    spaces[25].set_ownership(-1);
    spaces[25].set_mortgaged(false);
    spaces[25].set_rent(25);
    spaces[25].set_tax(0);
    spaces[25].set_action_text("      ", "  $200  ");
    spaces[25].set_X(320);
    spaces[25].set_Y(10);

    //Space 26
    spaces[26].set_name("  Atlantic  ", "  Avenue    ");
    spaces[26].set_type("Property");
    spaces[26].set_property_cost(260);
    spaces[26].set_occupied(false);
    spaces[26].set_ownership(-1);
    spaces[26].set_mortgaged(false);
    spaces[26].set_rent(22);
    spaces[26].set_tax(0);
    spaces[26].set_action_text("      ", "  $260  ");
    spaces[26].set_X(380);
    spaces[26].set_Y(10);

    //Space 27
    spaces[27].set_name("  Ventnor  ", "  Avenue    ");
    spaces[27].set_type("Property");
    spaces[27].set_property_cost(260);
    spaces[27].set_occupied(false);
    spaces[27].set_ownership(-1);
    spaces[27].set_mortgaged(false);
    spaces[27].set_rent(22);
    spaces[27].set_tax(0);
    spaces[27].set_action_text("      ", "  $260  ");
    spaces[21].set_X(440);
    spaces[21].set_Y(10);

    //Space 28
    spaces[28].set_name("  Water  ", "  Works    ");
    spaces[28].set_type("Utility");
    spaces[28].set_property_cost(150);
    spaces[28].set_occupied(false);
    spaces[28].set_ownership(-1);
    spaces[28].set_mortgaged(false);
    spaces[28].set_rent(10);
    spaces[28].set_tax(0);
    spaces[28].set_action_text("      ", "  $150  ");
    spaces[28].set_X(500);
    spaces[28].set_Y(10);

    //Space 29
    spaces[29].set_name("  Marvin  ", "  Gardens    ");
    spaces[29].set_type("Property");
    spaces[29].set_property_cost(280);
    spaces[29].set_occupied(false);
    spaces[29].set_ownership(-1);
    spaces[29].set_mortgaged(false);
    spaces[29].set_rent(24);
    spaces[29].set_tax(0);
    spaces[29].set_action_text("      ", "  $220  ");
    spaces[29].set_X(560);
    spaces[29].set_Y(10);

    //Space 30
    spaces[30].set_name("Caught by", " D.P.S.  ");
    spaces[30].set_type("GoJail");
    spaces[30].set_property_cost(0);
    spaces[30].set_occupied(false);
    spaces[30].set_ownership(-1);
    spaces[30].set_mortgaged(false);
    spaces[30].set_rent(0);
    spaces[30].set_tax(100);
    spaces[30].set_action_text("  Go to  ", "  Jail!  ");
    spaces[30].set_X(620);
    spaces[30].set_Y(10);

    //Space 31
    spaces[31].set_name(" Pacific  ", " Avenue  ");
    spaces[31].set_type("Property");
    spaces[31].set_property_cost(300);
    spaces[31].set_occupied(false);
    spaces[31].set_ownership(-1);
    spaces[31].set_mortgaged(false);
    spaces[31].set_rent(26);
    spaces[31].set_tax(0);
    spaces[31].set_action_text("         ", "  $300   ");
    spaces[31].set_X(620);
    spaces[31].set_Y(70);

    //Space 32
    spaces[32].set_name("North Carolina", " Avenue  ");
    spaces[32].set_type("Property");
    spaces[32].set_property_cost(300);
    spaces[32].set_occupied(false);
    spaces[32].set_ownership(-1);
    spaces[32].set_mortgaged(false);
    spaces[32].set_rent(26);
    spaces[32].set_tax(0);
    spaces[32].set_action_text("         ", "  $300   ");
    spaces[32].set_X(620);
    spaces[32].set_Y(130);

    //Space 33
    spaces[33].set_name("Community", "  Chest  ");
    spaces[33].set_type("Community Chest");
    spaces[33].set_property_cost(0);
    spaces[33].set_occupied(false);
    spaces[33].set_ownership(-1);
    spaces[33].set_mortgaged(false);
    spaces[33].set_rent(0);
    spaces[33].set_tax(0);
    spaces[33].set_action_text(" Draw a  ", "  Card   ");
    spaces[33].set_X(620);
    spaces[33].set_Y(190);

    //Space 34
    spaces[34].set_name(" Pennsylvania", " Avenue  ");
    spaces[34].set_type("Property");
    spaces[34].set_property_cost(320);
    spaces[34].set_occupied(false);
    spaces[34].set_ownership(-1);
    spaces[34].set_mortgaged(false);
    spaces[34].set_rent(28);
    spaces[34].set_tax(0);
    spaces[34].set_action_text("         ", "  $320   ");
    spaces[34].set_X(620);
    spaces[34].set_Y(250);

    //Space 35
    spaces[35].set_name("  Short  ", " Line  ");
    spaces[35].set_type("Railroad");
    spaces[35].set_property_cost(200);
    spaces[35].set_occupied(false);
    spaces[35].set_ownership(-1);
    spaces[35].set_mortgaged(false);
    spaces[35].set_rent(25);
    spaces[35].set_tax(0);
    spaces[35].set_action_text("         ", "  $200   ");
    spaces[35].set_X(620);
    spaces[35].set_Y(310);

    //Space 36
    spaces[36].set_name(" Chance ", "     ");
    spaces[36].set_type("Chance");
    spaces[36].set_property_cost(0);
    spaces[36].set_occupied(false);
    spaces[36].set_ownership(-1);
    spaces[36].set_mortgaged(false);
    spaces[36].set_rent(0);
    spaces[32].set_tax(0);
    spaces[36].set_action_text(" Draw a ", "  Card   ");
    spaces[36].set_X(620);
    spaces[36].set_Y(370);

    //Space 37
    spaces[37].set_name(" Park ", " Place  ");
    spaces[37].set_type("Property");
    spaces[37].set_property_cost(350);
    spaces[37].set_occupied(false);
    spaces[37].set_ownership(-1);
    spaces[37].set_mortgaged(false);
    spaces[37].set_rent(35);
    spaces[37].set_tax(0);
    spaces[37].set_action_text("         ", "  $350   ");
    spaces[37].set_X(620);
    spaces[37].set_Y(430);

    //Space 38
    spaces[38].set_name(" Luxury ", " Tax  ");
    spaces[38].set_type("Tax");
    spaces[38].set_property_cost(0);
    spaces[38].set_occupied(false);
    spaces[38].set_ownership(-1);
    spaces[38].set_mortgaged(false);
    spaces[38].set_rent(0);
    spaces[38].set_tax(100);
    spaces[38].set_action_text("         ", "  Pay $75   ");
    spaces[38].set_X(620);
    spaces[38].set_Y(490);

    //Space 39
    spaces[39].set_name("Boardwalk", "     ");
    spaces[39].set_type("Property");
    spaces[39].set_property_cost(400);
    spaces[39].set_occupied(false);
    spaces[39].set_ownership(-1);
    spaces[39].set_mortgaged(false);
    spaces[39].set_rent(50);
    spaces[39].set_tax(0);
    spaces[39].set_action_text("         ", "  $400   ");
    spaces[39].set_X(620);
    spaces[39].set_Y(550);

    for(auto & space : spaces){
        space.set_houses(0);
    }
}

void Game_Board::move(int numPlayer, int amountInput) {
    movement.move_amount(&(players[numPlayer]), amountInput);
}

void Game_Board::create_players(int numPlayers) {
    players = new Player[numPlayers];
}

void Game_Board::set_player_name(int playerNum, std::string inputName) {
    players[playerNum].setPlayerName(inputName);
}

void Game_Board::set_game_piece(int playerNum, std::string inputPiece) {
    players[playerNum].setGamePiece(inputPiece);
}

std::string Game_Board::get_player_name(int playerNum) {
    return players[playerNum].getPlayerName();
}

std::string Game_Board::get_game_piece(int playerNum) {
    return players[playerNum].getGamePieceName();
}

Player* Game_Board::get_player(int num) {
    return &players[num];
}

int Game_Board::get_player_location(int playerNum) {
    return players[playerNum].getLocation();
}

int Game_Board::get_player_money(int playerNum) {
    return players[playerNum].getMoneyAmount();
}

std::string Game_Board::space_type(int inputIndex) {
    return spaces[inputIndex].get_type();
}

int Game_Board::get_space_ownership(int spaceIndex) {
    return spaces[spaceIndex].get_ownership();
}

int Game_Board::get_space_property_cost(int spaceIndex) {
    return spaces[spaceIndex].get_property_cost();
}

void Game_Board::set_space_ownership(int spaceIndex, int playerNum) {
    spaces[spaceIndex].set_ownership(playerNum);
}

int Game_Board::get_space_tax(int spaceIndex) {
    return spaces[spaceIndex].get_tax();
}

int Game_Board::get_space_rent(int spaceIndex) {
    return spaces[spaceIndex].get_rent();
}

int Game_Board::get_space_free_parking(int spaceIndex) {
    return spaces[spaceIndex].get_free_parking();
}

std::string Game_Board::get_space_name(int spaceIndex, int index) {
    return spaces[spaceIndex].get_name(index);
}

void Game_Board::upgrade_space(int spaceNum) {
    spaces[spaceNum].upgrade();
}

bool Game_Board::is_player_alive(int playerNum) {
    return players[playerNum].isAlive();
}

void Game_Board::player_lost(int playerNum) {
    players[playerNum].reset();
}
int Game_Board::get_space_x(int i) {
    return spaces[i].get_X();
}
int Game_Board::get_space_y(int i) {
    return spaces[i].get_Y();
}

void Game_Board::set_space_occupied(int index){
    spaces[index].set_occupied(true);
}

bool Game_Board::get_space_occupied(int index){
    return spaces[index].get_occupied();
}