add_executable(Tic_Tac_Toe main.cpp
        gui_logic/drawLines.h
        common.h
        gui_logic/drawLines.cpp
        gui_logic/drawSymbols.h
        gui_logic/drawSymbols.cpp
        debug.h
        game_logic/occupation.h
        game_logic/occupation.cpp
        game_logic/turn.h
        game_logic/aiLogic.h
        game_logic/aiLogic.cpp
        game_logic/winCondition.h
        game_logic/winCondition.cpp
        utils.h
        gui_logic/scenes/sceneManager.h
        gui_logic/scenes/sceneManager.cpp
        gui_logic/scenes/gameScene.h
        gui_logic/scenes/gameFinishedScene.h
        gui_logic/scenes/mainMenu.h
        audioPlayback.h
)
target_link_libraries(Tic_Tac_Toe PRIVATE SFML::Graphics PRIVATE SFML::Audio)