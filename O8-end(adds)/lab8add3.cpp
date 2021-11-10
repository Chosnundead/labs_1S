#include "lab8add3.h"
#include <iostream>

using namespace std;

lab8add3::lab8add3() {
	setlocale(LC_ALL, "Russian");
	double a = 3, b = 6, n = 200, e = 1e-4;

	double temp[6] = { 0, 0, 0, 0, 0, 0 };
	temp[0] = (b - a) / n;//h
	temp[1] = a;//x
	temp[2] = 0;//z
	do {
		temp[2] += temp[0] * ((pow(temp[1], 3) + 3) + (pow((temp[1] + temp[0]), 3) + 3)) / 2;
		temp[1] += temp[0];
	} while (!(temp[1] > (b - temp[0])));
	cout << "Метод трапеций: " << temp[2] << endl;

	temp[0] = (b - a) / (2 * n);//h
	temp[1] = a + 2 * temp[0];//x
	temp[2] = 0;//s1
	temp[3] = 0;//s2
	temp[4] = 1;//i
	do {
		temp[3] += (pow(temp[1], 3) + 3);
		temp[1] += temp[0];
		temp[2] += (pow(temp[1], 3) + 3);
		temp[1] += temp[0];
		temp[4]++;
	} while (temp[4] < n);
	temp[5] = (temp[0] / 3) * ((pow(a, 3) + 3) + (4 * (pow((temp[0] + a), 3) + 3)) + (4 * temp[2]) + (2 * temp[3]) + (pow(b, 3) + 3));//z
	cout << "Метод парабол: " << temp[5] << endl;

	if (((pow(a, 3) + (3 * a) - 1) * (6 * a)) > 0) {
		temp[0] = a;//x1
	}
	else {
		temp[0] = b;//x1
	}
	do {
		temp[1] = temp[0];//x
		temp[0] = temp[1] - ((pow(temp[1], 3) + (3 * temp[1]) - 1) / ((3 * (pow(temp[1], 2))) + 3));
	} while (!(abs(temp[0] - temp[1]) > e));
	cout << "Метод касательных: " << temp[0] << endl;

	do {
		temp[0] = (a + b) / 2;//x
		if (((pow(temp[0], 3) + (3 * temp[0]) - 1) * (pow(a, 3) + (3 * a) - 1)) <= 0) {
			b = temp[0];
		}
		else {
			a = temp[0];
		}
	} while (abs(a - b) > (2 * e));
	cout << "Метод дихотомии: " << temp[0] << endl;
}