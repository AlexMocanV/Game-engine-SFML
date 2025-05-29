#include "engine.h"
#include "button.h"
#include <SFML/Graphics.hpp>
#include <vector>

void Engine::run() {
	// Create the main window
	sf::RenderWindow window(sf::VideoMode(1600, 900), "Basic SFML Game Engine");

	// Create a simple rectangle shape to represent a player
	sf::RectangleShape player(sf::Vector2f(50.f, 50.f));
	player.setFillColor(sf::Color::Green);

	// Set up the game loop
	sf::Clock clock;
	Button menu;

	while (window.isOpen()) {
		// Handle events
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();
		}

		// Update game state
		float deltaTime = clock.restart().asSeconds();
		float speed = 200.f; // Pixels per second
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
			player.move(-speed * deltaTime, 0.f);
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
			player.move(speed * deltaTime, 0.f);

		// Render
		window.clear(sf::Color::Black);
		window.draw(player);
		window.display();
	}
}