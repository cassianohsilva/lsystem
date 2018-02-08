/*
 * Rule.h
 *
 *  Created on: 5 de jan de 2018
 *      Author: cassiano
 */

#ifndef RULE_H_
#define RULE_H_

#include "AbstractRule.h"

#include <string>

class Rule: public AbstractRule<std::string> {
public:
	Rule(const std::string& symbol, const std::string& production);
	virtual ~Rule();

	const std::string& Produce(const std::string& left) throw (InvalidLeftException) override;
};

#endif /* RULE_H_ */
