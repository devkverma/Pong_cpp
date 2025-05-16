#include "../include/Ball.hpp"

Ball::Ball(int radius, float startX, float startY, sf::Color color) {
    shape.setRadius(radius);
    shape.setFillColor(color);
    shape.setOrigin(radius, radius);
    shape.setPosition(startX, startY);

    velocity = {200.f, 150.f};
}

void Ball::update(float dt) {
    shape.move(velocity * dt);
}

void Ball::draw(sf::RenderWindow& window) {
    window.draw(shape);
}

void Ball::reset(float startX, float startY) {
    shape.setPosition(startX, startY);
    velocity = {200.f, 150.f};
}

void Ball::bounceX() {
    velocity.x = -velocity.x;
}

void Ball::bounceY() {
    velocity.y = -velocity.y;
}

sf::FloatRect Ball::getBounds() const {
    return shape.getGlobalBounds();
}

sf::Vector2f Ball::getPosition() const {
    return shape.getPosition();
}

void Ball::setVelocity(sf::Vector2f vel) {
    velocity = vel;
}

sf::Vector2f Ball::getVelocity() const {
    return velocity;
}