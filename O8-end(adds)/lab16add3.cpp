#include "lab16add3.h"
#include <iostream>
#include <conio.h>
#include <string>
#include <ctime>

using namespace std;

string _lab16add3task2(string yourString) {
	string newString = yourString;
	for (int step = 0; step < newString.length(); step++) {
		if (newString[step] == ' ') {
			newString[step] = '\0';
		}
	}
	return newString;
}

lab16add3::lab16add3() {
	setlocale(LC_ALL, "Russian");
	srand(time(0));

	int oX, oY;
	cout << "X == ";
	cin >> oX;
	cout << "Y == ";
	cin >> oY;

	int** arr = new int* [oY];
	for (int stepY = 0; stepY < oY; stepY++) {
		arr[stepY] = new int[oX];
	}

	for (int stepY = 0; stepY < oY; stepY++) {
		for (int stepX = 0; stepX < oX; stepX++) {
			arr[stepY][stepX] = ((rand() % 10) - (rand() % 10));
			cout << arr[stepY][stepX] << "\t";
		}
		cout << endl;
	}
	cout << "\n======666======\n";

	bool isAllPlus = true;
	int columnIndex = -1;
	for (int stepX = 0; stepX < oX; stepX++) {
		isAllPlus = true;
		for (int stepY = 0; ((stepY < oY) && isAllPlus); stepY++) {
			if (arr[stepY][stepX] < 0) {
				isAllPlus = false;
				break;
			}
		}
		if (isAllPlus) {
			columnIndex = stepX;
			break;
		}
	}
	if (isAllPlus) {
		if (columnIndex > 0) {
			for (int stepY = 0; ((stepY < oY) && isAllPlus); stepY++) {
				arr[stepY][(columnIndex - 1)] = -arr[stepY][(columnIndex - 1)];
			}
		}
		for (int stepY = 0; stepY < oY; stepY++) {
			for (int stepX = 0; stepX < oX; stepX++) {
				cout << arr[stepY][stepX] << "\t";
			}
			cout << endl;
		}
		cout << "\n======666======\n";
		cout << "Столбец №" << (columnIndex + 1) << endl;
	}
	else {
		cout << "Нету такого столбца!\n" << endl;
	}

	cout << "\n======666======\n";

	cout << "_lab16add3task2(\" fhurf ruf rufrhf rfurufhr    fhfh hf\") == " << _lab16add3task2(" fhurf ruf rufrhf rfurufhr    fhfh hf") << endl;
	cout << "_lab16add3task2(\"            i             i            i\") == " << _lab16add3task2("            i             i            i") << endl;
}