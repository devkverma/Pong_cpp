#include<iostream>
#include<string>
#include<SFML/Graphics.hpp>

void createWall(sf::RenderWindow& window, float posX, float posY, float Width, float Height, sf::Color Color)
{
    sf::RectangleShape wall(sf::Vector2f(Width,Height));
    wall.setPosition(posX, posY);
    wall.setFillColor(Color);
    window.draw(wall);
}

int main() 
{
        // Create the window
        sf::RenderWindow window(sf::VideoMode({800,600}),"Pong");

        // run the program as long as the window is open
        while (window.isOpen())
        {
            //check all the window's events
            sf::Event event;
            while  (window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed)
                {
                    window.close();
                }
            }

            //clear the window
            window.clear(sf::Color::Black);

            //Draw walls
            createWall(window, 0.0f, 0.0f, 800.0f, 20.0f, sf::Color::White);
            createWall(window, 0.0f, 580.0f, 800.0f, 20.0f, sf::Color::White);

            // Draw the ball
            
            // Display
            window.display();
        }

        return 0;
}