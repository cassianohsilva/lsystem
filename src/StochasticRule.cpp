/*
 * Stochastic.cpp
 *
 *  Created on: 5 de jan de 2018
 *      Author: cassiano
 */

#include "StochasticRule.h"

#include <chrono>
#include <algorithm>

#include <cstdio>

StochasticRule::StochasticRule(const std::string& _left,
		const std::vector<std::pair<double, std::string> >& _right) :
		AbstractRule(_left, _right), engine(

				std::default_random_engine(
						std::chrono::system_clock::now().time_since_epoch().count())), probSum(
				std::accumulate(_right.begin(), _right.end(), 0.0,
						[](double a, std::pair<double, std::string> b) {
							return a + b.first;
						})), distribution(
				std::uniform_real_distribution<double>(0, probSum)) {

}

StochasticRule::~StochasticRule() {

}

const std::string& StochasticRule::Produce(const std::string& left)
		throw (InvalidLeftException) {

	if (this->left != left) {
		throw InvalidLeftException(this->left, left);
	}

	auto prob = distribution(engine);
	auto accProb = 0.0;

	auto it = this->right.begin();

	while ((it != right.end()) && (prob > (accProb + (*it).first))) {
		accProb += (*it).first;

		++it;
	}

	return (*it).second;
}
