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

int main(void) {

	Rule r1("A", "AB");
	Rule r2("B", "A");

	LSystem system(std::string("A"), std::vector<Rule*> { &r1, &r2 });

	std::cout << system.Step(7) << std::endl;

	return 0;
}
