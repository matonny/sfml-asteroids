//
// Created by Mateusz Wygonny on 27/07/2020.
//

#ifndef ASTEROIDS_BULLET_H
#define ASTEROIDS_BULLET_H

#include "Visible.h"

class Bullet : public Visible
{
public:
    Bullet(sf::CircleShape player){
        id = Visible::objectCount;
        Visible::objectCount++;
        initBullet(player);
    }
    void update(float elapsedTime);
    bool isOutOfScreen();
    const int bulletSize = 10;
    void initBullet(sf::CircleShape player);


private:
    int angle;
    float velocity = 1500.0;
    sf::Vector2<float> findRiflePosition(sf::CircleShape player);


};

#endif //ASTEROIDS_BULLET_H
