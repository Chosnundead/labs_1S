#include "lab17.h"
#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

void lab17::_copyPaste() {
	int size, number;
	bool isntBreak;

	do {
		cout << "Введите размеры ваших квадратных матриц: ";
		cin >> size;
		cout << "Введите количество ваших квадратных матриц: ";
		cin >> number;
		if ((size < 2) || (number < 1)) {
			system("cls");
			cout << "Вы ввели не корректные значения((size >= 2) && (nummber >= 1))!\n";
			isntBreak = true;
		}
		else {
			isntBreak = false;
		}
	} while (isntBreak);
	int* sumOfElements = new int[number];

	int*** matrix = new int** [number];
	for (int i = 0; i < number; i++) {
		matrix[i] = new int* [size];
	}
	for (int i = 0; i < number; i++) {
		for (int j = 0; j < size; j++) {
			matrix[i][j] = new int[size];
		}
	}

	srand(time(0));
	for (int i = 0; i < number; i++) {
		cout << "\n\n\n\t\t~~~~~~HERE IS NEW MATRIX~~~~~~\n\n\n";
		for (int j = 0; j < size; j++) {
			for (int k = 0; k < size; k++) {
				matrix[i][j][k] = rand() - rand();
				cout << matrix[i][j][k] << "\t";
			}
			cout << "\n\t\t======666======\n";
		}
	}

	for (int i = 0; i < number; i++) {
		sumOfElements[i] = 0;
	}
	int shiftOy = 0;
	for (int i = 0; i < number; i++) {
		shiftOy = 1;
		for (int j = 0; j < (size - 1); j++) {
			for (int k = 0; k < (size - (1 + j)); k++) {
				sumOfElements[i] += matrix[i][(shiftOy + j)][j];
				shiftOy++;
			}
			shiftOy = 1;
		}
	}

	int count = 1;
	int result = sumOfElements[0];
	for (int i = 0; i < number; i++) {
		if (result < sumOfElements[i]) {
			result = sumOfElements[i];
			count = i + 1;
		}
	}

	cout << "\n\n\nСамая большая сумма элементов под главной диагональю находится в матрице №" << count << ": " << result << endl;
}

lab17::lab17() {
	double a, b, e = 0.001, temp[2], result;

	cout << "a == ";
	cin >> a;
	cout << "b == ";
	cin >> b;

	temp[0] = a;
	temp[1] = b;
	do {
		result = (temp[0] + temp[1]) / 2;
		if ((((5 * result) - 1 + pow(result, 3)) * ((5 * temp[0]) - 1 + pow(temp[0], 3))) <= 0) {
			temp[1] = result;
		}
		else {
			temp[0] = result;
		}
	} while (abs((temp[0] - temp[1])) > (2 * e));
	cout << "Корень первого уравнения: " << result << endl;

	temp[0] = a;
	temp[1] = b;
	do {
		result = (temp[0] + temp[1]) / 2;
		if (((pow(result, 2) + (1 / result)) * (pow(temp[0], 2) + (1 / temp[0]))) <= 0) {
			temp[1] = result;
		}
		else {
			temp[0] = result;
		}
	} while (abs((temp[0] - temp[1])) > (2 * e));
	cout << "Корень второго уравнения: " << result << endl;

	_copyPaste();
}