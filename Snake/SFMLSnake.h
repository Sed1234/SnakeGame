#pragma once
#include <vector>
#include <SFML\Graphics.hpp>
class SFMLSnake
{
public:
	 std::vector<sf::RectangleShape> body;
	 void move(const float &,const float &);
	SFMLSnake();
	~SFMLSnake();
};

