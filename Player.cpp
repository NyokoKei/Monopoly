//
// Created by 38063 on 24.12.2019.
//

#include "Player.h"
#include <string>
Player::Player() {
    currentMoney=2500;
    name="YOU";
    alive=true;
    x=620;
    y=610;
    for(int i=0; i<40; i++)indexOfProperties.push_back(false);
    index=0;
    location = 0;
}

void Player::setPlayerName(std::string Nname){
    name=Nname;
}

void Player::setOwned_indexProperty(int indexofProp, bool owned){
    indexOfProperties[indexofProp]=owned;
}

void Player::setLocation(int Nindex){
    index=Nindex;
}

void Player::setPos(int X, int Y){
    x=X;
    y=Y;
}

void Player::setMoneyAmount(int Nmoney){
    currentMoney=Nmoney;
}

void Player::setGamePiece(std::string inputPiece){
    gamePiece = inputPiece;
}

std::string Player::getPlayerName(){
    return name;
}

std::string Player::getGamePiece(){
    return gamePiece;
}

int Player::getMoneyAmount(){
    return currentMoney;
}

bool Player::getOwnedProperty(int inputIndex){
    return indexOfProperties[inputIndex];
}

int Player::getIndex(){
    return index;
}

bool Player::isAlive(){
    return alive;
}

std::string Player::getGamePieceName(){
    return gamePieceName;
}

int Player::getX(){
    return x;
}

int Player::getY(){
    return y;
}

int Player::getLocation(){
    return location;
}

int Player::give_money(int amount){
    currentMoney+=amount;
}

int Player::take_money(int amount){
    currentMoney-=amount;
}

int Player::move_player(int amount){
    location = (location + amount) % 40;
}

void Player::reset(){
    currentMoney = 0;
    location = 0;
    gamePiece = ' ';
    alive = false;
}

void Player::setGamePieceName(std::string inputPieceName){
    gamePieceName = inputPieceName;
}

Player::Player(int Mmoney) {
    currentMoney = Mmoney;
    location = 0;
    for(int i = 0; i < 40; i++){
        indexOfProperties.push_back(false);
    }
    alive = true;

    name = "John";
}