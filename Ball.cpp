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
        if((sprite.getPosition().y>=30+ballRadius/2 and sprite.getPosition().y<=30.1+ballRadius/2) or (sprite.getPosition().y>=windowHeight-30-playerHeight-ballRadius and sprite.getPosition().y>=windowHeight-30.1-playerHeight-ballRadius)) {
            if (player_pos.x + playerWidth - sprite.getPosition().x+ballRadius >= 0) {
                speed = -speed;
                return;
            }
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