#include <algorithm>

#include "Node.h"

Node::Node()
{

}

void Node::add_child(Node * child)
{
	children.push_back(child);
}

void Node::remove_child(Node * child)
{
	auto found = std::find(children.begin(), children.end(), child);
	if (found != children.end())
		children.erase(found);
}

void Node::set_position(float x, float y)
{
	setPosition(x, y);
}

void Node::set_rotation(float angle)
{
	setRotation(angle);
}

void Node::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	states.transform *= getTransform();
	drawCurrent(target, states);
	for (auto child : children)
		child->draw(target, states);
}

void Node::drawCurrent(sf::RenderTarget & target, sf::RenderStates states) const
{
}
