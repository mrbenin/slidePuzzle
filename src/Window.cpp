/*
 * Window.cpp
 *
 *  Created on: 21 de dez de 2017
 *      Author: max
 */

#include "Window.h"




Window::Window(const char* titulo, int largura, int altura) {

	this->titulo = titulo;
	this->largura = largura;
	this->altura = altura;
	this->fullscreen = false;

	this->window = SDL_CreateWindow(this->titulo,SDL_WINDOWPOS_CENTERED,
			SDL_WINDOWPOS_CENTERED,
			this->largura,
			this->altura,
			SDL_WINDOW_SHOWN);

	this->renderer = SDL_CreateRenderer(this->window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

}

Window::~Window() {
	// TODO Auto-generated destructor stub
	SDL_DestroyRenderer(this->renderer);
	SDL_DestroyWindow(this->window);
}

