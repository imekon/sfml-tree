#include "Shape.h"

void GenerateScene()
{
	Node * root = new Node();

	Shape *s1 = new Shape();
	Shape *s2 = new Shape();
	Shape *s3 = new Shape();
	Shape *s4 = new Shape();

	root->add_child(s1);

	root->set_position(150.0f, 150.0f);

	s1->set_position(-50.0f, -50.0f);
	s2->set_position(50.0f, -50.0f);
	s3->set_position(50.0f, 50.0f);
	s4->set_position(-50.0f, 50.0f);

	root->add_child(s1);
	root->add_child(s2);
	root->add_child(s3);
	root->add_child(s4);
}

void RunScene()
{
	//s1->set_rotation(angle);

	//window.draw(*root);
}