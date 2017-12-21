/*
 * Engine.h
 *
 *  Created on: 21 de dez de 2017
 *      Author: max
 */

#ifndef SRC_ENGINE_H_
#define SRC_ENGINE_H_

#include "SDL2/SDL.h"
#include "Window.h"


class Engine {

private:
	Window *w;
	int initSdl();

public:
	Engine();
	int start(const char *title, int largura, int altura);
	virtual ~Engine();
};

#endif /* SRC_ENGINE_H_ */
