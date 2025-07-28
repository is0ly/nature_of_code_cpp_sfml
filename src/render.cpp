#include <render.hpp>

void render(sf::RenderWindow& window, const Walker& walker)
{
    walker.draw(window);
}
