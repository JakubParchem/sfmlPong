//
// Created by JakubParchem on 22.01.2024.
//
#include <SFML/Graphics.hpp>
#include "const_variables.h"
class Player
{
    sf::RectangleShape sprite;
    bool down;
public:
    Player(bool down=true)
    {
        this->down=down;
        sprite.setSize(sf::Vector2f(playerRectWidth,playerRectHeight));

        if(this->down)
        {
            sprite.setPosition(windowWidth/2.0-playerRectWidth/2.0,30.0);
            sprite.setFillColor(sf::Color::Blue);
        }
        else
        {
            sprite.setPosition(windowWidth/2.0-playerRectWidth/2.0,windowHeight-30.0);
            sprite.setFillColor(sf::Color::Red);
        }
    }
    void draw(sf::RenderWindow &window)
    {
        window.draw(sprite);
    }

};
