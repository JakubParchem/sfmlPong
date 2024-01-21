#include <iostream>
#include <SFML/Graphics.hpp>
#define windowWidth 1000
#define windowHeight 1000
#define circleRadius 400
#define circleOutlineWidth 10
int main() {
    sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "SFML Circle");
    sf::CircleShape shape;
    shape.setRadius(circleRadius);
    shape.setOutlineThickness(circleOutlineWidth);
    shape.setOutlineColor(sf::Color::Magenta);
    shape.setPosition(windowWidth/2-circleRadius, windowHeight/2-circleRadius);
    shape.setFillColor(sf::Color::Transparent);
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        window.draw(shape);
        window.display();

    }

    return 0;
}
