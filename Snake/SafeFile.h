#pragma once
#include "Snake.h"
#include "Food.h"
#include<fstream>
#include "SnakeGame.h"
#include <istream>
class SafeFile
{

public:
	Snake * snake;
	static void serialize();
	static void deserialize();
	SafeFile();
	~SafeFile();
};

