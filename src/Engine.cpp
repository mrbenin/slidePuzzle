/*
 * Engine.cpp
 *
 *  Created on: 21 de dez de 2017
 *      Author: max
 */

#include "Engine.h"

Engine::Engine() {
	// TODO Auto-generated constructor stub
}


int Engine::start(const char* titulo, int largura, int altura){

		if(initSdl() != 1){
			this->w = new Window(titulo,largura,altura);
		}else{

		}

}

Engine::~Engine() {
	// TODO Auto-generated destructor stub
}

