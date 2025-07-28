#include "../include/window_utils.hpp"

sf::RenderWindow createFullscreenWindow(const unsigned int framerateLimit)
{
    // Get all available fullscreen modes
    const auto& modes = sf::VideoMode::getFullscreenModes();

    // The first mode is typically the native resolution (highest available)
    const sf::VideoMode nativeMode = modes[0];

    // Create a fullscreen window
    sf::RenderWindow window(nativeMode,
                            "SFML Fullscreen",
                            sf::Style::Default,
                            sf::State::Fullscreen);

    window.setFramerateLimit(framerateLimit);

    return window;
}
