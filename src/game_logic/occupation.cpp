//
// Created by left on 27/3/2025.
//

#include "../gui_logic/drawSymbols.h"
#include "occupation.h"
#include "winCondition.h"

#include <algorithm>
#include <cmath>

bool canDrawOnSquare() {
    if (isButtonPressed(sf::Mouse::Button::Left) && currentTurn == Turn::playerTurn) {
        return true;
    }
    return false;
}

void drawOnSquareScreen(const sf::RenderWindow& window) {
    if (canDrawOnSquare()) {
        mousePosition = sf::Vector2f(sf::Mouse::getPosition(window));
        unsigned int index {calculateDistance(mousePosition, placementCoordinates)};
        if (isOccupied[index / squaresRow][index % squaresCol]) {
                return;
        }

        isOccupied[index / squaresRow][index % squaresCol] = true;
        symbolBeingOccupied[index / squaresRow][index % squaresCol] = 'O';

        currentTurn = Turn::computerTurn;
        computerAiLogic();
    }
}

void drawAllSymbols(sf::RenderWindow& window) {
    drawOnSquareScreen(window);

    for (unsigned int i = 0; i < squaresRow; ++i) {
        for (unsigned int j = 0; j < squaresCol; ++j) {
            if (isOccupied[i][j]) {
                if (symbolBeingOccupied[i][j] == 'O') {
                    drawSymbol('O', window, placementCoordinates[i * 3 + j] - circleCenterModifier);
                } else if (symbolBeingOccupied[i][j] == 'X') {
                    drawSymbol('X', window, placementCoordinates[i * 3 + j]);
                }
            }
        }
    }
}

int getOccupiedSquares() {
    int occupiedSquares {0};

    for (unsigned int i = 0; i < squaresRow; ++i) {
        for (unsigned int j = 0; j < squaresCol; ++j) {
            if (isOccupied[i][j]) {
                occupiedSquares++;
            }
        }
    }
    return occupiedSquares;
}


