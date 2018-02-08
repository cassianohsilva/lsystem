/*
 * Rule.h
 *
 *  Created on: 5 de jan de 2018
 *      Author: cassiano
 */

#ifndef ABSTRACTRULE_H_
#define ABSTRACTRULE_H_

#include "InvalidLeftException.h"

#include <string>

class Producible {

public:
	virtual const std::string& Produce(const std::string& left)
			throw (InvalidLeftException) = 0;

	virtual const std::string& GetLeft() const = 0;

	virtual ~Producible() {
	}
};

template<class T>
class AbstractRule: public Producible {
public:

	AbstractRule(const std::string& left, const T& right) :
			left(left), right(right) {
	}

	virtual ~AbstractRule() {
	}

	const std::string& GetLeft() const override {
		return left;
	}

	const T& GetRight() const {
		return right;
	}

protected:
	std::string left;
	T right;
};

#endif /* ABSTRACTRULE_H_ */
