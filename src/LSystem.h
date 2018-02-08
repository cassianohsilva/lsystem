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
#include <type_traits>

class LSystem {
public:

	template<class T, typename = std::enable_if<
			std::is_base_of<Producible, T>::value>>
	LSystem(const std::string& axiom, const std::vector<T*>& rules) :
			axiom(axiom), current(axiom) {

		for (const auto& rule : rules) {

			// TODO Add check if left already added
			this->rules[rule->GetLeft()] = static_cast<Producible*>(rule);
		}
	}

	virtual ~LSystem();

	const std::string& Step(std::size_t n = 1);

private:
	std::string axiom;
	std::map<std::string, Producible*> rules;

	std::string current;
};

#endif /* LSYSTEM_H_ */
