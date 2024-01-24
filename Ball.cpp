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
    bool is_x_collision(sf::Vector2f player_pos) {
        if (player_pos.x + playerWidth - sprite.getPosition().x+ballRadius >= 0) {
            return true;
        }
        return false;
    }
    bool is_y_collision(sf::Vector2f player_pos)
    {
        if(player_pos.y == sprite.getPosition().y)
        {
            return true;
        }
        return false;
    }
    bool hit_edge()
    {
        if(sprite.getPosition().y<=0 or sprite.getPosition().y>=windowHeight+ballRadius)
        {
            return true;
        }
        return false;
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