/*
 * Engine.cpp
 *
 *  Created on: 21 de dez de 2017
 *      Author: max
 */

#include "Engine.h"

Engine::Engine() {

}


int Engine::start(const char* titulo, int largura, int altura){

		if(initSdl() != 1){
			this->w = new Window(titulo,largura,altura);
		}else{
			return 1;
		}

	return 0;
}

Engine::~Engine() {
	// TODO Auto-generated destructor stub
	SDL_Quit();
}


int Engine::initSdl(){
	if (SDL_Init(SDL_INIT_VIDEO) != 0){
		return 1;
	}

	return 0;
}
