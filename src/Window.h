/*
 * Window.h
 *
 *  Created on: 21 de dez de 2017
 *      Author: max
 */

#ifndef WINDOW_H_
#define WINDOW_H_

#include "SDL2/SDL.h"

class Window {


private:
	const char* titulo;
	int largura;
	int altura;
	bool fullscreen;

	SDL_Window *window;
	SDL_Renderer *renderer;


public:
	Window(const char* titulo, int largura, int altura);
	virtual ~Window();
};

#endif /* WINDOW_H_ */
