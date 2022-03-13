#include "Animal.h"
#include <iostream>

void Animal::doSomething() {
	std::cout << "My id is " << id;
	std::cout << " and my name is " << name << std::endl;
}

void Animal::doDoSomething() {
	std::cout << "I'm doing something, but statically" << std::endl;
}