//
// Created by Mateusz Wygonny on 20/07/2020.
//
#include "Game.h"
#include "Player.h"
#include <math.h>
std::map<sf::Keyboard::Key, bool> Game::keyMap;
void Player::update()
{
    if(Game::keyMap[sf::Keyboard::Up]){
        float changeX = 10*cos((angle+30)*M_PI/180);
        float changeY = 10*sin((angle+30)*M_PI/180);
        position.x += changeX;
        position.y += changeY;
    }
    if(Game::keyMap[sf::Keyboard::Left]){
        angle += angularVelocity;
       shape.setRotation(angle);
    }
    if(Game::keyMap[sf::Keyboard::Right]){
        angle -= angularVelocity;
        shape.setRotation(angle);
    }

    shape.setPosition(position.x, position.y);
}