/*
 * LSystem.h
 *
 *  Created on: 5 de jan de 2018
 *      Author: cassiano
 */

#ifndef LSYSTEM_H_
#define LSYSTEM_H_

#include "AbstractRule.h"

#include <string>
#include <vector>
#include <map>

class LSystem {
public:
	LSystem(const std::string& axiom, const std::vector<Producible*>& rules);
	virtual ~LSystem();

	const std::string& Step(std::size_t n = 1);

private:
	std::string axiom;
	std::map<std::string, Producible*> rules;

	std::string current;
};

#endif /* LSYSTEM_H_ */
