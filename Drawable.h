//
// Created by Mateusz Wygonny on 20/07/2020.
//

#ifndef ASTEROIDS_DRAWABLE_H
#define ASTEROIDS_DRAWABLE_H


#include <SFML/Graphics.hpp>

class Drawable
{

public:
    sf::Vector2<float> position;
    sf::CircleShape shape;
    void draw();
};


#endif //ASTEROIDS_DRAWABLE_H
