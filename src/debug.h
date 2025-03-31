#ifndef DEBUG_H
#define DEBUG_H
#include "common.h"
#include <SFML/Graphics.hpp>

namespace Debug {
    inline void PrintCoordinatesToText(sf::RenderWindow& window) {
        sf::Text text(Common::debugFont);

        sf::Vector2f mousePos = static_cast<sf::Vector2f>(sf::Mouse::getPosition(window));
        sf::String show = std::to_string(static_cast<int>(mousePos.x)) + " " + std::to_string(static_cast<int>(mousePos.y));
        text.setString(show);
        text.setFillColor(sf::Color::Green);
        text.setCharacterSize(24);

        window.draw(text);
    }
}

#endif //DEBUG_H
