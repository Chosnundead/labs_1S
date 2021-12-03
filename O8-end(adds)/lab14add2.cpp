#include "lab14add2.h"
#include <iostream>
#include <conio.h>
#include <string>
#include <ctime>
#include <cmath>

using namespace std;

void _lab14add2task1() {
	int n;
	cout << "n == ";
	cin >> n;
	int* arr = new int[n];
	int counter = 0;
	for (int step = 0; step < n; step++) {
		arr[step] = ((rand() % 10) - (rand() % 10));
		cout << "arr[" << step << "] == " << arr[step] << endl;
		if (arr[step] < 0) {
			counter++;
		}
	}
	int minIndex = (n - 1);
	for (int step = (n - 1); step >= 0; step--) {
		if (abs(arr[minIndex]) >= abs(arr[step])) {
			minIndex = step;
		}
	}
	int sum = 0;
	for (int step = minIndex; step < n; step++) {
		sum += arr[step];
	}
	cout << "Ответ: кол-во отрицательных равно " << counter << ", а сумма модулей равна " << sum << endl;
}

void _lab14add2task2() {
	int oX, oY;
	cout << "X == ";
	cin >> oX;
	cout << "Y == ";
	cin >> oY;

	int** arr = new int* [oY];
	for (int step = 0; step < oY; step++) {
		arr[step] = new int[oX];
	}
	for (int stepY = 0; stepY < oY; stepY++) {
		for (int stepX = 0; stepX < oX; stepX++) {
			arr[stepY][stepX] = ((rand() % 10) - (rand() % 10));
			cout << arr[stepY][stepX] << "\t";
		}
		cout << endl;
	}
	int columnIndex = -1;
	bool isPlus = true;
	for (int stepX = 0; stepX < oX; stepX++) {
		for (int stepY = 0; stepY < oY; stepY++) {
			if (arr[stepY][stepX] < 0) {
				isPlus = false;
				break;
			}
		}
		if (isPlus) {
			columnIndex = stepX;
			break;
		}
		else {
			isPlus = true;
		}
	}
	if (columnIndex != -1) {
		cout << "Ответ: столбец №" << (columnIndex + 1) << endl;
		if (columnIndex != 0) {
			for (int stepY = 0; stepY < oY; stepY++) {
				arr[stepY][(columnIndex - 1)] = -arr[stepY][(columnIndex - 1)];
			}
		}
		for (int stepY = 0; stepY < oY; stepY++) {
			for (int stepX = 0; stepX < oX; stepX++) {
				cout << arr[stepY][stepX] << "\t";
			}
			cout << endl;
		}
	}
	else {
		cout << "Ответ: такого столбца нету" << endl;
	}
}

lab14add2::lab14add2() {
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	string choice;
	while (choice != "3") {
		cout << "1-Первое задание\n2-Воторое задание\n3-Выход\n";
		cin >> choice;
		if (choice == "1") {
			_lab14add2task1();
		}
		if (choice == "2") {
			_lab14add2task2();
		}
	}
}