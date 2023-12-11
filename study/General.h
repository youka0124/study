#pragma once
#include <iostream>
#include <vector>

using namespace std;

struct Pet_T {

	string name;
	int age;
};

class General {

public:

	void test1();
	void test2();
	void test3();
	void test4();
	void test5();
	void test6();

private:

	int plus(int a, int b);
	void setPet(Pet_T *pet);
};