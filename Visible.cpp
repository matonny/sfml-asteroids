//
// Created by Mateusz Wygonny on 20/07/2020.
//

#include "Visible.h"
#include "Game.h"
#include <iostream>
void Visible::update(float elapsedTime)
{

}
void Visible::moveAcrossScreen()
{
    sf::Vector2<float> currentPosition = shape.getPosition();
    std::cout << currentPosition.x << " " << currentPosition.y << std::endl;
    std::cout << shape.getPosition().x << " " << shape.getPosition().y << std::endl;
    if (position.y < -shape.getRadius()) //upper edge
    {
        position.y = Game::SCREEN_HEIGHT;

    }
    if (position.y > Game::SCREEN_HEIGHT+shape.getRadius()) //lower edge
    {
        position.y = -shape.getRadius();
    }
    if (position.x < -shape.getRadius()) // left edge
    {
        position.x = Game::SCREEN_WIDTH+shape.getRadius();
    }
    if (position.x > Game::SCREEN_WIDTH+shape.getRadius()) // right edge
    {
       position.x = -shape.getRadius();
    }
}