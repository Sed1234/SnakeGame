#pragma once
#include <vector>
#include <SFML\Graphics.hpp>
#include "SFMLSnake.h"
class SFMLFood
{
public:
	std::vector<sf::RectangleShape> food;
	SFMLFood();
	void regenerate();
	~SFMLFood();
};

