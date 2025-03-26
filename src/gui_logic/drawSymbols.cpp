//
// Created by left on 26/3/2025.
//
#include "drawSymbols.h"

#include "../../cmake-build-debug/_deps/sfml-src/src/SFML/Window/InputImpl.hpp"


void drawSymbol(char type, sf::RenderWindow& window, sf::Vector2f positionToDraw) {
    assert(type == 'X' || type == 'O' && "DrawSymbol: type not recognized");

    switch (type) {
        case 'X':
        {
            sf::RectangleShape lineRight({150.0, 5.0});
            sf::RectangleShape lineLeft({150.0, 5.0});

            lineRight.setRotation(sf::degrees(315));
            lineLeft.setRotation(sf::degrees(-315));

            lineRight.setFillColor(sf::Color::Black);
            lineLeft.setFillColor(sf::Color::Black);

            lineRight.setOrigin(sf::Vector2f(75.0, 2.5));
            lineLeft.setOrigin(sf::Vector2f(75.0, 2.5));

            // Add Custom Position Here
            lineRight.setPosition(sf::Vector2f(sf::priv::InputImpl::getMousePosition(window)));
            lineLeft.setPosition(sf::Vector2f(sf::priv::InputImpl::getMousePosition(window)));



            window.draw(lineRight);
            window.draw(lineLeft);


        } break;
        case 'O':
        {
            sf::CircleShape circle({50.0f});

            circle.setFillColor(sf::Color::Blue);


            window.draw(circle);
        }

    }
}
