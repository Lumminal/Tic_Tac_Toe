//
// Created by left on 29/3/2025.
//
#include "aiLogic.h"
#include "winCondition.h"
#include <iostream>

void computerAiLogic() {
    if (currentTurn == Turn::computerTurn) {
        int index {ChooseRandomSquare()};
        if (index == OUT_OF_BOUNDS) {
            return;
        }
        isOccupied[index / squaresRow][index % squaresCol] = true;
        symbolBeingOccupied[index / squaresRow][index % squaresCol] = 'X';
        currentTurn = Turn::playerTurn;
    }
}

int ChooseRandomSquare() {
    while (true) {
        int randomSquare = rand() % squares;
        if (!isOccupied[randomSquare / 3][randomSquare % 3]) {
            return randomSquare;
        }

        if (getOccupiedSquares() == Common::squares) {
            return OUT_OF_BOUNDS;
        }
    }

}
