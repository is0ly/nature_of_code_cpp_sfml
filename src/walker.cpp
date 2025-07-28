#include "walker.hpp"

#include "logic/direction.hpp"

Walker::Walker(const sf::Vector2f& size, const sf::RenderWindow& window)
    : m_position(sf::Vector2f(window.getSize()) / 2.0f), m_size(size)
{
    m_drawRect.setSize(m_size);
    m_drawRect.setFillColor(sf::Color::White);
}

void Walker::update(const sf::RenderWindow& window)
{
    const logic::Direction direction = m_random.getRandomDirection();
    m_position += logic::toVector(direction);

    m_position.x
        = std::clamp(m_position.x,
                     0.0f,
                     static_cast<float>(window.getSize().x) - m_size.x);
    m_position.y
        = std::clamp(m_position.y,
                     0.0f,
                     static_cast<float>(window.getSize().y) - m_size.y);
    m_positions.push_back(m_position);
}

void Walker::draw(sf::RenderTarget& target) const
{
    for (const auto& pos : m_positions)
    {
        m_drawRect.setPosition(pos);
        target.draw(m_drawRect);
    }
}
