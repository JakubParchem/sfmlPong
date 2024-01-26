#include <SFML/Graphics.hpp>
#include "const_variables.h"
class Player
{
    bool down;
public:
    sf::RectangleShape sprite;
    Player(bool down=true)
    {
        this->down=down;
        sprite.setSize(sf::Vector2f(playerWidth, playerHeight));

        if(this->down)
        {
            sprite.setPosition(windowWidth/2.0 - playerWidth / 2.0, 30.0);
            sprite.setFillColor(sf::Color::Blue);
        }
        else
        {
            sprite.setPosition(windowWidth/2.0 - playerWidth / 2.0, windowHeight - 30.0);
            sprite.setFillColor(sf::Color::Red);
        }
    }
    void draw(sf::RenderWindow &window)
    {
        window.draw(sprite);
    }
    sf::Vector2f getPos()
    {
        return sprite.getPosition();
    }
    sf::RectangleShape get_sprite()
    {
        return sprite;
    }

};
