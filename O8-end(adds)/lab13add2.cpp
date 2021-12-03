#include "lab13add2.h"
#include <iostream>
#include <conio.h>
#include <ctime>

using namespace std;

lab13add2::lab13add2() {
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	int matrix[6][6];

	for (int y = 0; y < 6; y++) {
		for (int x = 0; x < 6; x++) {
			matrix[y][x] = ((rand() % 10) - (rand() % 2));
			cout << matrix[y][x] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	for (int step = 0; step < 6; step++) {
		if (matrix[step][step] == step) {
			cout << "X == Y == matrix[" << step << "][" << step << "] == " << step << endl;
		}
	}
	int temp = 0;
	for (int y = 0; y < 6; y++) {
		for (int x = 0; x < 6; x++) {
			if (matrix[y][x] < 0) {
				for (int step = 0; step < 6; step++) {
					temp += matrix[y][step];
				}
				cout << "Сумма элементов строки №" << (y + 1) << " == " << temp << endl;
				temp = 0;
				break;
			}
		}
	}
}