#ifndef AUDIOPLAYBACK_H
#define AUDIOPLAYBACK_H
#include <SFML/Audio.hpp>

// SoundBuffers
inline const sf::SoundBuffer placeO("../../assets/placeO.wav");
inline const sf::SoundBuffer lose  ("../../assets/lose.wav");
inline const sf::SoundBuffer win   ("../../assets/win.wav");

// Sounds
inline       sf::Sound       placeOsound (placeO);
inline       sf::Sound       loseSound   (lose);
inline       sf::Sound       winSound    (win);

#endif //AUDIOPLAYBACK_H
