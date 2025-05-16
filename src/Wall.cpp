#include "../include/Wall.hpp"

Wall::Wall(int posX, int posY, int Width, int Height, sf::Color Color) {
        shape.setSize(sf::Vector2f(Width, Height));
        shape.setPosition(posX, posY);
        shape.setFillColor(Color);
}

void Wall::draw(sf::RenderWindow& window) {
    window.draw(shape);
}

sf::FloatRect Wall::getBounds() const {
    return shape.getGlobalBounds();
}