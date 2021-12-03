#include "lab14add1.h"
#include <iostream>
#include <conio.h>
#include <string>
#include <ctime>

using namespace std;

void _lab14add1task1() {
	int n;
	cout << "n == ";
	cin >> n;
	int* arr = new int[n];
	int round = 0;
	for (int step = 0; step < n; step++) {
		arr[step] = ((rand() % 10) - (rand() % 10));
		cout << "arr[" << step << "] == " << arr[step] << endl;
		round += arr[step];
	}
	round /= n;
	int counter = 0;
	for (int step = 0; step < n; step++) {
		if (arr[step] > round) {
			counter++;
		}
	}
	cout << "Ответ: " << counter << endl;
}

void _lab14add1task2() {
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

	bool isZero = false;
	int counter = 0;
	for (int stepY = 0; stepY < oY; stepY++) {
		for (int stepX = 0; stepX < oX; stepX++) {
			if (arr[stepY][stepX] == 0) {
				isZero = true;
			}
		}
		if (!(isZero)) {
			counter++;
		}
		isZero = false;
	}

	cout << "Ответ: " << counter << "стр.; ";

	int countOfMaxNumber = 0;
	int maxNumber = -666;
	int counterOfNumber = 0;
	int temp = 666;
	int minNumber = 666;
	for (int stepY = 0; stepY < oY; stepY++) {
		for (int stepX = 0; stepX < oX; stepX++) {
			if (arr[stepY][stepX] < minNumber) {
				minNumber = arr[stepY][stepX];
			}
		}
	}
	while (true) {
		for (int stepY = 0; stepY < oY; stepY++) {
			for (int stepX = 0; stepX < oX; stepX++) {
				if ((arr[stepY][stepX] < temp) && (arr[stepY][stepX] > maxNumber)) {
					maxNumber = arr[stepY][stepX];
				}
			}
		}
		for (int stepY = 0; stepY < oY; stepY++) {
			for (int stepX = 0; stepX < oX; stepX++) {
				if (arr[stepY][stepX] == maxNumber) {
					countOfMaxNumber++;
				}
			}
		}
		if (countOfMaxNumber >= 2) {
			cout << "max == " << maxNumber << endl;
			break;
		}
		if (maxNumber == minNumber) {
			cout << "Нету такого max" << endl;
			break;
		}
		temp = maxNumber;
		maxNumber = -666;
		countOfMaxNumber = 0;
	}
}

lab14add1::lab14add1() {
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	string choice;
	while (choice != "3") {
		cout << "1-Первое задание\n2-Воторое задание\n3-Выход\n";
		cin >> choice;
		if (choice == "1") {
			_lab14add1task1();
		}
		if (choice == "2") {
			_lab14add1task2();
		}
	}
}