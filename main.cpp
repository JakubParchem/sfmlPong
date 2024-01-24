#include <iostream>
#include <SFML/Graphics.hpp>
#include "const_variables.h"
#include "Player.h"
#include "Ball.h"
int main() {
    sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "SFML Circle");
    Ball ball;
    float speed=-0.05;
    Player player1,player2(false);
    while (window.isOpen()) {
        sf::Event event{};
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        ball.draw(window);
        ball.move(speed);
        player1.draw(window);
        player2.draw(window);
        ball.collision(player1.getPos(), speed);
        ball.collision(player2.getPos(), speed);
        window.display();
    }
    return 0;
}
