#ifndef COMMON_H
#define COMMON_H
#include <SFML/Graphics.hpp>

namespace Common {
    inline constexpr unsigned int                       SCREEN_WIDTH                      {900};
    inline constexpr unsigned int                       SCREEN_HEIGHT                     {600};

    inline const sf::Font                               debugFont("../../assets/spacemono.ttf");

    inline constexpr int                                squares                             {9};

    // 2-Dimensional Array Implementation
    template<typename T, std::size_t Row, std::size_t Col>
    using Array2d = std::array<std::array<T, Col>, Row>;
}



#endif //COMMON_H
