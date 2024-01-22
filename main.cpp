#include <iostream>
#include <SFML/Graphics.hpp>
#define windowWidth 1000
#define windowHeight 1000
#define circleRadius 20
#define circleOutlineWidth 5
void set_circle(sf::CircleShape &circle)
{
    circle.setRadius(circleRadius);
    circle.setOutlineThickness(circleOutlineWidth);
    circle.setOutlineColor(sf::Color::Magenta);
    circle.setPosition(windowWidth / 2 - circleRadius, windowHeight / 2 - circleRadius);
    circle.setFillColor(sf::Color::Transparent);
}
void set_rect(sf::RectangleShape &rect,bool down=true)
{
    rect.setSize(sf::Vector2f(200,5));
    if(down)
    {
        rect.setPosition(windowWidth/2-100,30);
    }
    else
    {
        rect.setPosition(windowWidth/2-100,windowHeight-30);
    }
    rect.setFillColor(sf::Color::Green);
}
int main() {
    sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "SFML Circle");
    sf::CircleShape circle;
    sf::RectangleShape player1,player2;
    set_rect(player1);
    set_rect(player2,false);
    set_circle(circle);
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        window.draw(circle);
        window.draw(player1);
        window.draw(player2);
        window.display();

    }
    return 0;
}
