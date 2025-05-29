#ifndef BUTTON_H
#define BUTTON_H

#include <SFML/Graphics.hpp>
#include <vector>

class Button {
private:
    std::vector<Button> buttons; 
    sf::Texture texture;
    sf::Sprite sprite;
    sf::Text text;
    sf::Font font;
    bool hovered; 
    bool clicked; 

public:
    Button();

    // Getters
    std::vector<Button> getButtons() const;
    sf::Texture getTexture() const;
    sf::Sprite getSprite() const;
    sf::Text getText() const;
    sf::Font getFont() const;
    bool isHovered() const; 
    bool isClicked() const; 

    // Setters
    void setButtons(const std::vector<Button>& buttons);
    void setTexture(const sf::Texture& texture);
    void setSprite(const sf::Sprite& sprite);
    void setText(const sf::Text& text);
    void setFont(const sf::Font& font);
    void setHovered(bool hovered);
    void setClicked(bool clicked);
};

#endif