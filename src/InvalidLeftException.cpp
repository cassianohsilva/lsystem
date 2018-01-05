/*
 * InvalidLeftWxception.cpp
 *
 *  Created on: 5 de jan de 2018
 *      Author: cassiano
 */

#include "InvalidLeftException.h"

InvalidLeftException::InvalidLeftException(const std::string& expected,
		const std::string& passed) :
		std::runtime_error(
				"Invalid left: expected " + expected + " but " + passed) {
}

InvalidLeftException::~InvalidLeftException() {
}

