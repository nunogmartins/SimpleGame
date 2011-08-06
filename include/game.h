#ifndef GAME_H
#define GAME_H

#include <fstream>

class Game {
private:
	int i;
	char *matrix;

public:
	Game();
	~Game();

	void update();
	bool isOver()const;

private:
	void load(std::ifstream &f);
	void save(std::ofstream &f);
};
#endif
