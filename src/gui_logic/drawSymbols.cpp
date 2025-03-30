//
// Created by left on 26/3/2025.
//
#include "drawSymbols.h"


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


            lineRight.setPosition(positionToDraw);
            lineLeft.setPosition(positionToDraw);



            window.draw(lineRight);
            window.draw(lineLeft);


        } break;
        case 'O':
        {
            sf::CircleShape circle({50.0f});

            circle.setFillColor(sf::Color::Transparent);

            circle.setOutlineColor(sf::Color(200, 255, 104));
            circle.setOutlineThickness(5.0f);

            circle.setPosition(positionToDraw);

            window.draw(circle);
        }

    }
}
