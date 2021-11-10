#include "lab9add2.h"
#include <iostream>
#include <ctime>

using namespace std;

lab9add2::lab9add2() {
	setlocale(LC_ALL, "Russian");
	int sizeOfArray;
	cout << "Введите размерность вашего массива: ";
	cin >> sizeOfArray;

	int* arr = new int[sizeOfArray];

	srand(time(0));
	for (int stepOfArr = 0; stepOfArr < sizeOfArray; stepOfArr++) {
		arr[stepOfArr] = (rand() % 100) - (rand() % 100);
		cout << "arr[" << stepOfArr << "] == " << arr[stepOfArr] << endl;
	}

	int temp[5] = { 0, 0, 0, 0, 0 };
	temp[0] = arr[0];
	temp[1] = arr[0];
	for (int stepOfArr = 0; stepOfArr < sizeOfArray; stepOfArr++) {
		if (arr[stepOfArr] > arr[temp[0]]) {
			temp[0] = stepOfArr;
		}
		if (arr[stepOfArr] < arr[temp[1]]) {
			temp[1] = stepOfArr;
		}
	}

	if (temp[0] > temp[1]) {
		temp[2] = 0;
		temp[3] = 1;
	}
	else {
		temp[2] = 1;
		temp[3] = 0;
	}

	while (temp[temp[2]] > temp[temp[3]]) {
		temp[4] = arr[temp[temp[2]]];
		arr[temp[temp[2]]] = arr[temp[temp[3]]];
		arr[temp[temp[3]]] = temp[4];

		temp[temp[3]]++;
		temp[temp[2]]--;
	}

	cout << "Новый массив:\n";
	for (int stepOfArr = 0; stepOfArr < sizeOfArray; stepOfArr++) {
		cout << "arr[" << stepOfArr << "] == " << arr[stepOfArr] << endl;
	}
}