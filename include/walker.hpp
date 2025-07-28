#pragma once
#include <SFML/Graphics.hpp>
#include <random>
#include <vector>

#include "utils/random.hpp"

class Walker
{
  public:
    Walker(const sf::Vector2f& size, const sf::RenderWindow& window);

    void update(const sf::RenderWindow& window);
    void draw(sf::RenderTarget& target) const;

  private:
    mutable sf::RectangleShape m_drawRect;
    sf::Vector2f m_position {};
    sf::Vector2f m_size {};
    std::vector<sf::Vector2f> m_positions {};

    utils::Random m_random;
};