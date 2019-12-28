#include <SFML/Graphics.hpp>
#include <iostream>
#include <ctime>
#include <vector>
#include "Dice.h"
#include "Player.h"
#include "Bank.h"
#include "Card.h"
#include "Card_money.h"
#include "Card_move.h"
#include "Game_board.h"
#include "Money_action.h"
#include "Go_to_action.h"
#include "Menu.h"
#include <array>



int main(){
   srand(time(NULL)); // для рандома костей
    //открывает консольное окно
    sf::RenderWindow window(sf::VideoMode(900, 700), "GAME \"MONOPOLY\"");

    //создает меню
    menu(window);

    //позиция консольного окна
    window.setPosition(sf::Vector2i(200, 0));
    window.setKeyRepeatEnabled(false);
    sf::Texture pTexture, dice_1, dice_2, plTexture, plTexture2, roll;
    sf::Sprite pImage, dImage, dImage2, plImage, plImage2, pRoll;
    sf::Font font;
    sf::Text text("", font, 20), text1("", font, 20), text2("", font, 20), text3("", font, 20), text4("", font, 20), text5("", font, 20), text6("", font, 20), text7("", font, 20);

    //обьявляем 2 кости
    Dice dice1, dice2;
    //банк
    Bank bank;
    int k1=6, k2=6;

    //вызываем файл с полем
    if(!pTexture.loadFromFile("hasbro_00009e88_images_1410174772-min.jpg"))
        std::cout<<"We could not open file hasbro_00009e88_images_1410174772-min.jpg"<<std::endl;

    //рисуем поле
    pImage.setTexture(pTexture);

    //вызываем 1 кость
    if(!dice_1.loadFromFile(dice1.showDice(k1)))
        std::cout<<"We could not open file "<<dice1.showDice(k1)<<std::endl;

    //рисуем 1 кость
    dImage.setTexture(dice_1);

    //позиция 1 кости
    dImage.setPosition(250, 300);

    //вызываем 2 кость
    if(!dice_2.loadFromFile(dice2.showDice(k2)))
        std::cout<<"We could not open file "<<dice2.showDice(k2)<<std::endl;

    //рисуем 2 кость
    dImage2.setTexture(dice_2);

    //позиция 2 кости
    dImage2.setPosition(350, 300);


    //создаем игрока

   // Player player[2];
   std::array<Player, 2> player;
    //меняем имя
    player[0].setPlayerName("Galya");
    player[1].setPlayerName("Anya");

    //меняем иконку
    player[0].setGamePieceName("dragon.png");
    player[1].setGamePieceName("surfer.png");

    //вызываес файл иконки
    if(!plTexture.loadFromFile(player[0].getGamePieceName()))
        std::cout<<"We could not open file "<<player[0].getGamePieceName()<<std::endl;
    if(!plTexture2.loadFromFile(player[1].getGamePieceName()))
        std::cout<<"We could not open file "<<player[1].getGamePieceName()<<std::endl;

    //вызываем шрифт текста
    if(!font.loadFromFile("OstrichSansRounded-Medium.otf"))
        std::cout<<"We could not open OstrichSansRounded-Medium.otf"<<std::endl;

    //рисуем иконку
    plImage.setTexture(plTexture);
    plImage2.setTexture(plTexture2);

    //позиция иконки
    plImage.setPosition(player[0].getX(), player[0].getY());
    player[1].setPos(player[1].getX(), 650);
    plImage2.setPosition(player[1].getX(), player[1].getY());

    //int index[10] = {0,1,2,3,4,5,6,7,8,9};
    std::array<int, 10> index = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int random1 = -1;
    int random2 = -1;
    int tempNum = -1;
    int i=0;

    for(int i = 0; i < 50; i++){
        random1 = rand()%10;
        random2 = rand()%10;

        tempNum = index[random1];
        index[random1] = index[random2];
        index[random2] = tempNum;
    }

    //setting up the Community Chest cards
    Card** community = new Card*[10];
    community[index[0]] = new CardMove();
    community[index[1]] = new CardMoney();
    community[index[2]] = new CardMoney();
    community[index[3]] = new CardMove();
    community[index[4]] = new CardMoney();
    community[index[5]] = new CardMoney();
    community[index[6]] = new CardMove();
    community[index[7]] = new CardMoney();
    community[index[8]] = new CardMoney();
    community[index[9]] = new CardMoney();

    //
    community[index[0]]->set_card_text("Advance to GO!");
    community[index[0]]->set_amount(0);
    //
    community[index[1]]->set_card_text("Get compensation! Get 75$");
    community[index[1]]->set_amount(75);
    //
    community[index[2]]->set_card_text("It's your Birthday! Get 150$");
    community[index[2]]->set_amount(150);
    //
    community[index[3]]->set_card_text("Advance to Illinois Avenue!");
    community[index[3]]->set_amount(24);
    //
    community[index[4]]->set_card_text("You get a Research \nPosition! Get 100$");
    community[index[4]]->set_amount(100);
    //
    community[index[5]]->set_card_text("Won 2nd Place at \nSongfest! Get 20$");
    community[index[5]]->set_amount(20);
    //
    community[index[6]]->set_card_text("March to the Coliseum!");
    community[index[6]]->set_amount(39);
    //
    community[index[7]]->set_card_text("Parents send \nyou a care package!");
    community[index[7]]->set_amount(15);
    //
    community[index[8]]->set_card_text("You get a \nPaid Internship! Get 200$");
    community[index[8]]->set_amount(200);
    //
    community[index[9]]->set_card_text("Given the Pell \nGrant! Get 20$");
    community[index[9]]->set_amount(20);

    //setting up the Chance cards
    Card** chance = new Card*[10];

    chance[index[0]] = new CardMove();
    chance[index[1]] = new CardMove();
    chance[index[2]] = new CardMoney();
    chance[index[3]] = new CardMove();
    chance[index[4]] = new CardMoney();
    chance[index[5]] = new CardMoney();
    chance[index[6]] = new CardMove();
    chance[index[7]] = new CardMoney();
    chance[index[8]] = new CardMove();
    chance[index[9]] = new CardMoney();
    //
    chance[index[0]]->set_card_text("Advance to GO!");
    chance[index[0]]->set_amount(0);
    //
    chance[index[1]]->set_card_text("Advance to \nWater Works");
    chance[index[1]]->set_amount(28);
    //
    chance[index[2]]->set_card_text("You steal from charity!\nGet 50$");
    chance[index[2]]->set_amount(50);
    //
    chance[index[3]]->set_card_text("advance to St's \nCharles Place");
    chance[index[3]]->set_amount(11);
    //
    chance[index[4]]->set_card_text("Your parents \ngive you money!\nGet 100$");
    chance[index[4]]->set_amount(100);
    //
    chance[index[5]]->set_card_text("There is an error \nwith your banking! Get 15$");
    chance[index[5]]->set_amount(15);
    //
    chance[index[6]]->set_card_text("Take trip to \nPennsylvania Railroad");
    chance[index[6]]->set_amount(15);
    //
    chance[index[7]]->set_card_text("You found some \nprinter ink!\nGet 15$");
    chance[index[7]]->set_amount(15);
    //
    chance[index[8]]->set_card_text("Advance to \nReading Railroad");
    chance[index[8]]->set_amount(5);
    //
    chance[index[9]]->set_card_text("Got a good grade in \nprogramming class!\nGet 100$");
    chance[index[9]]->set_amount(100);

    Game_Board gameBoard;
    sf::String answer;
    gameBoard.create_players(2);
    gameBoard.set_player_name(0, player[0].getPlayerName());
    gameBoard.set_player_name(1, player[1].getPlayerName());
    std::array<int, 2> arr={0, 0}, arrr{0, 0};
    int numAlive = 2;
    MoneyAction moneyAction;
    GoToAction goToAction;
    int communityCount = 0;
    int chanceCount = 0;
    while(window.isOpen()) {
        window.setKeyRepeatEnabled(false);
        int k = 0;
        sf::Event event;
        while (window.pollEvent(event)) {

                if(event.type== sf::Event::Closed){
                    window.close();}

                    //std::cout<<"1";
                    text5.setString("");
                    text4.setString("");
                    text6.setString("");
                    window.setKeyRepeatEnabled(false);
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1)) {
                window.setKeyRepeatEnabled(false);
                if (gameBoard.get_player_money(0) < 0 || gameBoard.get_player_money(1) < 0) {
                    return 0;
                }
                k1 = dice1.rollDice();
                k2 = dice2.rollDice();
                if (!dice_1.loadFromFile(dice1.showDice(k1)))
                    std::cout << "We could not open file " << dice1.showDice(k1) << std::endl;
                dImage.setTexture(dice_1);

                //show dice 2
                if (!dice_2.loadFromFile(dice2.showDice(k2)))
                    std::cout << "We could not open file " << dice2.showDice(k2) << std::endl;
                dImage2.setTexture(dice_2);

                int pastLocation = gameBoard.get_player_location(i);
                //int currentOwnership = gameBoard.get_space_ownership(currentLocation);

                int futureLocation = 0;
                player[i % 2].setLocation(player[i % 2].move_player(k1 + k2));
                gameBoard.move(i % 2, (k1 + k2));
                int a = gameBoard.get_player_location(i % 2);
                int currentLocation = gameBoard.get_player_location(i % 2);
                int x = gameBoard.get_space_x(a);
                int y = gameBoard.get_space_y(a);
                if (i % 2 == 0) {
                    plImage.setPosition(x, y);
                } else {
                    plImage2.setPosition(x, y);
                }

            }
                            text3.setString(player[i % 2].getPlayerName() + ":  " + std::to_string(k1 + k2) + "\n");
                            arr[i%2]=arrr[i%2]%40;
                            arrr[i%2]=(arrr[i%2]+k1+k2)%40;
                            if (arr[i % 2] > arrr[i % 2]) {
                                moneyAction.given_bank(gameBoard.get_player(i % 2), &bank, 200);
                                text4.setString("*** You Passed GO!\nCollect $200! ***");
                            }


                            if (gameBoard.space_type(arrr[i % 2]) == "Property" ||
                                gameBoard.space_type(arrr[i % 2]) == "Railroad" ||
                                gameBoard.space_type(arrr[i % 2]) == "Utility") {

                                if (gameBoard.get_space_ownership(arrr[i % 2]) < 0) {
                                    text5.setString(gameBoard.get_space_name(arrr[i % 2], 0) +
                                                    gameBoard.get_space_name(arrr[i % 2], 1));
                                    text4.setString("Would you like to buy?\nY-yes\nN-no");
                                    //window.setKeyRepeatEnabled(false);
                                    //if(sf::Event::KeyReleased)

                                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::N)) {
                                        std::cout<<"N";
                                        text5.setString("");
                                        text4.setString("");
                                        text6.setString("");
                                        //std::cout << gameBoard.get_space_ownership(i % 2);
                                    }
                                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Y)){
                                        window.setKeyRepeatEnabled(false);
                                        window.setKeyRepeatEnabled(false);
                                        if (gameBoard.get_player_money(i % 2) -
                                            gameBoard.get_space_property_cost(arrr[i % 2]) <= 0) {
                                            text6.setString("\n\nNot enough money!");
                                            std::cout<<"Y";
                                            break;
                                        }

                                        moneyAction.take_bank(gameBoard.get_player(i % 2), &bank,
                                                              gameBoard.get_space_property_cost(arrr[i % 2]));
                                        gameBoard.set_space_occupied(arr[i % 2]);
                                        gameBoard.set_space_ownership(arr[i % 2], i % 2);
                                        std::cout << gameBoard.get_space_ownership(arr[i % 2]) << " "
                                                  << gameBoard.get_space_property_cost(arrr[i % 2]) << " "
                                                  << gameBoard.get_player_location(i % 2) << " "
                                                  << gameBoard.get_space_rent(arrr[i % 2]) << "\n";
                                    }

                                }


                            }

                                //if the property is owned
                            else if (gameBoard.get_space_ownership(arr[i % 2]) >= 0) {
                                if (gameBoard.get_player_name(i % 2) !=
                                    gameBoard.get_player_name(gameBoard.get_space_ownership(arr[i % 2]))) {
                                    text4.setString("PAY: " + std::to_string(gameBoard.get_space_rent(arr[i % 2])));
                                    moneyAction.execute_action(gameBoard.get_player(i % 2),
                                                               gameBoard.get_player(arr[i % 2]),
                                                               gameBoard.get_space_rent(arr[i % 2]));
                                    std::cout<<std::endl<<"PAY: "<<std::to_string(gameBoard.get_space_rent(arr[i % 2]))<<"\n";
                                }
                                if (gameBoard.get_player_money(i % 2) <= 0 &&
                                    gameBoard.is_player_alive(i % 2) == true) {
                                    text6.setString(gameBoard.get_player_name(i % 2) + " is run out of money\n-> LOSE");
                                    gameBoard.player_lost(i % 2);
                                    menu(window);

                                    for (int j = 0; j < 40; j++) {
                                        if (gameBoard.get_space_ownership(j) == i % 2) {
                                            gameBoard.set_space_ownership(j, -1);
                                        }
                                    }
                                    numAlive--;
                                    continue;
                                }
                            } else if (gameBoard.space_type(arrr[i % 2]) == "Tax") {
                                text4.setString("TAX " + std::to_string(gameBoard.get_space_tax(arrr[i % 2])));
                                moneyAction.take_bank(gameBoard.get_player(i % 2), &bank,
                                                      gameBoard.get_space_tax(arrr[i % 2]));

                                if (gameBoard.get_player_money(i % 2) <= 0) {
                                    text4.setString(
                                            gameBoard.get_player_name(i % 2) + " is run out of money-> LOSE\n" + gameBoard.get_player_name((i+1)%2) + " is a winner!!!!!!");
                                    gameBoard.player_lost(i % 2);

                                    //std::cout<<gameBoard.is_player_alive(i%2);

                                    for (int j = 0; j < 40; j++) {
                                        if (gameBoard.get_space_ownership(j) == i % 2) {
                                            gameBoard.set_space_ownership(j, -1);
                                        }
                                    }
                                    numAlive--;
                                    continue;
                                }
                            } else if (gameBoard.space_type(arrr[i % 2]) == "GoJail") {
                                goToAction.executeAction(gameBoard.get_player(i % 2), gameBoard.get_player(i % 2), 10);
                                player[i % 2].setLocation(10);
                                moneyAction.take_bank(gameBoard.get_player(i % 2), &bank,
                                                      gameBoard.get_space_tax(arrr[i % 2]));
                                if (i % 2 == 0) {
                                    plImage.setPosition(20, 610);
                                } else {
                                    plImage2.setPosition(20, 610);
                                }
                            } else if (gameBoard.space_type(arrr[i % 2]) == "Community Chest") {
                                community[communityCount]->card_action(&bank, gameBoard.get_player(i % 2));
                                text6.setString(community[communityCount]->get_card_text(0));

                                int futureLocation = gameBoard.get_player_location(i % 2);
                                player[i % 2].setLocation(futureLocation);
                                if (i % 2 == 0)
                                    plImage.setPosition(gameBoard.get_space_x(player[i % 2].getLocation()),
                                                        gameBoard.get_space_y(player[i % 2].getLocation()));
                                else
                                    plImage2.setPosition(gameBoard.get_space_x(player[i % 2].getLocation()),
                                                         gameBoard.get_space_y(player[i % 2].getLocation()));

                                window.draw(plImage);
                                window.draw(plImage2);
                                if (futureLocation < arrr[i % 2]) {
                                    moneyAction.given_bank(gameBoard.get_player(i % 2), &bank, 200);
                                    text4.setString("*** You Passed GO!\nCollect $200! ***");
                                }
                                communityCount++;
                                if (communityCount > 9) {
                                    communityCount = 0;
                                }
                            } else if (gameBoard.space_type(arrr[i % 2]) == "Chance") {
                                chance[chanceCount]->card_action(&bank, gameBoard.get_player(i % 2));
                                text6.setString(
                                        chance[chanceCount]->get_card_text(0));
                                int futureLocation = gameBoard.get_player_location(i % 2);
                                player[i % 2].setLocation(futureLocation);
                                std::cout << gameBoard.space_type(arrr[i % 2]) << chance[chanceCount]->get_card_text(0)
                                          << chance[chanceCount]->get_card_text(1);
                                if (i % 2 == 0)
                                    plImage.setPosition(gameBoard.get_space_x(player[i % 2].getLocation()),
                                                        gameBoard.get_space_y(player[i % 2].getLocation()));
                                else
                                    plImage2.setPosition(gameBoard.get_space_x(player[i % 2].getLocation()),
                                                         gameBoard.get_space_y(player[i % 2].getLocation()));
                                window.draw(plImage);
                                window.draw(plImage2);
                                if (futureLocation < arrr[i % 2]) {
                                    moneyAction.given_bank(gameBoard.get_player(i % 2), &bank, 200);
                                    text4.setString("*** You Passed GO!\nCollect $200! ***");
                                }
                                chanceCount++;
                                if (chanceCount > 9) {
                                    chanceCount = 0;
                                }
                            }
                            i++;
                          //

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num2))menu(window);
                        else break;

            }

//показываем поле
            window.draw(pImage);
            //показываем 1 кость
            window.draw(dImage);
            //показываем 2 кость
            window.draw(dImage2);
            //показываем иконку
            window.draw(plImage);
            window.draw(plImage2);
            //показываем текст
            window.draw(text);
            window.draw(text1);
            window.draw(text2);
            window.draw(text3);
            window.draw(text4);
            window.draw(text5);
            window.draw(text6);
            window.draw(text7);
            //выводим текст на экран
            text.setString("Bank: " + std::to_string(bank.getAmount()) + "$\n" + gameBoard.get_player_name(0) + ": " + std::to_string(gameBoard.get_player_money(0)) + "$\t" + gameBoard.get_player_name(1) + ": " + std::to_string(gameBoard.get_player_money(1)) + "$\n");
            text.setPosition(720, 0);
            text1.setPosition(720, 70);
            text2.setPosition(720, 90);
            text3.setPosition(720, 160);
            text4.setPosition(720, 200);
            text5.setPosition(720, 180);
            text6.setPosition(720, 250);
            text7.setPosition(720, 280);



            if (player[i%2].isAlive() == true) text1.setString("It's " + player[i%2].getPlayerName() + "'s turn");

            text2.setString("1. Roll\n2. Back to Menu\n");

            window.display();
        }

    return 0;
}
