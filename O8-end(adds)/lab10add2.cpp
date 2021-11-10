#include "lab10add2.h"
#include <iostream>
#include <conio.h>

using namespace std;

lab10add2::lab10add2() {
	int A, B, nm, p, q;
	int temp[3] = { 0, 0, 0 };
	char number[33];
	cout << "A == ";
	cin >> A;
	cout << "B == ";
	cin >> B;
	cout << "nm == ";
	cin >> nm;
	cout << "p == ";
	cin >> p;
	cout << "q == ";
	cin >> q;

	_itoa_s(A, number, 2);
	cout << "A == " << number << endl;
	_itoa_s(B, number, 2);
	cout << "B == " << number << endl;
	for (int stepOfNumber = 5; stepOfNumber < (4 + 5); stepOfNumber++) {
		temp[0] += ((A & (1 << stepOfNumber)) >> 5);
	}
	for (int stepOfNumber = 0; stepOfNumber < 5; stepOfNumber++) {
		temp[1] += (A & (1 << stepOfNumber));
	}
	A >>= 9;
	A <<= 5;
	A = (temp[1] | A);
	B <<= 4;
	B = (temp[0] | B);
	_itoa_s(A, number, 2);
	cout << "A == " << number << endl;
	_itoa_s(B, number, 2);
	cout << "B == " << number << endl;

	temp[0] = 0;
	temp[1] = 0;
	for (int stepOfNumber = 0; stepOfNumber < p; stepOfNumber++) {
		temp[0] += (A & (1 << stepOfNumber));
	}
	A >>= p;
	for (int stepOfNumber = 0; stepOfNumber < nm; stepOfNumber++) {
		temp[1] += (A & (1 << stepOfNumber));
		A = (A | (1 << stepOfNumber));
	}
	A <<= p;
	A = (A | temp[0]);
	temp[0] = 0;
	for (int stepOfNumber = 0; stepOfNumber < q; stepOfNumber++) {
		temp[0] += (B & (1 << stepOfNumber));
	}
	B >>= (q + nm);
	B <<= nm;
	B = (B | temp[1]);
	B <<= q;
	B = (B | temp[0]);
	_itoa_s(A, number, 2);
	cout << "A == " << number << endl;
	_itoa_s(B, number, 2);
	cout << "B == " << number << endl;
}