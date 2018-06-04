#include "SafeFile.h"



void SafeFile::serialize()
{
	std::ofstream snakefile("snake.txt");
	for (auto coordinate : SnakeGame::getInstance().snake.body)
	{
		snakefile << coordinate.x << ' ' << coordinate.y << std::endl;
	}
	snakefile.close();
	std::ofstream foodfile("food.txt");
	foodfile << SnakeGame::getInstance().food.body[0].x << ' ' 
			 << SnakeGame::getInstance().food.body[0].y << std::endl;
	foodfile.close();
}

void SafeFile::deserialize()
{
	//SnakeGame::getInstance().snake.body.clear();
	std::ifstream snakefile("snake.txt");
	if (snakefile.is_open())
	{
		short x, y;
		while (snakefile >> x >> y) {
			SnakeGame::getInstance().snake.body.push_back({ x,y });
			SnakeGame::getInstance().snake.direction = Snake::Default;

		}
	}
	snakefile.close();
	//SnakeGame::getInstance().food.body.clear();
	std::ifstream foodfile("food.txt");
	if (snakefile.is_open())
	{
		short x, y;
		foodfile >> x >> y;
		SnakeGame::getInstance().food.body.push_back({ x,y });	
	}
	foodfile.close();

}

SafeFile::SafeFile()
{
	
}


SafeFile::~SafeFile()
{
}
