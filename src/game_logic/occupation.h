//
// Created by left on 27/3/2025.
//

#ifndef OCCUPATION_H
#define OCCUPATION_H
#include <SFML/Graphics.hpp>
#include <array>

// draw based on mouse input

static sf::Vector2f                      mousePosition              {}; // Current mouse position

constexpr int                            squares                    {9}; // Number of squares available in the screen
constexpr sf::Vector2f                   circleCenterModifier  {40, 50}; // The circle for some reason isn't centered, unlike X

inline std::array<bool, squares>         isOccupied                   {}; // Is the current square occupied?
inline std::array<sf::Vector2f, squares> placementCoordinates         {}; // Holds the coordinates where a symbol can be placed


bool canDrawOnSquare(const sf::RenderWindow& window);

void drawOnSquareScreen(sf::RenderWindow& window);


// TODO: Move these to another file (e.g. utils.h)
void initfillCoordinates(); // Fill arrays
unsigned int calculateDistance(sf::Vector2f& vectorToCompare); // Return closest distance to array of coordinates
#endif //OCCUPATION_H
