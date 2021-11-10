#include "lab9add3.h"
#include <iostream>
#include <ctime>

using namespace std;

lab9add3::lab9add3() {
	setlocale(LC_ALL, "Russian");
	int sizeOfArr;
	cout << "Введите размерность вашего массива: ";
	cin >> sizeOfArr;

	int* arr = new int[sizeOfArr];

	srand(time(0));
	for (int stepOfArr = 0; stepOfArr < sizeOfArr; stepOfArr++) {
		arr[stepOfArr] = (rand() % 10);
		cout << "arr[" << stepOfArr << "] == " << arr[stepOfArr] << endl;
	}

	int counter = 0;
	for (int stepOfArr = 1; stepOfArr < sizeOfArr; stepOfArr++) {
		if (arr[(stepOfArr - 1)] == arr[stepOfArr]) {
			counter++;
		}
	}
	cout << "Количество пар соседних элементов: " << counter << endl;
}