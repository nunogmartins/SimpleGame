#include <iostream>
#include <unistd.h>
#include "gameengine.h"
#include "game.h"

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
	if(this->game == 0)
		return;
		
	while(!this->game->isOver()){
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
