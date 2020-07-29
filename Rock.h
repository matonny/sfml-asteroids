//
// Created by Mateusz Wygonny on 22/07/2020.
//

#ifndef ASTEROIDS_ROCK_H
#define ASTEROIDS_ROCK_H

#include "Visible.h"
#include "GameObjectManager.h"


class Rock : public Visible
{
public:
    enum size
    {
        big = 1,
        medium = 2,
        small = 3
    };
     Rock(size rockSize){
        id = Visible::objectCount;
        Visible::objectCount++;
        initRock(rockSize);
    };
    static std::vector<Rock> allRocks;

    static const int playerSafeZone = 200;
    void initRock(size rockSize);
    void update(float elapsedTime);
    static sf::Vector2<float> getRandomPosition();
    static void spawnRocks(int rockAmount);
    static void spawnRocks(Rock parentRock);
    void destroyRock();

private:
    int angle;
    float velocity;

    size rockSize;
};


#endif //ASTEROIDS_ROCK_H
