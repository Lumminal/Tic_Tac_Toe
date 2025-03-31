#ifndef GAMESCENE_H
#define GAMESCENE_H
#include "../drawLines.h"
#include "../../game_logic/occupation.h"
#include "../../game_logic/winCondition.h"


inline void gameScene(sf::RenderWindow& window) {
    drawLines(window);
    drawAllSymbols(window);
    {
        checkIfSymbolHasWon('X');
        checkIfSymbolHasWon('O');
    }
}

#endif //GAMESCENE_H
