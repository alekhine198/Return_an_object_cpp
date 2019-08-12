/*
 * Animal.h
 *
 *  Created on: 11 ago 2019
 *      Author: tropi
 */

#ifndef ANIMAL_H_
#define ANIMAL_H_

#include <string>
#include <iostream>

class Animal {
private:
	std::string name;
public:
	Animal();
	Animal(Animal &other);
	virtual ~Animal();
	void setName(std::string name);
	void speak();
	Animal *newAnimal();
};

#endif /* ANIMAL_H_ */
