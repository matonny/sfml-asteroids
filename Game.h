//
// Created by Mateusz Wygonny on 19/07/2020.
//

#ifndef ASTEROIDS_GAME_H
#define ASTEROIDS_GAME_H
#include "SFML/Graphics.hpp"


class Game
{
public:
    static void Start();
    const static int SCREEN_WIDTH = 1024;
    const static int SCREEN_HEIGHT = 768;
    static void gameLoop();

private:
    static sf::RenderWindow mainWindow;
    static std::map<sf::Keyboard::Key, bool> keyMap;

    enum GameState {Unitialized, Playing, Exiting};
    static GameState currentState;
};


#endif //ASTEROIDS_GAME_H
