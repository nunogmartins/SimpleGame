#ifndef GAMEENGINE_H
#define GAMEENGINE_H

#include "game.h"

class GameEngine{

private:
	Game *game;	

public:
	GameEngine();
	~GameEngine();

	void update() const;

private:
	void load();
	void save();
	
};

#endif
