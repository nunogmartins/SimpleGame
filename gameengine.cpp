// Copyright (C) 2015  Félix Archambault

//     This program is free software; you can redistribute it and/or modify
//     it under the terms of the GNU General Public License as published by
//     the Free Software Foundation; either version 2 of the License, or
//     (at your option) any later version.

//     This program is distributed in the hope that it will be useful,
//     but WITHOUT ANY WARRANTY; without even the implied warranty of
//     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//     GNU General Public License for more details.

//     You should have received a copy of the GNU General Public License along
//     with this program; if not, write to the Free Software Foundation, Inc.,
//     51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.




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
