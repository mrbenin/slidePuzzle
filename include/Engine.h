/*
 * Engine.h
 *
 *  Created on: 21 de dez de 2017
 *      Author: max
 */

#ifndef SRC_ENGINE_H_
#define SRC_ENGINE_H_

#include "SDL2/SDL.h"
#include "SdlError.h"
#include "Window.h"
#include <iostream>

class Engine : public SdlError {

private:
	Window *w;
	int initSdl();
	void newWindow(const char *title, int largura, int altura);
	Engine();

public:
	Engine(const char *title, int largura, int altura);
	void run();
	virtual ~Engine();
};

#endif /* SRC_ENGINE_H_ */
