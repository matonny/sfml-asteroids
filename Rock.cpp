//
// Created by Mateusz Wygonny on 22/07/2020.
//

#include "Rock.h"
#include "Math.h"
#include "Game.h"
void Rock::initRock(size rockSize){
    int randomVelocity = rand() % 150 + 1;
    this->velocity = randomVelocity*4*rockSize;
    this->angle = rand()%360;
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
}
void Rock::spawnRocks(int rockAmount) {
    for(int i = 0; i < rockAmount; i++){
        auto x = std::make_shared<Rock>(Rock::big);
        x->position = getRandomPosition();
        x->shape = sf::CircleShape(30*(5-Rock::big), Rock::big+4);
        x->shape.setPosition(x->position.x,x->position.y);
        x->shape.setOrigin(x->shape.getRadius(), x->shape.getRadius());
        x->hitbox = x->getHitbox(&x->shape);
        Game::gameObjectManager.add(x->id, x);
    }
}
void Rock::spawnRocks(Rock parentRock){

}
sf::Vector2<float> Rock::getRandomPosition() {
    sf::Vector2<float> playerPosition = Game::gameObjectManager.allObjects[0]->position;
    float firstSafeZoneEndX = playerPosition.x - playerSafeZone;
    float secondSafeZoneStartX = playerPosition.x + playerSafeZone;
    float firstSafeZoneEndY = playerPosition.y - playerSafeZone;
    float secondSafeZoneStartY = playerPosition.y + playerSafeZone;
    float finalX = 0;
    float finalY = 0;
    if(firstSafeZoneEndX < 0 ){
        finalX = Game::randomNumberGenerator(secondSafeZoneStartX, Game::SCREEN_WIDTH);
    }else if (secondSafeZoneStartX > Game::SCREEN_WIDTH){
        finalX = Game::randomNumberGenerator(0, firstSafeZoneEndX);
    }else{
        float chance = Game::randomNumberGenerator(0,1);
        if(chance < 0.5){
            finalX = Game::randomNumberGenerator(secondSafeZoneStartX, Game::SCREEN_WIDTH);
        }else{
            finalX = Game::randomNumberGenerator(0, firstSafeZoneEndX);
        }
    }
    if(firstSafeZoneEndY < 0 ){
        finalY = Game::randomNumberGenerator(secondSafeZoneStartY, Game::SCREEN_HEIGHT);
    }else if (secondSafeZoneStartY > Game::SCREEN_HEIGHT){
        finalX = Game::randomNumberGenerator(0, firstSafeZoneEndY);
    }else{
        float chance = Game::randomNumberGenerator(0,1);
        if(chance < 0.5){
            finalY = Game::randomNumberGenerator(secondSafeZoneStartY, Game::SCREEN_HEIGHT);
        }else{
            finalY = Game::randomNumberGenerator(0, firstSafeZoneEndY);
        }
    }
    return {finalX, finalY};
}
