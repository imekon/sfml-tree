#include "Shape.h"

Shape::Shape() : shape(sf::Vector2f(30.0f, 30.0f))
{
	shape.setOrigin(15.0f, 15.0f);
	shape.setFillColor(sf::Color::Red);
}

void Shape::set_position(float x, float y)
{
	Node::set_position(x, y);
	shape.setPosition(x, y);
}

void Shape::set_rotation(float angle)
{
	Node::set_rotation(angle);
	auto transform = shape.getTransform();
	transform.rotate(angle, 15.0f, 15.0f);
}

void Shape::drawCurrent(sf::RenderTarget & target, sf::RenderStates states) const
{
	target.draw(shape, states);
}
