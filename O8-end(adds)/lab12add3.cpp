#include "lab12add3.h"
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <string>

using namespace std;

//void _resize(string** arr, int* size) {
//	string* newArr = new string[(*size)];
//	for (int i = 0; i < (*size); i++) {
//		newArr[i] = (*arr)[i];
//	}
//	delete[] * arr;
//	(*arr) = new string[((*size) + 1)];
//	for (int i = 0; i < (*size); i++) {
//		(*arr)[i] = newArr[i];
//	}
//	delete[] newArr;
//	(*size)++;
//}

lab12add3::lab12add3() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);

	string yourString;
	cout << "¬ведите вашу строку: ";
	getline(cin.ignore(), yourString);

	//int size = 0;
	//string* arrOfWords = new string[size];

	struct Words
	{
		int start;
		int end;
		int length;
	};

	Words word;
	Words test;
	bool isSimilar = true;

	for (int step = (yourString.length() - 1); step >= 0; step--) {
		if (!((yourString[step] == ' ') || (yourString[step] == ',') || (yourString[step] == '.') || (yourString[step] == '!') || (yourString[step] == '?'))) {
			word.end = step;
			for (;; step--) {
				if ((yourString[step] == ' ') || (yourString[step] == ',') || (yourString[step] == '.') || (yourString[step] == '!') || (yourString[step] == '?')) {
					word.start = step + 1;
					break;
				}
				if (step == 0) {
					word.start = step;
					break;
				}
			}
			word.length = (word.end - word.start) + 1;
			/*_resize(&arrOfWords, &size);
			for (int stepForWord = word.start; stepForWord <= word.end; stepForWord++) {
				arrOfWords[(size - 1)] += yourString[stepForWord];
			}*/
			for (int testStep = 0; testStep < word.start; testStep++) {
				if (!((yourString[testStep] == ' ') || (yourString[testStep] == ',') || (yourString[testStep] == '.') || (yourString[testStep] == '!') || (yourString[testStep] == '?'))) {
					test.start = testStep;
					for (;; testStep++) {
						if ((yourString[testStep] == ' ') || (yourString[testStep] == ',') || (yourString[testStep] == '.') || (yourString[testStep] == '!') || (yourString[testStep] == '?')) {
							test.end = testStep - 1;
							break;
						}
						if (testStep == (yourString.length() - 1)) {
							test.end = testStep;
							break;
						}
					}
					test.length = (test.end - test.start) + 1;
					if (test.length == word.length) {
						for (int stepOfWord = 0; stepOfWord < word.length; stepOfWord++) {
							if (isSimilar && (yourString[(word.start + stepOfWord)] == yourString[(test.start + stepOfWord)])) {
								isSimilar = true;
							}
							else {
								isSimilar = false;
								break;
							}
						}
						if (isSimilar) {
							for (int stepForDel = test.start; stepForDel <= test.end; stepForDel++) {
								yourString[stepForDel] = '\0';
							}
						}
						else {
							isSimilar = true;
						}
					}
				}
			}
		}
	}
	cout << yourString << endl;
}