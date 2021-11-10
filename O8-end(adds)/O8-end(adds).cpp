#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>
#include <stdlib.h>
#include "lab8add1.h"
#include "lab8add2.h"
#include "lab8add3.h"
#include "lab9add1.h"
#include "lab9add2.h"
#include "lab9add3.h"
#include "lab10add1.h"
#include "lab10add2.h"
#include "lab10add3.h"
#include "lab11add1.h"
#include "lab11add2.h"

using namespace std;

void _help() {//доделать в txt
	char temp[255];

	cout << "\t======labs-master:======\n";

	ifstream LabsMasterRead;
	LabsMasterRead.open("LabsMaster.txt", ios::out);
	while (!(LabsMasterRead.eof())) {
		LabsMasterRead.getline(temp, sizeof(temp));
		cout << temp << endl;
	}
}

void _lab8() {
	string lab8;

	cout << "lab8/";
	cin >> lab8;

	if (lab8 == "add1") {
		lab8add1 start;
	}
	else if (lab8 == "add2") {
		lab8add2 start;
	}
	else if (lab8 == "add3") {
		lab8add3 start;
	}
	else {
		cout << "Error!\n";
	}
}

void _lab9() {
	string lab9;

	cout << "lab9/";
	cin >> lab9;

	if (lab9 == "add1") {
		lab9add1 start;
	}
	else if (lab9 == "add2") {
		lab9add2 start;
	}
	else if (lab9 == "add3") {
		lab9add3 start;
	}
	else {
		cout << "Error!\n";
	}
}

void _lab10() {
	string lab10;

	cout << "lab10/";
	cin >> lab10;

	if (lab10 == "add1") {
		lab10add1 start;
	}
	else if (lab10 == "add2") {
		lab10add2 start;
	}
	else if (lab10 == "add3") {
		lab10add3 start;
	}
	else {
		cout << "Error!\n";
	}
}

void _lab11() {
	string lab11;

	cout << "lab11/";
	cin >> lab11;

	if (lab11 == "add1") {
		lab11add1 start;
	}
	else if (lab11 == "add2") {
		lab11add2 start;
	}
	else if (lab11 == "add3") {
		lab10add3 start;//доделать
	}
	else {
		cout << "Error!\n";
	}
}

int main() {
	string input;

	while (true) {
		cin >> input;

		if (input == "help") {
			_help();
		}
		else if (input == "exit") {
			break;
		}
		else if (input == "clear") {
			system("cls");
		}
		else if (input == "lab8") {
			_lab8();
		}
		else if (input == "lab9") {
			_lab9();
		}
		else if (input == "lab10") {
			_lab10();
		}
		else if (input == "lab11") {
			_lab11();
		}
		else {
			cout << "Error!\n";
		}
	}

	return 0;
}