#pragma once
#include "Snake.h"
#include "Food.h"
#include "Wall.h"
#include "Drawer.h"
#include "SafeFile.h"
#include <ctime>

class SnakeGame
{
	enum State { Started, Playing, Pause, Quit };
	State state;
	Wall wall;
	SnakeGame();
public:
	Food food;
	Snake snake;
	static SnakeGame & getInstance()
	{
		static SnakeGame instance;
		return instance;
	}
	void play();
	bool snakeEatsFood();
	bool snakeCrushesIntoWall();
	~SnakeGame();
};

