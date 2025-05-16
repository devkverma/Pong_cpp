#pragma once
#include <SFML/Graphics.hpp>

class Ball 
{
public:
    Ball(int radius, float startX, float startY, sf::Color color = sf::Color::White);

    void update(float dt);
    void draw(sf::RenderWindow& window);
    void reset(float startX, float startY);
    void bounceX();
    void bounceY();
    sf::FloatRect getBounds() const;
    sf::Vector2f getPosition() const;
    void setVelocity(sf::Vector2f vel);
    sf::Vector2f getVelocity() const;
    
private:
    sf::CircleShape shape;
    sf::Vector2f velocity;
};