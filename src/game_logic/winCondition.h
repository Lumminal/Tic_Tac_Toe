//
// Created by left on 29/3/2025.
//

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

static sf::Clock timer;
static sf::Time timeToWait = sf::seconds(3.0f);

WinConditions calculateWinCondition(char ch);
void checkIfSymbolHasWon(char ch);

#endif //WINCONDITION_H
