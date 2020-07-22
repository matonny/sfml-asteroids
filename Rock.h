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


    void initRock(size rockSize);
    void update(float elapsedTime);
    void destroyRock();

private:
    int angle;
    float velocity;

    size rockSize;
};


#endif //ASTEROIDS_ROCK_H
