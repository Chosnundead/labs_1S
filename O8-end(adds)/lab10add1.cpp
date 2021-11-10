#include "lab10add1.h"
#include <iostream>
#include <conio.h>

using namespace std;

lab10add1::lab10add1() {
	setlocale(LC_ALL, "Russian");
	char number[33];
	int A, n, p;
	cout << "A == ";
	cin >> A;
	cout << "n == ";
	cin >> n;
	cout << "p == ";
	cin >> p;

	_itoa_s(A, number, 2);
	cout << "A == " << number << endl;

	if (A & 3) {
		cout << "Не делиться." << endl;
	}
	else {
		cout << "Делиться." << endl;
	}

	while (n > 0) {
		A = A | (1 << (p + n - 1));
		n--;
	}

	_itoa_s(A, number, 2);
	cout << "A == " << number << endl;
}