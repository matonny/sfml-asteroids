//
// Created by Mateusz Wygonny on 21/07/2020.
//

#ifndef ASTEROIDS_GAMEOBJECTMANAGER_H
#define ASTEROIDS_GAMEOBJECTMANAGER_H


#include <string>
#include "Visible.h"

class GameObjectManager
{
public:
    void add(int id, Visible* object );
    void updateAll();
    void drawAll(sf::RenderWindow &window);
    sf::Clock gameClock;
    static std::map<int, Visible*> allObjects;
};


#endif //ASTEROIDS_GAMEOBJECTMANAGER_H
