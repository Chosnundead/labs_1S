#include "lab10add3.h"
#include <iostream>
#include <conio.h>

using namespace std;

lab10add3::lab10add3() {
	setlocale(LC_ALL, "Russian");
	int A, B, n, m;
	int temp[2] = { 0, 0 };
	char number[33];

	cout << "A == ";
	cin >> A;
	cout << "B == ";
	cin >> B;
	cout << "n == ";
	cin >> n;
	cout << "m == ";
	cin >> m;
	_itoa_s(A, number, 2);
	cout << "A == " << number << endl;
	_itoa_s(B, number, 2);
	cout << "B == " << number << endl;

	for (int stepOfNumber = 0; stepOfNumber < 33; stepOfNumber++) {
		if ((!(stepOfNumber % 3)) && (stepOfNumber != 0)) {
			A &= (~(1 << (stepOfNumber - 1)));
		}
	}
	_itoa_s(A, number, 2);
	cout << "A == " << number << endl;

	for (int stepOfNumber = 0; stepOfNumber < n; stepOfNumber++) {
		temp[0] += (A & (1 << stepOfNumber));
	}
	A >>= n;
	for (int stepOfNumber = 0; stepOfNumber < 3; stepOfNumber++) {
		temp[1] += (A & (1 << stepOfNumber));
	}
	A >>= 3;
	A <<= n;
	A = (A | temp[0]);
	temp[0] = 0;
	for (int stepOfNumber = 0; stepOfNumber < m; stepOfNumber++) {
		temp[0] += (B & (1 << stepOfNumber));
	}
	B >>= (m + 3);
	B <<= 3;
	B = (B | temp[1]);
	B <<= m;
	B = (B | temp[0]);
	_itoa_s(A, number, 2);
	cout << "A == " << number << endl;
	_itoa_s(B, number, 2);
	cout << "B == " << number << endl;
}