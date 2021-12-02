#include "lab12add1.h"
#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

lab12add1::lab12add1() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	string yourString, last;
	cout << "Ваше окончание: ";
	getline(cin.ignore(), last);
	cout << "Введите вашу строку: ";
	getline(cin, yourString);

	int counter = 0, temp;
	bool isCorrect = true;
	for (int i = (yourString.length() - 1); i >= 0; i--) {
		if ((yourString[i] == ' ') || (yourString[i] == ',') || (yourString[i] == '.') || (yourString[i] == '!') || (yourString[i] == '?')) {
			i--;
		}
		else {
			temp = i;
			for (int j = (last.length() - 1); ((j >= 0) && isCorrect); j--) {
				if ((yourString[i] == ' ') || (yourString[i] == ',') || (yourString[i] == '.') || (yourString[i] == '!') || (yourString[i] == '?')) {
					break;
				}
				if (yourString[i] == last[j]) {
					isCorrect = true;
				}
				else {
					isCorrect = false;
				}
				i--;
			}
			if (isCorrect) {
				for (int k = temp;; k--) {
					if ((yourString[k] == ' ') || (yourString[k] == ',') || (yourString[k] == '.') || (yourString[k] == '!') || (yourString[k] == '?')) {
						k++;
						cout << counter << " : ";
						for (int word = k; word <= temp; word++) {
							cout << yourString[word];
						}
						cout << endl;
						counter++;
						break;
					}
					if (k == 0) {
						cout << counter << " : ";
						for (int word = k; word <= temp; word++) {
							cout << yourString[word];
						}
						cout << endl;
						counter++;
						break;
					}
				}
			}
			else {
				for (; i >= 0; i--) {
					if ((yourString[i] == ' ') || (yourString[i] == ',') || (yourString[i] == '.') || (yourString[i] == '!') || (yourString[i] == '?')) {
						break;
					}
				}
			}
			isCorrect = true;
		}
	}
}