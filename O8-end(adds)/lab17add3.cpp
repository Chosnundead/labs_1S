#include "lab17add3.h"
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

string _lab17add3task1(string yourString) {
	string newString = yourString;
	for (int step = 0; step < newString.length(); step++) {
		if (newString[step] == ' ') {
			newString[step] = '\0';
		}
	}
	return newString;
}

lab17add3::lab17add3() {
	setlocale(LC_ALL, "Russian");
	cout << "_lab17add3task1(\"AVE MARIA!\") == " << _lab17add3task1("AVE MARIA!") << endl;
	cout << "_lab17add3task1(\"DEUS VULT! DEUS VULT! DEUS VULT!\") == " << _lab17add3task1("DEUS VULT! DEUS VULT! DEUS VULT!") << endl;
	cout << "_lab17add3task1(\"Abandon hope, all ye who enter here.\") == " << _lab17add3task1("Abandon hope, all ye who enter here.") << endl;
}