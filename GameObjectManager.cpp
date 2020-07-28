//
// Created by Mateusz Wygonny on 21/07/2020.
//
#include "GameObjectManager.h"
#include <iostream>
#include "Visible.h"
#include "Bullet.h"

std::map<int, std::shared_ptr<Visible>> GameObjectManager::allObjects;

#include "GameObjectManager.h"

void GameObjectManager::add(int id, std::shared_ptr<Visible> gameObject)
{
    allObjects.insert(std::pair<int, std::shared_ptr<Visible>>(id, gameObject));
}

void GameObjectManager::updateAll()
{
    std::map<int, std::shared_ptr<Visible>>::iterator itr = allObjects.begin();
    sf::Time timeDelta = gameClock.restart();
    while (itr != allObjects.end())
    {
        itr->second->update(timeDelta.asSeconds());
        collisionCheck(itr->second);
        if(itr->second->tag == Visible::bullet){
            std::cout << "bulecik" << std::endl;
            if(itr->second->isOutOfScreen()){
                allObjects.erase(itr);
            }
        }
        itr++;
    }

}

void GameObjectManager::drawAll(sf::RenderWindow &renderWindow)
{
    std::map<int, std::shared_ptr<Visible>>::iterator itr = allObjects.begin();
    sf::Time timeDelta = gameClock.restart();
    while (itr != allObjects.end())
    {
        renderWindow.draw(itr->second->shape);
        itr++;
    }
}

void GameObjectManager::collisionCheck(std::shared_ptr<Visible> object)
{
    std::map<int, std::shared_ptr<Visible>>::iterator itr = allObjects.begin();
    while (itr != allObjects.end())
    {
        switch(object->tag){
            case Visible::player:{
                if(itr->second->tag == Visible::rock)
                {
                    if (object->hitbox.intersects(itr->second->hitbox))
                    {
                        //allObjects.erase(object->id);
                        //Game::gameOver();
                    }
                }
            }
            default:{

            }
        }
        itr++;
    }
}
