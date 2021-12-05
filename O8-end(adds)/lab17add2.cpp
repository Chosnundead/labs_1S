#include "lab17add2.h"
#include <iostream>
#include <conio.h>
#include <typeinfo>

using namespace std;

template <typename T>
T _lab17add2task1(int numberOfArgs, T args, ...) {
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

lab17add2::lab17add2() {
	setlocale(LC_ALL, "Russian");
	cout << "_lab17add2task1(4, 21, 5, 2, 3) == " << _lab17add2task1(4, 21, 5, 2, 3) << endl;
	cout << "_lab17add2task1(2, 1, 0) == " << _lab17add2task1(2, 1, 0) << endl;
	cout << "_lab17add2task1(4, -666, 0, -666, 161) == " << _lab17add2task1(4, -666, 0, -666, 161) << endl;
}