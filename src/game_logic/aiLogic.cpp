#include "aiLogic.h"
#include "winCondition.h"

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
        int randomSquare = rand() % squares; // This is not a good way to implement randomness but since it's a simple game, it will suffice
        if (!isOccupied[randomSquare / 3][randomSquare % 3]) {
            return randomSquare;
        }

        if (getOccupiedSquares() == Common::squares) {
            return OUT_OF_BOUNDS;
        }
    }

}
