#include <iostream>
#include "SDL2/SDL.h"
#include "Engine.h"

int main(int argv, char **argc){


	Engine *e = new Engine("Slide Puzzle", 800, 600);


	SDL_Delay(1000);
	delete e;

	return 0;
}
