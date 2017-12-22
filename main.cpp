#include <iostream>
#include "SDL2/SDL.h"
#include "src/Engine.h"

int main(int argv, char **argc){


	Engine *e = new Engine();

	e->start("Slide Puzzle", 800, 600);


	SDL_Delay(1000);
	SDL_Quit();
	return 0;
}
