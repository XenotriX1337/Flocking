#include "./utils.h"

#include <cmath>
#include <SFML/System.hpp>

float magnitude(const sf::Vector2f& vec)
{
  return sqrt(pow(vec.x, 2) + pow(vec.y, 2));
}

void setMagnitude(sf::Vector2f& vec, float mag)
{
  float currentMag = magnitude(vec);
  float factor = mag / currentMag;
  vec.x *= factor;
  vec.y *= factor;
}

void limit(sf::Vector2f& vec, float max)
{
  if(magnitude(vec) > max) {
    setMagnitude(vec, max);
  }
}

sf::Vector2f normalize(const sf::Vector2f& vec)
{
  float mag = magnitude(vec);
  return sf::Vector2f(vec.x / mag, vec.y / mag);
}

