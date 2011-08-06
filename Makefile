gamelibrary: lib
	g++ -L . -lmygameengine main.cpp -Wall -o game

all: gameengine.o game.o
	g++ game.o gameengine.o main.cpp -o game -Wall

gamelib:
	g++ -fPIC -c game.cpp

gameenginelib:
	g++ -fPIC -c gameengine.cpp

lib: gamelib gameenginelib
	g++ -shared -Wl,-soname,libmygameengine.so.1 -o libmygameengine.so.1.0.1 game.o gameengine.o
	ln -sf libmygameengine.so.1.0.1 libmygameengine.so.1

game.o:
	g++ -c game.cpp

gameengine.o:
	g++ -c gameengine.cpp

clean:
	rm *.o game *.so.* *.so
