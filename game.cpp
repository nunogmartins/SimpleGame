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
