/*
 * LSystem.cpp
 *
 *  Created on: 5 de jan de 2018
 *      Author: cassiano
 */

#include "LSystem.h"

LSystem::~LSystem() {

}

const std::string& LSystem::Step(std::size_t n) {

	for (std::size_t i = 0; i < n; ++i) {

		std::string temp("");

		for (auto it = current.begin(); it != current.end(); ++it) {

			auto left = std::string(1, *it);
			auto ruleIt = rules.find(left);

			if (ruleIt != rules.end()) {
				temp += (*ruleIt).second->Produce(left);
			} else {
				temp += left;
			}
		}

		current = temp;
	}

	return current;
}
