/*
 * SdlError.h
 *
 *  Created on: 25 de dez de 2017
 *      Author: max
 */

#ifndef SDLERROR_H_
#define SDLERROR_H_

#include <iostream>

class SdlError {
public:
	SdlError();
	virtual ~SdlError();
protected:
	void getError(const std::string &msg);
};

#endif /* SDLERROR_H_ */
