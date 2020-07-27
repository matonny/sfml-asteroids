//
// Created by Mateusz Wygonny on 20/07/2020.
//
#include "Game.h"
#include "Player.h"
#include <math.h>
#include "Bullet.h"
#include <iostream>

std::map<sf::Keyboard::Key, bool> Game::keyMap;

void Player::update(float elapsedTime)
{
    lastShot += elapsedTime;
    if (Game::keyMap[sf::Keyboard::Up])
    {
        if (velocity <= maxVelocity)
        {
            velocity += acceleration * elapsedTime;
        }
    } else
    {
        if (velocity > 0)
        {
            velocity *= decceleration;
        }
    }
    float changeX = velocity * cos((angle + 30) * M_PI / 180) * elapsedTime;
    float changeY = velocity * sin((angle + 30) * M_PI / 180) * elapsedTime;
    position.x += changeX;
    position.y += changeY;
    hitbox.left += changeX;
    hitbox.top += changeY;

    if (Game::keyMap[sf::Keyboard::Left])
    {
        angle -= angularVelocity;
        shape.setRotation(angle);
    }
    if (Game::keyMap[sf::Keyboard::Right])
    {
        angle += angularVelocity;
        shape.setRotation(angle);
    }
    if (Game::keyMap[sf::Keyboard::Space])
    {
        if (lastShot >= fireRate)
        {
            auto x = std::make_shared<Bullet>(this->shape);
            Game::gameObjectManager.add(x->id , x);
            lastShot = 0.0;
            std::cout << "shooting " << x->id << std::endl;
        }
    }
        shape.setPosition(position.x, position.y);
        moveAcrossScreen();


}