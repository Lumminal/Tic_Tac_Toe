#ifndef TURN_H
#define TURN_H
#include "occupation.h"

// Simple Turn System (yes, I know global vars are bad)
enum class Turn {
    playerTurn,
    computerTurn,
    none,
};
inline Turn currentTurn = Turn::playerTurn;

#endif //TURN_H
