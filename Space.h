//
// Created by 38063 on 24.12.2019.
//

#ifndef UNTITLED6_SPACE_H
#define UNTITLED6_SPACE_H

#include <string>
#include <array>

class Space {

private:
    //std::string name[2];
    std::array<std::string, 2> name;
    //std::string actionText[2];
    std::array<std::string, 2> actionText;
    std::string spaceType; //property, card, tax, railroads, jail, etc
    int propertyCost;
    int freeParking;
    bool occupied;
    int owned;
    bool mortgaged;
    int houses;
    int rent;
    int tax;
    int X, Y;

public:
    //functions to set values
    void set_name(std::string inputName, std::string inputName2);
    void set_type(std::string inputType);
    void set_property_cost(int inputCost);
    void set_occupied(int inputOccupied);
    void set_ownership(int inputOwnership);
    void set_mortgaged(bool inputMortgage);
    void set_rent(int inputRent);
    void set_tax(int inputTax);
    void set_action_text(std::string textInput, std::string textInput2);
    void set_houses(int inputHouses);
    void set_X(int x);
    void set_Y(int y);
    bool upgrade();

    //functions to get values
    std::string get_name(int nameIndex);
    int get_property_cost();
    int get_free_parking();
    int get_X();
    int get_Y();
    bool get_mortgaged();
    int get_rent();
    int get_tax();
    int get_ownership();
    std::string get_action_text(int textIndex);
    std::string get_type();
    int get_houses();
    bool get_occupied();

};
#endif //UNTITLED6_SPACE_H
