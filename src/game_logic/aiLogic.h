//
// Created by left on 29/3/2025.
//

#ifndef AILOGIC_H
#define AILOGIC_H

#include "occupation.h"
#include "turn.h"
#include "../gui_logic/drawSymbols.h"
#include <random>

constexpr int OUT_OF_BOUNDS {-1};

void computerAiLogic();
int ChooseRandomSquare();

#endif //AILOGIC_H
