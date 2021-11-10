#include "lab11add2.h"
#include <iostream>
#include <conio.h>
#include <ctime>

using namespace std;

void lab11add2::_resize(int** arr, int* size) {
	int* newArr = new int[(*size)];
	for (int i = 0; i < (*size); i++) {
		newArr[i] = (*arr)[i];
	}
	delete[] * arr;
	(*arr) = new int[((*size) + 1)];
	for (int i = 0; i < (*size); i++) {
		(*arr)[i] = newArr[i];
	}
	delete[] newArr;
	(*size)++;
}

lab11add2::lab11add2() {
	setlocale(LC_ALL, "Russian");
	srand(time(0));

	int k, n;
	cout << "k == ";
	cin >> k;
	cout << "n == ";
	cin >> n;

	int* arrOfK = new int[k];
	int* arrOfN = new int[n];

	for (int stepOfArr = 0; stepOfArr < k; stepOfArr++) {
		arrOfK[stepOfArr] = (rand() % 10) - (rand() % 10);
		cout << "arrOfK[" << stepOfArr << "] == " << arrOfK[stepOfArr] << endl;
	}
	for (int stepOfArr = 0; stepOfArr < n; stepOfArr++) {
		arrOfN[stepOfArr] = (rand() % 10) - (rand() % 10);
		cout << "arrOfN[" << stepOfArr << "] == " << arrOfN[stepOfArr] << endl;
	}

	int minOfK = arrOfK[0], maxOfK = arrOfK[0];
	for (int stepOfArr = 0; stepOfArr < k; stepOfArr++) {
		if (arrOfK[stepOfArr] < minOfK) {
			minOfK = arrOfK[stepOfArr];
		}
		if (arrOfK[stepOfArr] > maxOfK) {
			maxOfK = arrOfK[stepOfArr];
		}
	}

	int temp = n;
	if (k > temp) {
		temp = k;
	}
	bool isK = false, isN = false;
	int z = 0;
	int* arrOfZ = new int[z];
	while (minOfK <= maxOfK) {
		for (int stepOfArr = 0; stepOfArr < temp; stepOfArr++) {
			if (minOfK == arrOfK[stepOfArr]) {
				isK = true;
			}
			if (minOfK == arrOfN[stepOfArr]) {
				isN = true;
			}
		}
		if (isN && isK) {
			_resize(&arrOfZ, &z);
			arrOfZ[(z - 1)] = minOfK;
		}
		isN = false;
		isK = false;
		minOfK++;
	}

	for (int stepOfArr = 0; stepOfArr < z; stepOfArr++) {
		cout << "arrOfZ[" << stepOfArr << "] == " << arrOfZ[stepOfArr] << endl;
	}
}