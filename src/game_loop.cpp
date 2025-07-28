#include <game_loop.hpp>
#include <input.hpp>
#include <render.hpp>

void runGameFrame(sf::RenderWindow& window, Walker& walker)
{
    processInput(window);
    window.clear();
    walker.update(window);
    render(window, walker);
    window.display();
}
