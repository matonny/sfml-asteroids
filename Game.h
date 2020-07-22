//
// Created by Mateusz Wygonny on 19/07/2020.
//

#ifndef ASTEROIDS_GAME_H
#define ASTEROIDS_GAME_H
#include "SFML/Graphics.hpp"
#include "GameObjectManager.h"


class Game
{
public:
    static void Start();
    const static int SCREEN_WIDTH = 1920;
    const static int SCREEN_HEIGHT = 1080;
    static void gameLoop();
    static std::map<sf::Keyboard::Key, bool> keyMap;
    static GameObjectManager gameObjectManager;

private:
    static sf::RenderWindow mainWindow;

    enum GameState {Unitialized, Playing, Exiting};
    static GameState currentState;
};


#endif //ASTEROIDS_GAME_H
