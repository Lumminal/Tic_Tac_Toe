//
// Created by left on 29/3/2025.
//

#ifndef SCENEMANAGER_H
#define SCENEMANAGER_H
#include <SFML/Graphics.hpp>

// VERY Simple Scene Manager with another global var (sorry)
enum class Scenes {
    game,
    gameFinished,
};
inline Scenes currentScene = Scenes::game;

void changeScene(Scenes newScene);
void checkScenes(sf::RenderWindow& window);

#endif //SCENEMANAGER_H
