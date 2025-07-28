#pragma once
#include <random>

#include "logic/direction.hpp"

namespace utils
{

class Random
{
  public:
    explicit Random(const int min = -1, const int max = 1)
        : m_distribution(min, max)
    {
    }

    int getInt() { return m_distribution(m_engine); }

    float getFloat(const float min, const float max)
    {
        std::uniform_real_distribution<float> dist(min, max);
        return dist(m_engine);
    }

    logic::Direction getRandomDirection()
    {
        std::uniform_int_distribution<int> dirDist(0, 3);
        return static_cast<logic::Direction>(dirDist(m_engine));
    }

  private:
    std::random_device m_device {};
    std::mt19937 m_engine {m_device()};
    std::uniform_int_distribution<int> m_distribution;
};

}  // namespace utils