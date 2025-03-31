#ifndef WINCONDITION_H
#define WINCONDITION_H

#include "../common.h"
#include "occupation.h"

#include "../gui_logic/drawLines.h"
#include "../gui_logic/scenes/sceneManager.h"

enum class WinConditions {
    playerWin,
    computerWin,
    tie,
    ongoing,
};
constexpr int sumToWin {3};

inline WinConditions whoHasWon = WinConditions::ongoing; // Used for game finished scene

WinConditions calculateWinCondition(char ch);
void checkIfSymbolHasWon(char ch);

#endif //WINCONDITION_H
