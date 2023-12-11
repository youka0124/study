#pragma once
#include "Animal.h"

class Dog : public Animal {

public:

	Dog(string name) {

		this->name = name;
	}
	void setName(string name) {

		this->name = name;
	}
	string getName() {

		return this->name;
	}
};