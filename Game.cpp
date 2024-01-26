#include <iostream>
#include <SFML/Graphics.hpp>
#include "const_variables.h"
#include "Objects/Player.h"
#include "Objects/Ball.h"
#include "Collision.h"
class Game {
    Ball ball;
    Collision collision;
    float speed=-0.05;
public:
    void run() {

        sf::RenderWindow window(sf::VideoMode(windowWidth,windowHeight),"Pong");
        Player player1,player2(false);
        while (window.isOpen()) {
            sf::Event event{};
            while (window.pollEvent(event)) {
                if (event.type == sf::Event::Closed)
                    window.close();
            }
            window.clear();
            ball.draw(window);
            player1.draw(window);
            player2.draw(window);
            if (collision.colliding(player1.sprite, ball.col_box) or
                collision.colliding(player2.sprite, ball.col_box)) {
                speed *= (-1.0);

            }
            ball.move(speed);
            if (ball.hit_edge()) {
                std::cout << 1;
                window.close();
            }
            window.display();
        }
    }
};
