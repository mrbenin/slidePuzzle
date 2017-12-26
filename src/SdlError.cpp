/*
 * SdlError.cpp
 *
 *  Created on: 25 de dez de 2017
 *      Author: max
 */

#include "SdlError.h"
#include "SDL2/SDL_error.h"

SdlError::SdlError() {
	// TODO Auto-generated constructor stub

}

SdlError::~SdlError() {
	// TODO Auto-generated destructor stub
}

void SdlError::getError(const std::string &msg){
	std::cout << msg << ": " << SDL_GetError() << std::endl;
}
