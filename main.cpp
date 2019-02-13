#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(600, 400), "SFML tree!");

    float angle = 0.0f;
    sf::Clock clock;

	sf::RectangleShape root(sf::Vector2f(30.0f, 30.0f));

	sf::RectangleShape s1(sf::Vector2f(30.0f, 30.0f));
	sf::RectangleShape s2(sf::Vector2f(30.0f, 30.0f));
	sf::RectangleShape s3(sf::Vector2f(30.0f, 30.0f));
	sf::RectangleShape s4(sf::Vector2f(30.0f, 30.0f));

	root.setOrigin(15.0f, 15.0f);
	root.setPosition(200.0f, 120.0f);
	root.setFillColor(sf::Color::Yellow);

	s1.setOrigin(15.0f, 15.0f);
	s2.setOrigin(15.0f, 15.0f);
	s3.setOrigin(15.0f, 15.0f);
	s4.setOrigin(15.0f, 15.0f);

	s1.setPosition(-50.0f, 50.0f);
	s2.setPosition(50.0f, 50.0f);
	s3.setPosition(50.0f, -50.0f);
	s4.setPosition(-50.0f, -50.0f);

	s1.setFillColor(sf::Color::Red);
	s2.setFillColor(sf::Color::Red);
	s3.setFillColor(sf::Color::Red);
	s4.setFillColor(sf::Color::Red);

    while (window.isOpen())
    {
        sf::Time time = clock.restart();
        float elapsed = time.asSeconds();
        angle += elapsed * 60.0f;

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

		root.setRotation(angle);

		s1.setRotation(angle);
		s2.setRotation(angle);
		s3.setRotation(angle);
		s4.setRotation(angle);

		auto transform = root.getTransform();

        window.clear();
		window.draw(root);
		window.draw(s1, transform);
		window.draw(s2, transform);
		window.draw(s3, transform);
		window.draw(s4, transform);
		window.display();
    }

    return 0;
}
