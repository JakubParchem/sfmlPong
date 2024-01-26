#include <SFML/Graphics.hpp>
class Collision {
public:
    bool colliding(sf::RectangleShape &shape1,sf::RectangleShape &shape2)
    {
        if(shape1.getPosition().x+shape1.getSize().x<shape2.getPosition().x)
        {
            return false;
        }
        if(shape2.getPosition().x+shape2.getSize().x<shape1.getPosition().x)
        {
            return false;
        }
        if(shape1.getPosition().y +shape1.getSize().y < shape2.getPosition().y)
        {
            return false;
        }
        if(shape2.getPosition().y +shape2.getSize().y < shape1.getPosition().y)
        {
            return false;
        }
        return true;
    }
};
