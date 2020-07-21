//
// Created by Mateusz Wygonny on 20/07/2020.
//

#ifndef ASTEROIDS_VISIBLE_H
#define ASTEROIDS_VISIBLE_H


#include <SFML/Graphics.hpp>

class Visible
{

public:

    virtual void update(float elapsedTime);

    sf::Vector2<float> position;
    sf::CircleShape shape;
    int id;
    static int objectCount;
};


#endif //ASTEROIDS_VISIBLE_H
