#include "Vector.h"

void Vector::test1() {

	vector<int> numbers;
	numbers = { 1, 2, 3 };
	numbers.push_back(4);

	for (vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {

		cout << *it << endl;
	}
}

void Vector::test2() {

	vector<int> numbers;
	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	numbers.push_back(4);
	numbers.push_back(5);
	numbers.push_back(6);
	numbers.push_back(7);
	numbers.push_back(8);
	numbers.push_back(9);
	numbers.push_back(10);

	//�C�e���[�^�[���̓|�C���^�̖��������B
	for (vector<int>::iterator it = numbers.begin(); it != numbers.end();) {  //�f�[�^���폜����ꍇ�A++it���Ȃ�

		if (*it != 5) {
			cout << *it << endl;

			//�f�[�^���폜���Ȃ��ꍇ�A�C�e���[�^�[���i�ށB
			++it;
		}
		else {
			//�f�[�^�폜�A���̃f�[�^���O�ɏo�āA�i�ށB
			it = numbers.erase(it);
		}
	}
}

void Vector::test3() {

	vector<User_T> users;

	User_T user1;
	user1.name = "Taro";
	user1.age = 10;

	users.push_back(user1);

	User_T user2;

	user2.name = "Hanako";
	user2.age = 12;

	users.push_back(user2);

	for (vector<User_T>::iterator it = users.begin(); it != users.end(); ++it) {

		cout << it->name << endl;
		cout << it->age << endl;
	}
}

void Vector::test4() {

	vector<User_T*> users;

	User_T* user1 = new User_T;

	user1->name = "Ai";
	user1->age = 15;

	users.push_back(user1);

	User_T* user2 = new User_T;

	user2->name = "Ken";
	user2->age = 16;

	users.push_back(user2);

	for (vector<User_T*>::iterator it = users.begin(); it != users.end(); ++it) {

		cout << (*it)->name << endl;
		cout << (*it)->age << endl;
	}
}