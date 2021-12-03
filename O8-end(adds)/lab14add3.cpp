#include "lab14add3.h"
#include <iostream>
#include <conio.h>
#include <string>
#include <ctime>

using namespace std;

void _lab14add3task1() {
	int n;
	cout << "n == ";
	cin >> n;
	int* arr = new int[n];
	for (int step = 0; step < n; step++) {
		arr[step] = ((rand() % 10) - (rand() % 10));
		cout << "arr[" << step << "] == " << arr[step] << endl;
	}
	int maxNumber = arr[(n - 1)];
	for (int step = 0; step < n; step++) {
		if (arr[step] > maxNumber) {
			maxNumber = arr[step];
		}
	}
	int counter = 0;
	for (int step = 0; step < n; step++) {
		if (arr[step] == maxNumber) {
			counter++;
		}
	}
	cout << "Ответ: " << counter << " раз" << endl;
}

void _lab14add3task2() {
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
	int rowIndex = -1;
	bool isPlus = false;
	for (int stepY = 0; stepY < oY; stepY++) {
		for (int stepX = 0; stepX < oX; stepX++) {
			if (arr[stepY][stepX] >= 0) {
				isPlus = true;
				break;
			}
		}
		if (isPlus) {
			rowIndex = stepY;
			break;
		}
	}
	if (rowIndex != -1) {
		cout << "Ответ: строка №" << (rowIndex + 1) << endl;
		if (rowIndex != 0) {
			for (int stepX = 0; stepX < oX; stepX++) {
				arr[(rowIndex - 1)][stepX] = -arr[(rowIndex - 1)][stepX];
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
		cout << "Ответ: такой строки нету" << endl;
	}
}

lab14add3::lab14add3() {
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	string choice;
	while (choice != "3") {
		cout << "1-Первое задание\n2-Воторое задание\n3-Выход\n";
		cin >> choice;
		if (choice == "1") {
			_lab14add3task1();
		}
		if (choice == "2") {
			_lab14add3task2();
		}
	}
}