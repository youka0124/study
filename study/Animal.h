#pragma once
#include <iostream>

using namespace std;

class Animal {

protected:

	string name;

public:

	virtual void setName(string name) {
	}
	virtual string getName() {

		return "";
	}
};
