//
// Created by Mateusz Wygonny on 22/07/2020.
//

#include "Rock.h"
#include "Game.h"
void Rock::initRock(size rockSize){
    int randomVelocity = rand() % 150 + 1;
    this->velocity = randomVelocity*rockSize;
    this->angle = rand()%360;
    shape = sf::CircleShape(30*(5-rockSize), rockSize+4);
    shape.setPosition(200,200);
    shape.setOrigin(shape.getRadius(), shape.getRadius());
    shape.setRotation(angle);
    Game::gameObjectManager.add(id, this);
}