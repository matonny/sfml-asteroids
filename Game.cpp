//
// Created by Mateusz Wygonny on 19/07/2020.
//
#include <iostream>
#include "Game.h"
#include "Player.h"
#include "Rock.h"
#include "GameObjectManager.h"
#include <random>

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
    const float playerSize = 20.0;
    sf::Event currentEvent;
    sf::CircleShape playerShape(playerSize, 3);
    playerShape.setOutlineColor(sf::Color(255,255,255));
    playerShape.setFillColor(sf::Color(255,255,255));
    sf::Vector2<float> playerPosition(SCREEN_WIDTH/2,SCREEN_HEIGHT/2);
    auto player = std::make_shared<Player>(30, playerShape, playerPosition);
    gameObjectManager.add(player->id, player);
    Rock::spawnRocks(3);
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
                mainWindow.clear(sf::Color(255,255,255));
                mainWindow.close();
            }
        }
    }
}
void Game::gameOver() {
    currentState = Exiting;
}
float Game::randomNumberGenerator(float min, float max) {
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist6(min,max);
    return dist6(rng);
}


