/*
 * InvalidLeftWxception.h
 *
 *  Created on: 5 de jan de 2018
 *      Author: cassiano
 */

#ifndef INVALIDLEFTEXCEPTION_H_
#define INVALIDLEFTEXCEPTION_H_

#include <stdexcept>

class InvalidLeftException : std::runtime_error {
public:
	InvalidLeftException(const std::string& expected, const std::string& passed);
	virtual ~InvalidLeftException();
};

#endif /* INVALIDLEFTEXCEPTION_H_ */
