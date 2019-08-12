//============================================================================
// Name        : trainingcpp.cpp
// Author      : Angel Ale
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Animal.h"
using namespace std;

int main() {

	Animal d;
	Animal *h;

	h = d.newAnimal();

	h->speak();

	delete h;


	return 0;
}
