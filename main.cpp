#include <iostream>
#include <SFML/Graphics.hpp>
#define windowWidth 1000
#define windowHeight 1000
#define circleRadius 400
#define circleOutlineWidth 10
void set_circle(sf::CircleShape &circle)
{
    circle.setRadius(circleRadius);
    circle.setOutlineThickness(circleOutlineWidth);
    circle.setOutlineColor(sf::Color::Magenta);
    circle.setPosition(windowWidth / 2 - circleRadius, windowHeight / 2 - circleRadius);
    circle.setFillColor(sf::Color::Transparent);
}
int main() {
    sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "SFML Circle");
    sf::CircleShape circle;
    set_circle(circle);
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        window.draw(circle);
        window.display();

    }
    return 0;
}
