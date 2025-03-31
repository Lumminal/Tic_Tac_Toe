#ifndef OCCUPATION_H
#define OCCUPATION_H

#include <SFML/Graphics.hpp>
#include <array>
#include "turn.h"
#include "aiLogic.h"
#include "../common.h"
#include "../utils.h"

using namespace Common;

static sf::Vector2f                                 mousePosition                      {};  // Current mouse position
constexpr sf::Vector2f                              circleCenterModifier         {40, 50};  // The circle symbol for some reason isn't centered so this fixes it

inline constexpr int                                squaresRow                        {3};
inline constexpr int                                squaresCol                        {3};

inline Array2d<int, squaresRow, squaresCol>         isOccupied                         {};  // Is the current square occupied?
inline Array2d<char, squaresRow, squaresCol>        symbolBeingOccupied                {};  // Holds which symbols are taking which square
inline std::array<sf::Vector2f, squares>            placementCoordinates               {};  // Holds the coordinates where a symbol can be placed


bool canDrawOnSquare();                                                                     // Mouse Input
void drawOnSquareScreen(const sf::RenderWindow& window);                                    // Process mouse input
void drawAllSymbols(sf::RenderWindow& window);                                              // Draw everything

int getOccupiedSquares();                                                                   // Utility Function

#endif //OCCUPATION_H
