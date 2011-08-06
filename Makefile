gamelibrary: lib
	g++ -I ./include -L . -lmygameengine main.cpp -Wall -o game

all: gameengine.o game.o
	g++ -I ./include game.o gameengine.o main.cpp -o game -Wall

gamelib:
	g++ -I ./include -fPIC -c game.cpp

gameenginelib:
	g++ -I ./include -fPIC -c gameengine.cpp

lib: gamelib gameenginelib
	g++ -I ./include -shared -Wl,-soname,libmygameengine.so.1 -o libmygameengine.so.1.0.1 game.o gameengine.o
	ln -sf libmygameengine.so.1.0.1 libmygameengine.so.1
	ln -sf libmygameengine.so.1.0.1 libmygameengine.so
#	export LD_LIBRARY_PATH=.

game.o:
	g++ -I ./include -c game.cpp

gameengine.o:
	g++ -I ./include -c gameengine.cpp

clean:
	rm *.o game *.so.* *.so
