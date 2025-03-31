#ifndef SCENEMANAGER_H
#define SCENEMANAGER_H
#include <SFML/Graphics.hpp>

// VERY Simple Scene Manager with another global var (sorry)
enum class Scenes {
    game,
    gameFinished,
    mainMenu,
};
inline Scenes currentScene = Scenes::mainMenu;

void changeScene(Scenes newScene);
void checkScenes(sf::RenderWindow& window);

#endif //SCENEMANAGER_H
