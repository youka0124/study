#pragma once
#include "Animal.h"

class Cat : public Animal {

public:

	void setName(string name) {

		this->name = name;
	}
	string getName() {

		return this->name;
	}
};
