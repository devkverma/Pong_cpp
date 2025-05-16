#include "../include/Wall.hpp"
#include "../include/Ball.hpp"

// Dimensions of Window
constexpr unsigned int WIDTH_OF_WINDOW = 800;
constexpr unsigned int HEIGHT_OF_WINDOW = 600;

// Thickness of walls
constexpr unsigned int THICKNESS_OF_WALL = 20;

// Radius of ball
constexpr unsigned int RADIUS = 10;

int main() 
{

        // Create the window
        sf::RenderWindow window(sf::VideoMode({WIDTH_OF_WINDOW,HEIGHT_OF_WINDOW}), "Pong");

        // Create walls
        Wall wall1(0, 0, WIDTH_OF_WINDOW, THICKNESS_OF_WALL);
        Wall wall2(0, HEIGHT_OF_WINDOW - THICKNESS_OF_WALL,  WIDTH_OF_WINDOW, THICKNESS_OF_WALL);

        // Create the ball
        Ball ball(RADIUS,WIDTH_OF_WINDOW / 2, HEIGHT_OF_WINDOW / 2);
       
        sf::Clock clock;

        // run the program as long as the window is open
        while (window.isOpen())
        {
            float dt = clock.restart().asSeconds();
            //check all the window's events
            sf::Event event;
            while  (window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed)
                {
                    window.close();
                }
            }

            // Updates
            ball.update(dt);

            // Collision with top and bottom window bounds
            if (ball.getBounds().top <= 0 || ball.getBounds().top + ball.getBounds().height >= HEIGHT_OF_WINDOW) {
                ball.bounceY();
            }

            //clear the window
            window.clear(sf::Color::Black);

            //Draw walls
            wall1.draw(window);
            wall2.draw(window);

            // Draw the ball
            ball.draw(window);
            // Display
            window.display();
        }

        return 0;
}