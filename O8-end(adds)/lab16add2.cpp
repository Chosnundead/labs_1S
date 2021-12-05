#include "lab16add2.h"
#include <iostream>
#include <conio.h>
#include <ctime>
#include <typeinfo>

using namespace std;

template <typename T>
T _lab16add2task2(int numberOfArgs, T args, ...) {
	/*if ((typeid(args).name()) == "int") {
		int stepForNext = 1;
	}
	else if ((typeid(args).name()) == "double") {
		int stepForNext = 2;
	}
	else {
		return false;
	}*/
	string check = typeid(args).name();
	T* step = &args;
	T min = (*(step));
	numberOfArgs--;
	while (numberOfArgs != 0) {
		if (check == "int") {
			step += 2;
		}
		else if (check == "double") {
			step++;
		}
		else {
			return false;
		}
		if (min > (*(step))) {
			min = (*(step));
		}
		numberOfArgs--;
	}
	return min;
}

lab16add2::lab16add2() {
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

	bool isMinus = false;
	int columnIndex = -1;
	for (int stepX = 0; stepX < oX; stepX++) {
		for (int stepY = 0; stepY < oY; stepY++) {
			if (arr[stepY][stepX] == 0) {
				isMinus = true;
				columnIndex = stepX;
				break;
			}
		}
		if (isMinus) {
			break;
		}
	}

	if (isMinus) {
		cout << "Столбец №" << (columnIndex + 1) << endl;
	}
	else {
		cout << "Нету нужного столбца\n";
	}

	cout << "\n======666======\n";

	cout << "_lab16add2task2(4, 2, 5, -1212, -3213) == " << _lab16add2task2(4, 2, 5, -1212, -3213) << endl;
	cout << "_lab16add2task2(5, -666, 2121, 1488, 666, 161) == " << _lab16add2task2(5, -666, 2121, 1488, 666, 161) << endl;
}