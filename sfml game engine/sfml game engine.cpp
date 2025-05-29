#include <SFML/Graphics.hpp>

int main() {
    // Create the main window
    sf::RenderWindow window(sf::VideoMode(800, 600), "Basic SFML Game Engine");

    // Create a simple rectangle shape to represent a player
    sf::RectangleShape player(sf::Vector2f(50.f, 50.f));
    player.setFillColor(sf::Color::Green);
    player.setPosition(375.f, 275.f); // Center of the window

    // Set up the game loop
    sf::Clock clock;
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

    return 0;
}