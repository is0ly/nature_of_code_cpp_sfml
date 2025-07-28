#include <SFML/Graphics.hpp>
#include <game_loop.hpp>
#include <input.hpp>
#include <walker.hpp>
#include <window_utils.hpp>

int main()
{
    sf::RenderWindow window = createFullscreenWindow();
    Walker walker(sf::Vector2f(1.0f, 1.0f), window);

    while (window.isOpen())
    {
        runGameFrame(window, walker);
    }
}
