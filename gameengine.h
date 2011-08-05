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
