#ifndef AILOGIC_H
#define AILOGIC_H

#include "occupation.h"
#include "turn.h"
#include <random>

#include "../gui_logic/drawSymbols.h"

constexpr int OUT_OF_BOUNDS {-1};

void computerAiLogic();
int ChooseRandomSquare();

#endif //AILOGIC_H
