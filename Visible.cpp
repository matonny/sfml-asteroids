//
// Created by Mateusz Wygonny on 20/07/2020.
//

#include "Visible.h"
#include "Game.h"
#include <iostream>
#include <Math.h>
void Visible::update(float elapsedTime)
{

}
bool Visible::isOutOfScreen() {
    return
            position.x < 0-shape.getRadius() ||
            position.y < 0-shape.getRadius() ||
            position.x > Game::SCREEN_WIDTH+shape.getRadius() ||
            position.y > Game::SCREEN_HEIGHT+shape.getRadius();
}
void Visible::moveAcrossScreen()
{
    if (position.y < -shape.getRadius()) //upper edge
    {
        position.y = Game::SCREEN_HEIGHT+shape.getRadius();
        hitbox.top = Game::SCREEN_HEIGHT;

    }
    if (position.y > Game::SCREEN_HEIGHT+shape.getRadius()) //lower edge
    {
        position.y = -shape.getRadius();
        hitbox.top = -2*shape.getRadius();
    }
    if (position.x < -shape.getRadius()) // left edge
    {
        position.x = Game::SCREEN_WIDTH+shape.getRadius();
        hitbox.left = Game::SCREEN_WIDTH;
    }
    if (position.x > Game::SCREEN_WIDTH+shape.getRadius()) // right edge
    {
       position.x = -shape.getRadius();
       hitbox.left = -2*shape.getRadius();
    }
}
sf::Rect<float> Visible::getHitbox(const sf::CircleShape *shape) {
    sf::Vector2<float> position = shape->getPosition();
    float radius = shape->getRadius();
    float distance = radius/sqrt(2);
    sf::Rect<float> hitbox = sf::Rect<float>(position.x-distance, position.y-distance, distance*2, distance*2);
    return hitbox;
}
