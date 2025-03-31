#include "winCondition.h"

#include "../audioPlayback.h"

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
            currentTurn = Turn::none; // Disable clicks
            if (ch == 'X') {
                return WinConditions::computerWin;
            }
                return WinConditions::playerWin;
            }
        sumRow = 0;
        sumCol = 0;
    }

    if (getOccupiedSquares() == Common::squares) {
        currentTurn = Turn::none; // Disable clicks
        return WinConditions::tie;
    }


    return WinConditions::ongoing;
}

void checkIfSymbolHasWon(const char ch) {
    assert(ch == 'X' || ch == 'O' && "DrawSymbol: type not recognized");
    WinConditions whoWon = calculateWinCondition(ch);

    if (whoWon == WinConditions::playerWin) {
        winSound.play();
    } else if (whoWon == WinConditions::computerWin) {
        loseSound.play();
    } else if (whoWon == WinConditions::tie) {
        loseSound.play();
    }

    if (whoWon != WinConditions::ongoing) {
        whoHasWon = whoWon;
        changeScene(Scenes::gameFinished);
        currentTurn = Turn::none;
    }
}
