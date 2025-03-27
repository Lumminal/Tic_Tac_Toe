//
// Created by left on 27/3/2025.
//

#include "../gui_logic/drawSymbols.h"
#include "occupation.h"

#include <algorithm>
#include <cmath>

bool canDrawOnSquare(const sf::RenderWindow& window) {

    // Player
    for (unsigned int i = 0; i < squares; ++i) {
        if (isButtonPressed(sf::Mouse::Button::Left) && !isOccupied[i]) {
            mousePosition = sf::Vector2f(sf::Mouse::getPosition(window));
            return true;
        }
    }
    return false;
}

void drawOnSquareScreen(sf::RenderWindow& window) {

    unsigned int indexToDraw {calculateDistance(mousePosition)};
    if (canDrawOnSquare(window)) {
            drawSymbol('O', window, placementCoordinates[indexToDraw] - circleCenterModifier);
    }

    for (unsigned int i = 0; i < squares; ++i) {
        // make it stay forever on screen
    }
}


// On Game Start, fill the given arrays.
void initfillCoordinates() {
    int X   {0};
    int Y {100};

    for (unsigned int i = 0; i < squares; ++i) {
        // False by default
        isOccupied[i] = false;

        if (i == 0) {
            X = 150;
        } else {
            X += 300;
        }

        if (i % 3 == 0 && i != 0) {
            Y += 200;
            X = 150;
        }

        // Default Coordinates
        placementCoordinates[i] = sf::Vector2f(X, Y);
    }
}


unsigned int calculateDistance(sf::Vector2f& vectorToCompare) {

    unsigned int                min                     {0};
    double                      X                        {};
    double                      Y                        {};
    double                      distance                 {};
    std::array<double, squares> distances                {};

    for (unsigned int i = 0; i < squares; ++i) {
        X = vectorToCompare.x - placementCoordinates[i].x;
        Y = vectorToCompare.y - placementCoordinates[i].y;

        distance = std::sqrt(pow(X, 2) + pow(Y, 2));
        distances[i] = distance;
    }

    for (unsigned int i = 1; i < squares; ++i) {
        if (distances[i] < distances[min]) {
            min = i;
        }
    }

    return min;
}


