#include <SFML/Graphics.hpp>

#include "common.h"
#include "utils.h"

#include "game_logic/occupation.h"

#include "gui_logic/scenes/sceneManager.h"

int main(){
    sf::RenderWindow window(sf::VideoMode({Common::SCREEN_WIDTH, Common::SCREEN_HEIGHT}), "Tic Tac Toe");

    initfillCoordinates(placementCoordinates);

    while (window.isOpen()) {
        while (const std::optional event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
        }

        window.clear(sf::Color::White);

            checkScenes(window);

        window.display();
    }
}