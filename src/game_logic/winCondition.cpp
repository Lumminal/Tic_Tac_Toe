//
// Created by left on 29/3/2025.
//
#include "winCondition.h"

WinConditions calculateWinCondition(const char ch) {
    assert(ch == 'X' || ch == 'O' && "DrawSymbol: type not recognized");
    int sumCol {0};
    int sumRow {0};
    int sumDiag {0};
    int sumRDiag {0};

    // Check Conditions
    for (int i = 0; i < squaresRow; i++) {
        for (int j = 0; j < squaresCol; j++) {
            if (symbolBeingOccupied[i][j] == ch) {
                ++sumRow;
            }

            if (symbolBeingOccupied[j][i] == ch) {
                ++sumCol;
            }

            if (symbolBeingOccupied[i][j] == ch && i == j) {
                ++sumDiag;
            }

            if (symbolBeingOccupied[i][j] == ch && (i + j == squaresCol - 1) ) {
                ++sumRDiag;
            }
        }

        if (sumRow == sumToWin || sumCol == sumToWin || sumDiag == sumToWin || sumRDiag == sumToWin) {
            timer.start();
            currentTurn = Turn::none; // Disable clicks
            if (timer.getElapsedTime() >= timeToWait) {
                timer.reset();
                if (ch == 'X') {
                    return WinConditions::computerWin;
                }
                return WinConditions::playerWin;
            }
        }
        sumRow = 0;
        sumCol = 0;
    }

    if (getOccupiedSquares() == Common::squares) {
        timer.start();
        currentTurn = Turn::none; // Disable clicks
        if (timer.getElapsedTime() >= timeToWait) {
            timer.reset();
            return WinConditions::tie;
        }
    }


    return WinConditions::ongoing;
}

void checkIfSymbolHasWon(const char ch) {
    assert(ch == 'X' || ch == 'O' && "DrawSymbol: type not recognized");
    WinConditions whoWon = calculateWinCondition(ch);
    if (whoWon != WinConditions::ongoing) {
        whoHasWon = whoWon;
        changeScene(Scenes::gameFinished);
        currentTurn = Turn::none;
    }
}
