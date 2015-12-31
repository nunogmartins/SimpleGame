#include "gameengine.cpp"
#include "game.cpp"

int main(int argc, char **argv)
{
	GameEngine *g = 0;
	g = new GameEngine();
	
	g->update();
	
	delete g;

	return 0;
}
