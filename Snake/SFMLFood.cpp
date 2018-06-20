#include "SFMLFood.h"



SFMLFood::SFMLFood()
{
	food.push_back(sf::RectangleShape(sf::Vector2f(50, 50)));
	food[0].setPosition(200, 500);
	food[0].setFillColor(sf::Color::Red);
}

void SFMLFood::regenerate()
{
	food[0].setPosition ( rand() % 18 + 2, rand() % 18 + 2 );
	SFMLSnake snake;

		/*if (food[0] == SFMLSnake::body[0])
		{
			regenerate();
		}*/
	
}


SFMLFood::~SFMLFood()
{
}
