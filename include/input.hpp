#pragma once
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>

enum class Action
{
    Quit,
    None,
};

Action mapEventToAction(const sf::Event& event);
void processEvents(sf::RenderWindow& window, const sf::Event& event);
void processInput(sf::RenderWindow& window);
