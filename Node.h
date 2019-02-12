#pragma once

#include <memory>
#include <vector>

#include <SFML/Graphics.hpp>

class Node : public sf::Transformable, public sf::Drawable, private sf::NonCopyable
{
public:
	Node();

	void add_child(Node *child);
	void remove_child(Node *child);

	virtual void set_position(float x, float y);
	virtual void set_rotation(float angle);

	virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;

protected:
	std::vector<Node *> children;

	virtual void drawCurrent(sf::RenderTarget &target, sf::RenderStates states) const;
};