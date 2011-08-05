#include <iostream>

#include "gameengine.h"

GameEngine::GameEngine()
{
	this->load();
	this->game = new Game();
}

GameEngine::~GameEngine()
{
	this->save();
	delete game;
}

void GameEngine::update()const
{
	std::cout << "update function" << std::endl;
	if(this->game == 0)
		return;
		
	while(!this->game->over()){
		this->game->update();
		sleep(1);
	}
}

void GameEngine::load()
{
	std::cout << "load function" << std::endl;
}

void GameEngine::save()
{
	std::cout << "save function" << std::endl;
}
