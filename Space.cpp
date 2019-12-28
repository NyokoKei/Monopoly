//
// Created by 38063 on 24.12.2019.
//

#include "Space.h"

//functions to set values
void Space::set_name(std::string inputName, std::string inputName2){
    name[0] = inputName;
    name[1] = inputName2;
    houses = 0;
}

void Space::set_action_text(std::string inputText, std::string inputText2){
    actionText[0] = inputText;
    actionText[1] = inputText2;
    houses = 0;
}

void Space::set_type(std::string inputType){
    spaceType = inputType;
}

void Space::set_property_cost(int inputCost){
    propertyCost = inputCost;
}

void Space::set_occupied(int inputOccupied){
    occupied = inputOccupied;
}

void Space::set_ownership(int inputOwnership){
    owned = inputOwnership;
}

void Space::set_mortgaged(bool inputMortgage){
    mortgaged = inputMortgage;
}

void Space::set_rent(int inputRent){
    rent = inputRent;
}

void Space::set_tax(int inputTax){
    tax = inputTax;
}

//functions to get values
std::string Space::get_name(int nameIndex){
    return name[nameIndex];
}

std::string Space::get_action_text(int textIndex){
    return actionText[textIndex];
}

int Space::get_property_cost(){
    return propertyCost;
}

int Space::get_free_parking(){
    return freeParking;
}

bool Space::get_mortgaged(){
    return mortgaged;
}

int Space::get_rent(){
    return rent;
}

int Space::get_tax(){
    return tax;
}

std::string Space::get_type(){
    return spaceType;
}

int Space::get_ownership(){
    return owned;
}

int Space::get_houses(){
    return houses;
}

void Space::set_houses(int inputHouses){
    houses = inputHouses;
}

bool Space::upgrade(){
    if(houses < 5){
        rent = rent * 2;
        houses++;
        return true;
    } else {
        return false;
    }
}
void Space::set_X(int x){
    X=x;
}

void Space::set_Y(int y) {
    Y=y;
}

int Space::get_Y() {
    return Y;
}

int Space::get_X(){
    return X;
}
bool Space::get_occupied(){
    return occupied;
}