//
// Created by left on 29/3/2025.
//

#include "sceneManager.h"

#include "../../game_logic/winCondition.h"

#include "gameFinishedScene.h"
#include "gameScene.h"

void changeScene(Scenes newScene) {
    currentScene = newScene;
}

void checkScenes(sf::RenderWindow& window) {
    switch (currentScene) {
        case Scenes::game: {
            gameScene(window);
        } break;
        case Scenes::gameFinished: {
            gameFinishedScene(window);
        } break;
    }
}