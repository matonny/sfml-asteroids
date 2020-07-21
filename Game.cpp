//
// Created by Mateusz Wygonny on 19/07/2020.
//
#include <iostream>
#include "Game.h"
#include "Player.h"
#include "GameObjectManager.h"

sf::RenderWindow Game::mainWindow;
Game::GameState Game::currentState;
GameObjectManager Game::gameObjectManager;
int Visible::objectCount;

void Game::Start()
{
    mainWindow.create(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "Asteroids");
    mainWindow.setFramerateLimit(60);
    currentState = Playing;
    gameLoop();
}

void Game::gameLoop()
{
    sf::Event currentEvent;
    sf::CircleShape playerShape(80.0f, 3);
    playerShape.setOutlineColor(sf::Color(255,255,255));
    playerShape.setFillColor(sf::Color(255,255,255));
    sf::Vector2<float> playerPosition(SCREEN_WIDTH/2,SCREEN_HEIGHT/2);
    Player player(30, playerShape, playerPosition);
    player.id = Visible::objectCount;
    Visible::objectCount++;
    gameObjectManager.add(player.id, &player);
    while (mainWindow.isOpen())
    {

        while (mainWindow.pollEvent(currentEvent))
        {
            if (currentEvent.type == sf::Event::KeyPressed)
            {
                keyMap[currentEvent.key.code] = true;
            } else if (currentEvent.type == sf::Event::KeyReleased)
            {
                keyMap[currentEvent.key.code] = false;
            }
        }
        switch (currentState)
        {
            case Game::Playing:
            {
                mainWindow.clear(sf::Color(0,0,0));
                gameObjectManager.updateAll();
                gameObjectManager.drawAll(mainWindow);
                mainWindow.display();
                if (currentEvent.type == sf::Event::Closed)
                {
                    currentState = Game::Exiting;
                }
                break;
            }
            case Game::Exiting:
                default:
            {
                mainWindow.close();
            }
        }
    }
}



