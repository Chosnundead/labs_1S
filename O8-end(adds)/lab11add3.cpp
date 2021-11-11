#include "lab11add3.h"
#include <iostream>

using namespace std;

#define MAX_INT 1000000000

void lab11add3::_resize(int** arr, int* size) {
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

lab11add3::lab11add3() {
	int N, m;
	cout << "N == ";
	cin >> N;
	cout << "m == ";
	cin >> m;

	int sizeOfN = 0;
	for (int i = MAX_INT; i > 0; i /= 10) {
		if (N / i) {
			sizeOfN++;
		}
	}

	int temp[2] = { 10, 1 };
	int sizeOfArr = 0;
	int* arr = new int[sizeOfArr];
	for (int i = 0; i < sizeOfN; i++) {
		if (!(m % ((N % temp[0]) / temp[1]))) {
			_resize(&arr, &sizeOfArr);
			arr[(sizeOfArr - 1)] = ((N % temp[0]) / temp[1]);
			cout << "arr[" << (sizeOfArr - 1) << "] == " << arr[(sizeOfArr - 1)] << endl;
		}
		temp[0] *= 10;
		temp[1] *= 10;
	}
}