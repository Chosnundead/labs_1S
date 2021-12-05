#include "lab17add1.h"
#include <iostream>
#include <conio.h>
#include <typeinfo>

using namespace std;

template <typename T>
T _lab17add1task1(int numberOfArgs, T args, ...) {
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

lab17add1::lab17add1() {
	setlocale(LC_ALL, "Russian");
	cout << "_lab17add1task1(3, 32.5, -225.7, 155.3) == " << _lab17add1task1(3, 32.5, -225.7, 155.3) << endl;
	cout << "_lab17add1task1(6, -666, 2121, 1488, 666, 161, -999999) == " << _lab17add1task1(6, -666, 2121, 1488, 666, 161, -999999) << endl;
	cout << "_lab17add1task1(2, 2.22, 2.21) == " << _lab17add1task1(2, 2.22, 2.21) << endl;
}