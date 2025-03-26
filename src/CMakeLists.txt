add_executable(Tic_Tac_Toe main.cpp
        gui_logic/drawLines.h
        common.h
        gui_logic/drawLines.cpp
        gui_logic/drawSymbols.h
        gui_logic/drawSymbols.cpp
        debug.h
)
target_link_libraries(Tic_Tac_Toe PRIVATE SFML::Graphics)