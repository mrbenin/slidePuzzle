/*
 * Engine.cpp
 *
 *  Created on: 21 de dez de 2017
 *      Author: max
 */

#include "Engine.h"
#include <iostream>

Engine::Engine(const char *title, int largura, int altura) {

	if(SDL_Init(SDL_INIT_EVERYTHING) < 0){
		this->getError("SDL INIT");
		exit(1);
	}

	this->w = new Window(title,largura,altura);

	if(this->w == nullptr){
		this->getError("SDL WINDOW e RENDERER");
		exit(1);
	}

}


void Engine::run(){

}

Engine::~Engine() {
	// TODO Auto-generated destructor stub

	delete w;

	SDL_Quit();
}



