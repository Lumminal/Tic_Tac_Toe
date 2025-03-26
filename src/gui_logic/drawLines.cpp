//
// Created by left on 25/3/2025.
//
#include "drawLines.h"

// Draw 2x2 Lines
void drawLines(sf::RenderWindow& window) {
    //Draw single line

    // Initialize with first value
    sf::Vector2f previousPosHorizontal {};
    sf::Vector2f previousPosVertical {};

    // Draw 2 Lines Horizontally
    for (int i = 1; i <= LinesHorizontal; ++i) {
        sf::RectangleShape line({static_cast<float>(Common::SCREEN_HEIGHT), 5.0});

        if (i != 1) {
            line.setPosition({previousPosHorizontal.x - SpacingHorizontal, 0});
        } else {
            line.setPosition({static_cast<float>(Common::SCREEN_WIDTH) - SpacingHorizontal, 0});
        }

        previousPosHorizontal = line.getPosition();
        line.setRotation(sf::degrees(90));
        line.setFillColor(sf::Color::Red);
        window.draw(line);
    }

    // Draw 2 Lines Vertically
    for (int i = 1; i <= LinesVertical; ++i) {
        sf::RectangleShape line({static_cast<float>(Common::SCREEN_WIDTH), 5.0});

        if (i != 1) {
            line.setPosition({0, previousPosVertical.y + SpacingVertical});
        } else {
            line.setPosition({0, SpacingVertical});
        }

        previousPosVertical = line.getPosition();
        line.setFillColor(sf::Color::Red);
        window.draw(line);
    }
}
