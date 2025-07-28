#pragma once
#include <SFML/System/Vector2.hpp>

namespace logic
{

enum class Direction
{
    Up,
    Down,
    Left,
    Right
};

inline sf::Vector2f toVector(const Direction dir)
{
    switch (dir)
    {
        case Direction::Up:
            return {0.0f, -1.0f};
        case Direction::Down:
            return {0.0f, 1.0f};
        case Direction::Left:
            return {-1.0f, 0.0f};
        case Direction::Right:
            return {1.0f, 0.0f};
    }
    return {0.0f, 0.0f};
}

}  // namespace logic