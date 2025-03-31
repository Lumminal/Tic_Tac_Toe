#ifndef MAINMENU_H
#define MAINMENU_H
#include <SFML/Graphics.hpp>

#include "../../common.h"

#include "sceneManager.h"

constexpr sf::Color Pink {251, 231, 239, 255};

inline void mainMenuScene(sf::RenderWindow& window) {
    sf::Text logo(Common::debugFont);
    sf::Text howToPlay(Common::debugFont);

    sf::RectangleShape background(sf::Vector2f(Common::SCREEN_WIDTH, Common::SCREEN_HEIGHT));

    logo.setString("Tic Tac Toe");
    logo.setPosition(sf::Vector2f(Common::SCREEN_WIDTH / 2.0, Common::SCREEN_HEIGHT / 2.0));
    logo.setCharacterSize(36);
    logo.setFillColor(sf::Color::White);

    howToPlay.setString("Press Enter to start...");
    howToPlay.setPosition(logo.getPosition() + sf::Vector2f{0, 50});
    howToPlay.setCharacterSize(26);
    howToPlay.setFillColor(sf::Color::Red);

    background.setFillColor(Pink);

    // Change to Game
    if (isKeyPressed(sf::Keyboard::Key::Enter)) {
        changeScene(Scenes::game);
    }

    window.draw(background);
    window.draw(logo);
    window.draw(howToPlay);
}


#endif //MAINMENU_H
