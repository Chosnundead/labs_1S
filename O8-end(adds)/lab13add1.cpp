#include "lab13add1.h"
#include <iostream>
#include <conio.h>
#include <ctime>

using namespace std;

lab13add1::lab13add1() {
	setlocale(LC_ALL, "Russian");
	srand(time(0));

	int n;
	cout << "n == ";
	cin >> n;

	int*** matrix = new int** [4];
	for (int number = 0; number < 4; number++) {
		matrix[number] = new int* [n];
		for (int oY = 0; oY < n; oY++) {
			matrix[number][oY] = new int[n];
			if (oY == (n - 1)) {
				for (int fillX = 0; fillX < n; fillX++) {
					for (int fillY = 0; fillY < n; fillY++) {
						matrix[number][fillX][fillY] = ((rand() % 10) - (rand() % 10));
						cout << matrix[number][fillX][fillY] << "\t";
					}
					cout << endl;
				}
				cout << endl << "======666======" << endl;
			}
		}
	}

	for (int oY = 0; oY < n; oY++) {
		for (int oXOf0Arr = 0; oXOf0Arr < n; oXOf0Arr++) {
			cout << matrix[0][oY][oXOf0Arr] << "\t";
		}
		for (int oXOf1Arr = 0; oXOf1Arr < n; oXOf1Arr++) {
			cout << matrix[1][oY][oXOf1Arr] << "\t";
		}
		cout << endl;
	}
	for (int oY = 0; oY < n; oY++) {
		for (int oXOf2Arr = 0; oXOf2Arr < n; oXOf2Arr++) {
			cout << matrix[2][oY][oXOf2Arr] << "\t";
		}
		for (int oXOf3Arr = 0; oXOf3Arr < n; oXOf3Arr++) {
			cout << matrix[3][oY][oXOf3Arr] << "\t";
		}
		cout << endl;
	}
	cout << endl << "======666======" << endl;

	for (int oY = 0; oY < n; oY++) {
		for (int oXOf3Arr = 0; oXOf3Arr < n; oXOf3Arr++) {
			cout << matrix[3][oY][oXOf3Arr] << "\t";
		}
		for (int oXOf2Arr = 0; oXOf2Arr < n; oXOf2Arr++) {
			cout << matrix[2][oY][oXOf2Arr] << "\t";
		}
		cout << endl;
	}
	for (int oY = 0; oY < n; oY++) {
		for (int oXOf1Arr = 0; oXOf1Arr < n; oXOf1Arr++) {
			cout << matrix[1][oY][oXOf1Arr] << "\t";
		}
		for (int oXOf0Arr = 0; oXOf0Arr < n; oXOf0Arr++) {
			cout << matrix[0][oY][oXOf0Arr] << "\t";
		}
		cout << endl;
	}
	cout << endl << "======666======" << endl;
}