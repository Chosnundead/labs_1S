#include "test.h"
#include <iostream>
#include <ctime>

using namespace std;

test::test(){
	int size, minimum, sum;
	bool isntBreak;

	do {
		cout << "Введите размерность вашей квадратной матрицы: ";
		cin >> size;

		if (size < 3) {
			isntBreak = true;
			system("cls");
			cout << "Введите корректный размер матрицы(size >= 3)!\n";
		} else {
			isntBreak = false;
		}
	} while (isntBreak);

	int** arr = new int* [size];//Создаем двойной указатель(size - количество столбцов)
	for (int i = 0; i < size; i++) {
		arr[i] = new int[size];//Создаем в каждом i столбце size строк
	}

	srand(time(0));
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			arr[i][j] = rand() - rand();
			cout << arr[i][j] << "\t";
		}
		cout << "\n\t\t======666======\n";
	}

	minimum = arr[0][0];

	for (int i = 0; i < size; i++) {
		if (arr[i][i] < minimum) {
			minimum = arr[i][i];
		}
	}

	cout << "Минимальное число в главной диагонале: " << minimum << endl;

	cout << "Суммы:\n";
	for (int i = 1; i < (size - 1); i++) {
		sum = arr[(i - 1)][i] + arr[(i + 1)][i];
		cout << i << ": " << sum << endl;
	}
}

test::~test() {
	cout << "delete \"test.h\"\n";
}