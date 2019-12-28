//
// Created by 38063 on 24.12.2019.
//

#ifndef UNTITLED6_PLAYER_H
#define UNTITLED6_PLAYER_H
#include <string>
#include <array>
#include<vector>


class Player{
    std::string name;   //его имя
    std::string gamePiece;
    std::string gamePieceName; //название файла иконки
    bool alive;     //жив ли?
    int currentMoney;   //сколько денег осталось?
    std::vector<bool> indexOfProperties;
    int index;
    int x, y;    //ego coordinates
    int location; ///номер клетки на которой он находится

public:
    Player();
    Player(int );

    void setPlayerName(std::string );
    void setGamePiece(std::string );
    void setGamePieceName(std::string );
    void setOwned_indexProperty(int , bool );
    void setLocation(int );
    void setPos(int, int );
    void setMoneyAmount(int);

    std::string getPlayerName();
    std::string getGamePiece();
    int getMoneyAmount();
    bool getOwnedProperty(int);
    int getIndex();
    bool isAlive();
    std::string getGamePieceName();
    int getX();
    int getY();
    int getLocation();

    int give_money(int);
    int take_money(int);
    int move_player(int);
    void reset();
};
#endif //UNTITLED6_PLAYER_H
