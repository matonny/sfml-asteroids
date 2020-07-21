//
// Created by Mateusz Wygonny on 19/07/2020.
//
#include <iostream>
#include "Game.h"
#include "Player.h"

sf::RenderWindow Game::mainWindow;
Game::GameState Game::currentState;
std::map<sf::Keyboard::Key, bool> Game::keyMap;

void Game::Start()
{
    mainWindow.create(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "Asteroids");
    currentState = Playing;
    gameLoop();
}

void Game::gameLoop()
{

    sf::CircleShape playerShape(80.0f, 3);
    playerShape.setOutlineColor(sf::Color(255,255,255));
    playerShape.setFillColor(sf::Color(255,255,255));
    sf::Vector2<float> playerPosition(200,100);
    Player player(0, playerShape, playerPosition);
    while (true)
    {
        sf::Event currentEvent;
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
                mainWindow.draw(player.shape);
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
                exit(0);
            }
        }
    }
}




