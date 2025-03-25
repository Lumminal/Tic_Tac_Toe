#include <SFML/Graphics.hpp>

#include "common.h"
#include <iostream>

#include "gui_logic/drawLines.h"

int main(){
    sf::RenderWindow window(sf::VideoMode({Common::SCREEN_WIDTH, Common::SCREEN_HEIGHT}), "Tic Tac Toe");

    while (window.isOpen()) {
        while (const std::optional event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
        }
        window.clear(sf::Color::White);
        std::cout << sf::Mouse::getPosition(window).x << ", " << sf::Mouse::getPosition(window).y << "\n";
        drawLines(window);
        window.display();
    }
}