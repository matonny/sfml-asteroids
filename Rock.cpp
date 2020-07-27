//
// Created by Mateusz Wygonny on 22/07/2020.
//

#include "Rock.h"
#include "Game.h"
#include "Math.h"
void Rock::initRock(size rockSize){
    int randomVelocity = rand() % 150 + 1;
    this->velocity = randomVelocity*4*rockSize;
    this->angle = rand()%360;
    shape = sf::CircleShape(30*(5-rockSize), rockSize+4);
    position.x = 1000;
    position.y = 1000;
    shape.setPosition(position.x,position.y);
    shape.setOrigin(shape.getRadius(), shape.getRadius());
    hitbox = getHitbox(&shape);
    shape.setRotation(angle);
    tag = rock;

}
void Rock::update(float elapsedTime){
    float changeX = velocity * cos((angle + 30) * M_PI / 180) * elapsedTime;
    float changeY = velocity * sin((angle + 30) * M_PI / 180) * elapsedTime;
    position.x += changeX;
    position.y += changeY;
    hitbox.left+=changeX;
    hitbox.top+=changeY;
    shape.setPosition(position.x, position.y);
    moveAcrossScreen();
}