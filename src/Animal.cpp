/*
 * Animal.cpp
 *
 *  Created on: 11 ago 2019
 *      Author: tropi
 */

#include "Animal.h"
#include <iostream>
#include <string>

Animal::Animal() {

	std::cout << "Animal created" << std::endl;
}

Animal::Animal(Animal& other) : name(other.name){
	std::cout << "Animal copy created" << std::endl;
}

void Animal::setName(std::string name){
	this->name = name;
}

void Animal::speak(){
	std::cout << "My name is " << name << std::endl;
}

Animal *Animal::newAnimal(){
	Animal *a = new Animal();
	a->setName("Harry");
	return a;
}

Animal::~Animal() {
	std::cout << "Animal destroyed" << std::endl;
}

