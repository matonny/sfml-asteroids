//
// Created by Mateusz Wygonny on 20/07/2020.
//

#ifndef ASTEROIDS_PLAYER_H
#define ASTEROIDS_PLAYER_H


#include "Visible.h"

class Player : public Visible
{
public:
    Player(int playerAngle, sf::CircleShape playerShape, sf::Vector2<float> playerPosition){
        angle = playerAngle;
        shape = playerShape;
        position = playerPosition;
        shape.setPosition(position.x, position.y);
        shape.setOrigin(80,80);
        shape.setRotation(angle);
    }
     void update(float elapsedTime) override;
  //  void shot();
private:
    float angle;
   float angularVelocity = 2;
    float velocity = 200;
//    float maxVelocity;
//    float acceleration;
};


#endif //ASTEROIDS_PLAYER_H
