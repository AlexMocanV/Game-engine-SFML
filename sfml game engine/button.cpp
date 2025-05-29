#include "button.h"
#include <vector>
#include <SFML/Graphics.hpp>

// Getters
std::vector<Button> Button::getButtons() const {
    return buttons;
}

sf::Texture Button::getTexture() const {
    return texture;
}

sf::Sprite Button::getSprite() const {
    return sprite;
}

sf::Text Button::getText() const {
    return text;
}

sf::Font Button::getFont() const {
    return font;
}

bool Button::isHovered() const {
    return hovered; 
}

bool Button::isClicked() const {
    return clicked; 
}

// Setters
void Button::setButtons(const std::vector<Button>& buttons) {
    this->buttons = buttons;
}

void Button::setTexture(const sf::Texture& texture) {
    this->texture = texture;
}

void Button::setSprite(const sf::Sprite& sprite) {
    this->sprite = sprite;
}

void Button::setText(const sf::Text& text) {
    this->text = text;
}

void Button::setFont(const sf::Font& font) {
    this->font = font;
}

void Button::setHovered(bool hovered) {
    this->hovered = hovered;
}

void Button::setClicked(bool clicked) {
    this->clicked = clicked;
}

Button::Button() : hovered(false), clicked(false) {
	// Constructor implementation can be extended as needed
}