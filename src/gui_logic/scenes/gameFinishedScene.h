//
// Created by left on 29/3/2025.
//

#ifndef GAMEFINISHEDSCENE_H
#define GAMEFINISHEDSCENE_H
#include "../../game_logic/winCondition.h"
#include "../../game_logic/occupation.h"
#include "../../game_logic/turn.h"
#include "../../utils.h"
#include "../../common.h"

inline void gameFinishedScene(sf::RenderWindow& window) {
    sf::RectangleShape background;
    background.setSize(sf::Vector2f(Common::SCREEN_WIDTH, Common::SCREEN_HEIGHT));

    background.setFillColor(sf::Color::White);

    sf::Text text(Common::debugFont);

    sf::String stringToShow {};
    if (whoHasWon == WinConditions::playerWin) {
        stringToShow = "PLAYER WINS!";
    } else if (whoHasWon == WinConditions::computerWin) {
        stringToShow = "COMPUTER WINS!";
    } else if (whoHasWon == WinConditions::tie) {
        stringToShow = "IT WAS A DRAW!";
    }
    stringToShow += "\n\tPress R to play again...";

    text.setString(stringToShow);
    text.setPosition({Common::SCREEN_WIDTH / 2.0 + 200, Common::SCREEN_HEIGHT / 2.0});
    text.setOrigin({Common::SCREEN_WIDTH / 2.0, Common::SCREEN_HEIGHT / 2.0});
    text.setFillColor(sf::Color::Green);
    text.setCharacterSize(36);
    text.setOutlineThickness(5.0f);

    if (isKeyPressed(sf::Keyboard::Key::R)) {
        clearArray(isOccupied);
        clearArray(symbolBeingOccupied);
        currentTurn = Turn::playerTurn;
        changeScene(Scenes::game);
    }

    window.draw(background);
    window.draw(text);
}

#endif //GAMEFINISHEDSCENE_H
