//
// Created by Mateusz Wygonny on 21/07/2020.
//
#include "GameObjectManager.h"
#include "Visible.h"
std::map<int, Visible*> GameObjectManager::allObjects;
#include "GameObjectManager.h"
void GameObjectManager::add (int id, Visible* gameObject)
{
   allObjects.insert(std::pair<int, Visible*> (id, gameObject));
}
void GameObjectManager::updateAll(){
    std::map<int, Visible*>::iterator itr = allObjects.begin();
    sf::Time timeDelta = gameClock.restart();
    while(itr != allObjects.end()){
        itr->second->update(timeDelta.asSeconds());
        itr++;
    }
}
void GameObjectManager::drawAll(sf::RenderWindow &renderWindow){
    std::map<int, Visible*>::iterator itr = allObjects.begin();
    sf::Time timeDelta = gameClock.restart();
    while(itr != allObjects.end()){
        renderWindow.draw(itr->second->shape);
        itr++;
    }
}