#ifndef UTILS_H
#define UTILS_H

#include <math.h>
#include <SFML/Graphics.hpp>

template <typename T>
void clearArray(std::array<std::array<T, 3>, 3>& arr) {
    for (unsigned int i = 0; i < 3; ++i) {
        for (unsigned int j = 0; j < 3; ++j) {
            arr[i][j] = 0;
        }
    }
}

// Fill the PlacementCoordinates (in occupation.h) array with the Coordinates of where the symbols can be drawn.
inline void initfillCoordinates(std::array<sf::Vector2f, 9>& coords) {
    int X   {0};
    int Y {100};

    for (unsigned int i = 0; i < 9; ++i) {


        if (i == 0) {
            X = 150;
        } else {
            X += 300;
        }

        if (i % 3 == 0 && i != 0) {
            Y += 200;
            X = 150;
        }

        // Default Coordinates
        coords[i] = sf::Vector2f(X, Y);
    }
}

// Used mainly for when the user clicks on a square, in order to calculate the closest square to draw the symbol of the user ('O')
inline unsigned int calculateDistance(const sf::Vector2f& vectorToCompare, std::array<sf::Vector2f, 9>& coords) {

    unsigned int                min                     {0};
    double                      X                        {};
    double                      Y                        {};
    double                      distance                 {};
    std::array<double, 9> distances                {};

    for (unsigned int i = 0; i < 9; ++i) {
        X = vectorToCompare.x - coords[i].x;
        Y = vectorToCompare.y - coords[i].y;

        distance = std::sqrt(pow(X, 2) + pow(Y, 2));
        distances[i] = distance;
    }

    for (unsigned int i = 1; i < 9; ++i) {
        if (distances[i] < distances[min]) {
            min = i;
        }
    }

    return min;
}

#endif //UTILS_H
