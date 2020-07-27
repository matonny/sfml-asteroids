//
// Created by Mateusz Wygonny on 20/07/2020.
//

#ifndef ASTEROIDS_VISIBLE_H
#define ASTEROIDS_VISIBLE_H


#include <SFML/Graphics.hpp>

class Visible
{
private:

public:
    enum tags
    {
        rock, player, bullet
    };

    virtual void update(float elapsedTime);

    bool isOutOfScreen();

    void moveAcrossScreen();

    sf::Rect<float> getHitbox(const sf::CircleShape *shape);

    sf::Vector2<float> position;
    sf::CircleShape shape;
    int id;
    static int objectCount;
    sf::Rect<float> hitbox = getHitbox(&shape);
    tags tag;

};


#endif //ASTEROIDS_VISIBLE_H
