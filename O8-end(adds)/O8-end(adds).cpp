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
#include "lab11add3.h"
#include "lab12add1.h"
#include "lab12add2.h"
#include "lab12add3.h"
#include "lab13add1.h"
#include "lab13add2.h"
#include "lab13add3.h"
#include "lab14add1.h"
#include "lab14add2.h"
#include "lab14add3.h"
#include "lab16add1.h"
#include "lab16add2.h"
#include "lab16add3.h"
#include "lab17add1.h"
#include "lab17add2.h"
#include "lab17add3.h"

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
		lab11add3 start;
	}
	else {
		cout << "Error!\n";
	}
}

void _lab12() {
	string lab12;

	cout << "lab12/";
	cin >> lab12;

	if (lab12 == "add1") {
		lab12add1 start;
	}
	else if (lab12 == "add2") {
		lab12add2 start;
	}
	else if (lab12 == "add3") {
		lab12add3 start;
	}
	else {
		cout << "Error!\n";
	}
}

void _lab13() {
	string lab13;

	cout << "lab13/";
	cin >> lab13;

	if (lab13 == "add1") {
		lab13add1 start;
	}
	else if (lab13 == "add2") {
		lab13add2 start;
	}
	else if (lab13 == "add3") {
		lab13add3 start;
	}
	else {
		cout << "Error!\n";
	}
}

void _lab14() {
	string lab14;

	cout << "lab14/";
	cin >> lab14;

	if (lab14 == "add1") {
		lab14add1 start;
	}
	else if (lab14 == "add2") {
		lab14add2 start;
	}
	else if (lab14 == "add3") {
		lab14add3 start;
	}
	else {
		cout << "Error!\n";
	}
}

void _lab16() {
	string lab16;

	cout << "lab16/";
	cin >> lab16;

	if (lab16 == "add1") {
		lab16add1 start;
	}
	else if (lab16 == "add2") {
		lab16add2 start;
	}
	else if (lab16 == "add3") {
		lab16add3 start;
	}
	else {
		cout << "Error!\n";
	}
}

void _lab17() {
	string lab17;

	cout << "lab17/";
	cin >> lab17;

	if (lab17 == "add1") {
		lab17add1 start;
	}
	else if (lab17 == "add2") {
		lab17add2 start;
	}
	else if (lab17 == "add3") {
		lab17add3 start;
	}
	else {
		cout << "Error!\n";
	}
}

void _lab18() {
	string lab18;

	cout << "lab18/";
	cin >> lab18;

	if (lab18 == "add1") {
		lab17add1 start;
	}
	else if (lab18 == "add2") {
		lab17add2 start;
	}
	else if (lab18 == "add3") {
		lab17add3 start;
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
		else if (input == "lab12") {
			_lab12();
		}
		else if (input == "lab13") {
			_lab13();
		}
		else if (input == "lab14") {
			_lab14();
		}
		else if (input == "lab16") {
			_lab16();
		}
		else if (input == "lab17") {
			_lab17();
		}
		else if (input == "lab18") {
			_lab18();
		}
		else {
			cout << "Error!\n";
		}
	}

	return 0;
}