#ifndef TEST_MENU_H
#define TEST_MENU_H
#include<SFML/Graphics.hpp>
void menu(sf::RenderWindow & window) {
    sf::Texture menuTexture1, menuTexture2, menuTexture3,  menuTexture4, aboutTexture, menuBackground, rulesTexture;
    menuTexture1.loadFromFile("Start.png");
    menuTexture2.loadFromFile("About.png");
    menuTexture4.loadFromFile("Exit.png");
    menuTexture3.loadFromFile("Rules.png");
    aboutTexture.loadFromFile("Creators.png");
    menuBackground.loadFromFile("Background.jpg");
    rulesTexture.loadFromFile("Rules (2).png");
    sf::Sprite menu1(menuTexture1), menu2(menuTexture2), menu4(menuTexture4), menu3(menuTexture3), about(aboutTexture), menuBg(menuBackground), rules(rulesTexture);
    bool isMenu = 1;
    int menuNum = 0; menu1.setPosition(150, 100);
    menu2.setPosition(150, 100);
    menu3.setPosition(150, 100);
    menu4.setPosition(150, 100);
    menuBg.setPosition(0, 0);
    rules.setPosition(150, 100);

    //////////////////////////////МЕНЮ///////////////////
    while (isMenu) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
            menuNum = 0;
            window.clear(sf::Color::White);

            if (sf::IntRect(150, 250, 400, 75).contains(sf::Mouse::getPosition(window))) {
                menuNum = 1;
            }
            if (sf::IntRect(150, 325, 400, 75).contains(sf::Mouse::getPosition(window))) {
                menuNum = 2;
            }
            if (sf::IntRect(150, 400, 400, 75).contains(sf::Mouse::getPosition(window))) {
                menuNum = 3;
            }
            if (sf::IntRect(150, 475, 400, 75).contains(sf::Mouse::getPosition(window))) {
                menuNum = 4;
            }

            if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
                if (menuNum == 1) {
                    window.clear(sf::Color::White);
                    isMenu = false;//если нажали первую кнопку, то выходим из меню

                }
                if (menuNum == 2) {
                    window.draw(about);
                    window.display();
                    while (!sf::Keyboard::isKeyPressed(sf::Keyboard::Escape));


                }
                if (menuNum == 3) {
                    rules.setPosition(100, 100);
                    window.draw(rules);
                    window.display();
                    while (!sf::Keyboard::isKeyPressed(sf::Keyboard::Escape));
                }
                if (menuNum == 4) {
                    window.close();
                    isMenu = false;
                }

            }
        }
        window.draw(menuBg);
        window.draw(menu1);
        window.draw(menu2);
        window.draw(menu3);
        window.draw(menu4);
        window.display();
    }
}
#endif //TEST_MENU_H
