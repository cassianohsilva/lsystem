/*
 * Rule.cpp
 *
 *  Created on: 5 de jan de 2018
 *      Author: cassiano
 */

#include "Rule.h"

Rule::Rule(const std::string& _left, const std::string& _right) :
		AbstractRule(_left, _right) {

}

Rule::~Rule() {

}

const std::string& Rule::Produce(const std::string& left) throw (InvalidLeftException) {
	if(this->left != left) {
		throw InvalidLeftException(this->left, left);
	}

	return right;
}
