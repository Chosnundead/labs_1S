#include "lab12add2.h"
#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

lab12add2::lab12add2() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);

	string yourString;

	cout << "Введите ваше предложение: ";
	getline(cin.ignore(), yourString);

	struct Sentence
	{
		int start;
		int end;
		int counter;
	};

	Sentence word;
	Sentence test;
	word.counter = 0;
	test.counter = 0;

	for (int step = (yourString.length() - 1); step >= 0; step--) {
		if (!((yourString[step] == ' ') || (yourString[step] == ',') || (yourString[step] == '.') || (yourString[step] == '!') || (yourString[step] == '?'))) {
			test.end = step;
			for (;; step--) {
				if ((yourString[step] == 'A') || (yourString[step] == 'a') || (yourString[step] == 'E') || (yourString[step] == 'e') || (yourString[step] == 'I') || (yourString[step] == 'i') || (yourString[step] == 'O') || (yourString[step] == 'o') || (yourString[step] == 'U') || (yourString[step] == 'u')) {
					test.counter++;
				}
				if ((yourString[step] == ' ') || (yourString[step] == ',') || (yourString[step] == '.') || (yourString[step] == '!') || (yourString[step] == '?')) {
					test.start = step + 1;
					break;
				}
				if (step == 0) {
					test.start = step;
					break;
				}
			}
		}
		if (word.counter < test.counter) {
			word.counter = test.counter;
			word.end = test.end;
			word.start = test.start;
		}
		test.counter = 0;
	}

	if (word.counter == 0) {
		cout << "Нужных слов нету!\n";
	}
	else {
		for (int step = word.start; step <= word.end; step++) {
			cout << yourString[step];
		}
		cout << endl;
	}
}