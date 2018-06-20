#include "SFMLSnake.h"
 void SFMLSnake::move(const float & x, const float & y)
{
	for (size_t i = body.size() - 1; i > 0; --i)
	{
		body[i].setPosition(body[i - 1].getPosition());
	}
	body[0].setPosition(body[0].getPosition() + sf::Vector2f(x, y));
}

SFMLSnake::SFMLSnake()
{
	body.push_back(sf::RectangleShape(sf::Vector2f(50, 50)));
	body.push_back(sf::RectangleShape(sf::Vector2f(50, 50)));
	body.push_back(sf::RectangleShape(sf::Vector2f(50, 50)));
	body.push_back(sf::RectangleShape(sf::Vector2f(50, 50)));
	body.push_back(sf::RectangleShape(sf::Vector2f(50, 50)));
	body.push_back(sf::RectangleShape(sf::Vector2f(50, 50)));
	float cnt = 50;
	for (auto & point : body)
	{
		point.setPosition(cnt, 50);
		cnt += 50;
		point.setFillColor(sf::Color::Cyan);
	}
	body[0].setFillColor(sf::Color::Green);
}



SFMLSnake::~SFMLSnake()
{
}
