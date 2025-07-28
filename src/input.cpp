#include "../include/input.hpp"

Action mapEventToAction(const sf::Event& event)
{
    if (event.is<sf::Event::Closed>()) return Action::Quit;

    if (const auto* keyPressed = event.getIf<sf::Event::KeyPressed>())
    {
        switch (keyPressed->scancode)
        {
            case sf::Keyboard::Scancode::Escape:
                return Action::Quit;
            default:
                break;
        }
    }
    return Action::None;
}

void processEvents(sf::RenderWindow& window, const sf::Event& event)
{
    switch (mapEventToAction(event))
    {
        case Action::Quit:
            window.close();
            break;
        case Action::None:
            break;
    }
}

void processInput(sf::RenderWindow& window)
{
    while (const std::optional event = window.pollEvent())
    {
        processEvents(window, *event);
    }
}
