#include "Class.h"
#include "Dog.h"

void TestClass::test1() {

	Animal *dog = new Dog("Koko");

	cout << dog->getName() << endl;

	dog->setName("Nana");

	cout << dog->getName() << endl;
}