#include "sceneManager.h"

#include "gameFinishedScene.h"
#include "gameScene.h"
#include "mainMenu.h"

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
        case Scenes::mainMenu: {
            mainMenuScene(window);
        } break;
    }
}