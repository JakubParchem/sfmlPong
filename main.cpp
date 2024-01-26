#include <iostream>
#include <SFML/Graphics.hpp>
#include "const_variables.h"
#include "Player.h"
#include "Ball.h"
#include "Collision.h"
int main() {
    sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "SFML Circle");
    Ball ball;
    Collision col;
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
        player1.draw(window);
        player2.draw(window);
        if(col.colliding(player1.sprite,ball.col_box) or col.colliding(player2.sprite,ball.col_box))
        {
                speed*=(-1.0);

        }
        ball.move(speed);
        if(ball.hit_edge())
        {
            std::cout<<1;
            window.close();
        }
        window.display();
    }
    return 0;
}