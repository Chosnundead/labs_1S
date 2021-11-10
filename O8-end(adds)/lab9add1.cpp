#include "lab9add1.h"
#include <iostream>
#include <conio.h>
#include <ctime>
#include <cmath>

using namespace std;

lab9add1::lab9add1() {
	setlocale(LC_ALL, "Russian");
	int sizeOfArray;

	cout << "¬ведите количество дней: ";
	cin >> sizeOfArray;

	srand(time(0));

	double* arr = new double[sizeOfArray];
	for (int arri = 0; arri < sizeOfArray; arri++) {
		arr[arri] = 0;
		if (!(arri % 3)) {
			arr[arri] = abs((rand() % 100));
		}

		cout << (arri + 1) << " день: " << arr[arri] << "мм." << endl;
	}

	int sizeOfTemp = sizeOfArray / 7 + 1;
	double* temp = new double[sizeOfTemp];
	int counter = 0;

	for (int stepOfTemp = 0; stepOfTemp < sizeOfTemp; stepOfTemp++) {
		temp[stepOfTemp] = 0;
	}

	for (int stepOfArray = 0; stepOfArray < sizeOfArray; stepOfArray++) {
		if (arr[stepOfArray]) {
			temp[counter] += arr[stepOfArray];
		}
		if (!((stepOfArray + 1) % 7)) {
			counter++;
		}
	}

	counter = 0;

	for (int stepOfTemp = 0; stepOfTemp < sizeOfTemp; stepOfTemp++) {
		if (temp[stepOfTemp] > temp[counter]) {
			counter = stepOfTemp;
		}
	}

	cout << (counter + 1) << " недел€." << endl;
}