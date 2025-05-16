#pragma once
#include <SFML/Graphics.hpp>

class Paddle {
public:
    Paddle(float x, float y, float width, float height, float speed);

    void update(float dt, bool moveUp, bool moveDown, float windowHeight);
    void draw(sf::RenderWindow& window);

    sf::FloatRect getBounds() const;
    sf::Vector2f getPosition() const;
    void setPosition(float x, float y);


private:
    sf::RectangleShape shape;
    float speed;
};