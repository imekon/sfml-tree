#pragma once

#include "Node.h"

class Shape : public Node
{
public:
	Shape();

	void set_position(float x, float y) override;
	void set_rotation(float angle) override;

protected:
	void drawCurrent(sf::RenderTarget &target, sf::RenderStates states) const override;

private:
	sf::RectangleShape shape;
};