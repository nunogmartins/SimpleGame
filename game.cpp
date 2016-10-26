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
#include <fstream>

#include "game.h"

Game::Game()
{
	this->i=0;
	this->matrix = new char[100];
	
	std::ifstream f("matrix.bin", std::ios::in|std::ios::binary);
	if(f){
		this->load(f);
		f.close();
	}
	
}

Game::~Game()
{
	std::ofstream f("matrix.bin", std::ios::out | std::ios::binary);
	if(!f) { 
    	std::cout << "Cannot open file for writting." << std::endl;
   	}else{
		this->save(f);
		f.close();
	}

	delete []this->matrix;
}

void Game::load(std::ifstream &f)
{
	
}

void Game::save(std::ofstream &f)
{
	f.write(this->matrix, 100);
	std::cout << "saved " << 100 << " bytes " << std::endl;
}

void Game::update()
{
	std::cout << "time " << this->i << std::endl;
	this->i++;
}

bool Game::isOver()const
{
	return this->i==10;
}
