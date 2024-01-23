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
        sprite.setRadius(circleRadius);
        sprite.setPosition(windowWidth / 2.0 - circleRadius, windowHeight / 2.0 - circleRadius);
        sprite.setFillColor(sf::Color::White);
    }
    void draw(sf::RenderWindow &window)
    {
        window.draw(sprite);
    }
};