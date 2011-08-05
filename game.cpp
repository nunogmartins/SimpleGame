#include <iostream>
#include "game.h"

Game::Game()
{
	this->i=0;
}

Game::~Game()
{
}

void Game::update()
{
	std::cout << "time " << i << std::endl;
	this->i++;
	
}

bool Game::over()const
{
	
	return this->i==10;
}
