//
// Created by Mateusz Wygonny on 27/07/2020.
//

#include "Bullet.h"
#include <Math.h>
#include "Game.h"
#include "GameObjectManager.h"
#include <iostream>
sf::Vector2<float> Bullet::findRiflePosition(sf::CircleShape player) {
    float changeX = player.getRadius() * cos((angle + 30) * M_PI / 180);
    float changeY = player.getRadius() * sin((angle + 30) * M_PI / 180);
    sf::Vector2<float> riflePosition {player.getPosition().x+changeX, player.getPosition().y+changeY};
    return riflePosition;
}
void Bullet::initBullet(sf::CircleShape player) {
    tag = bullet;
    angle = player.getRotation();
    shape = sf::CircleShape(10);
    shape.setPosition(findRiflePosition(player));
    position = shape.getPosition();
}
void Bullet::update(float elapsedTime){
    float changeX = velocity * cos((angle + 30) * M_PI / 180) * elapsedTime;
    float changeY = velocity * sin((angle + 30) * M_PI / 180) * elapsedTime;
    position.x += changeX;
    position.y += changeY;
    hitbox.left+=changeX;
    hitbox.top+=changeY;
    shape.setPosition(position.x, position.y);
}
