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
    static void remove(std::shared_ptr<Visible> object);

    void add(int id, std::shared_ptr<Visible> object);

    void updateAll();

    void drawAll(sf::RenderWindow &window);

    sf::Clock gameClock;

    static void collisionCheck(std::shared_ptr<Visible> object);

    static std::map<int, std::shared_ptr<Visible>> allObjects;
};


#endif //ASTEROIDS_GAMEOBJECTMANAGER_H
