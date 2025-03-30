//
// Created by left on 26/3/2025.
//

#ifndef DRAWSYMBOLS_H
#define DRAWSYMBOLS_H

#include <SFML/Graphics.hpp>

// Draw the user-inputted symbols to the screen.
//
// type: Either 'O' or 'X'.
void drawSymbol(char type, sf::RenderWindow& window, sf::Vector2f positionToDraw);

#endif //DRAWSYMBOLS_H
