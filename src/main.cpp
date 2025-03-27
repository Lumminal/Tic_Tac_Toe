#include <SFML/Graphics.hpp>

#include "common.h"
#include "debug.h"
#include <iostream>

#include "gui_logic/drawLines.h"

#include "game_logic/occupation.h"

int main(){
    sf::RenderWindow window(sf::VideoMode({Common::SCREEN_WIDTH, Common::SCREEN_HEIGHT}), "Tic Tac Toe");

    initfillCoordinates();

    while (window.isOpen()) {
        while (const std::optional event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
        }
        window.clear(sf::Color::White);

        drawLines(window);

        drawOnSquareScreen(window);

        Debug::PrintCoordinatesToText(window);


        window.display();
    }
}