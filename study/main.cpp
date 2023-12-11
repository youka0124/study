#include "Vector.h"
#include "General.h"
#include "Class.h"

int main() {

	Vector* vector = new Vector;

	cout << "Vector::test1()" << endl;

	vector->test1();

	cout << endl;

	cout << "Vector::test2()" << endl;

	vector->test2();

	cout << endl;

	cout << "Vector::test3()" << endl;

	vector->test3();

	cout << endl;

	cout << "Vector::test4()" << endl;

	vector->test4();

	cout << endl;

	General* general = new General;

	cout << "General::test1()" << endl;

	general->test1();

	cout << endl;

	cout << "General::test2()" << endl;

	general->test2();

	cout << endl;

	cout << "General::test3()" << endl;

	general->test3();

	cout << endl;

	cout << "General::test4()" << endl;

	general->test4();

	cout << endl;

	cout << "General::test5()" << endl;

	general->test5();

	cout << endl;

	cout << "General::test6()" << endl;

	general->test6();

	cout << endl;

	TestClass* testClass = new TestClass;

	cout << "TestClass::test1()" << endl;

	testClass->test1();
	
	cout << endl;

	return 0;
}