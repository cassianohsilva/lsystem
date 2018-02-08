//============================================================================
// Name        : lsystem.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================

#include <iostream>
#include <string>

#include "LSystem.h"
#include "Rule.h"
#include "StochasticRule.h"

int main(void) {

	StochasticRule r1("A", { { 0.25, "AB" }, { 0.25, "BA" }, { 0.25, "AA" }, { 0.25, "BB" } });
	Rule r2("B", "A");

	LSystem system(std::string("A"), std::vector<Producible*> { &r1, &r2 });

	std::cout << system.Step(7) << std::endl;

	return 0;
}
