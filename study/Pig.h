#pragma once
#include "Animal.h"

class Pig : public Animal {

public:

	void setName(string name) {

		this->name = name;
	}
	string getName() {

		return this->name;
	}
};
