//
// Created by JakubParchem on 22.01.2024.
//
#include <SFML/Graphics.hpp>
#include "const_variables.h"
class Ball
{
    sf::CircleShape sprite;
public:
    Ball()
    {
        sprite.setRadius(ballRadius);
        sprite.setPosition(windowWidth / 2.0 - ballRadius, windowHeight / 2.0 - ballRadius);
        sprite.setFillColor(sf::Color::White);
    }
    void draw(sf::RenderWindow &window)
    {
        window.draw(sprite);
    }
    void collision(sf::Vector2f player_pos, float &speed) {
        if(player_pos.x+playerWidth-sprite.getPosition().x>=0)
        {
            speed=-speed;
       }
    }
    void move(float &speed)
    {
        sprite.move(0,speed);
    }
    sf::Vector2f getPos()
    {
        return sprite.getPosition();
    }
};