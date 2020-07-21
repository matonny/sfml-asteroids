//
// Created by Mateusz Wygonny on 20/07/2020.
//

#ifndef ASTEROIDS_PLAYER_H
#define ASTEROIDS_PLAYER_H


#include "Drawable.h"

class Player : public Drawable
{
public:
    Player(int playerAngle, sf::CircleShape playerShape, sf::Vector2<float> playerPosition){
        angle = playerAngle;
        shape = playerShape;
        position = playerPosition;
        shape.setPosition(position.x, position.y);
        velocity = 10.0f;
    }
    void update(float timeElapsed);
    void shot();
private:
    float angle;
    float angularVelocity;
    float velocity;
    float maxVelocity;
    float acceleration;
};


#endif //ASTEROIDS_PLAYER_H
