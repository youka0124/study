#include "General.h"

void General::test1() {

	int numbers[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	for (int i = 0; i < size(numbers); i++) {

		cout << numbers[i] << endl;
	}
}

void General::test2() {

	int numbers[3][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {

			cout << numbers[i][j] << " ";
		}

		cout << endl;
	}
}

void General::test3() {

	/*int b;
	int* a = &b;
	*a = 10;

	cout << *a << endl;*/

	int* a = new int;
	*a = 20;

	cout << *a << endl;
}

void General::test4() {

	int a = 30;
	int b = 40;
	int c = plus(a, b);

	cout << c << endl;
}

int General::plus(int a, int b) {

	return a + b;
}

void General::test5() {

	Pet_T* pet = new Pet_T;
	setPet(pet);
	
	cout << pet->name << endl;
	cout << pet->age << endl;
}

void General::setPet(Pet_T *pet) {

	pet->name = "Taro";
	pet->age = 6;
}

void General::test6() {

	int i = 0;
	while(true) {

		Pet_T* pet = new Pet_T;
		delete pet;

		i++;

		if (i == 1000) {
			cout << i << endl;
			break;
		}
	}
}