#pragma once
#include <SFML/Graphics.hpp>


class Wall 
{
public:
    Wall(int posX, int posY, int Width, int Height, sf::Color Color = sf::Color::White);
    void draw(sf::RenderWindow& window);
    sf:: FloatRect getBounds() const;

private:
    sf::RectangleShape shape;
};