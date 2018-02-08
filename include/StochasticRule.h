/*
 * Stochastic.h
 *
 *  Created on: 5 de jan de 2018
 *      Author: cassiano
 */

#ifndef STOCHASTICRULE_H_
#define STOCHASTICRULE_H_

#include "AbstractRule.h"

#include <string>
#include <vector>
#include <utility>
#include <random>

class StochasticRule: public AbstractRule<
		std::vector<std::pair<double, std::string>> > {
public:

	StochasticRule(const std::string& left,
			const std::vector<std::pair<double, std::string>>& right);

	virtual ~StochasticRule();

	const std::string& Produce(const std::string& left)
			throw (InvalidLeftException) override;

private:
	std::string symbol;
	std::vector<std::pair<double, std::string>> productions;
	double probSum;

	std::default_random_engine engine;
	std::uniform_real_distribution<double> distribution;
};

#endif /* STOCHASTICRULE_H_ */
