#include "lab18add1.h"
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include <stdlib.h>
#include <corecrt_wconio.h>

using namespace std;

template <typename T>
T _lab18add1Max(int numberOfArgs, T args, ...) {
	/*if ((typeid(args).name()) == "int") {
		int stepForNext = 1;
	}
	else if ((typeid(args).name()) == "double") {
		int stepForNext = 2;
	}
	else {
		return false;
	}*/
	string check = typeid(args).name();
	T* step = &args;
	T max = (*(step));
	numberOfArgs--;
	while (numberOfArgs != 0) {
		if (check == "int") {
			step += 2;
		}
		else if (check == "double") {
			step++;
		}
		else {
			return false;
		}
		if (max < (*(step))) {
			max = (*(step));
		}
		numberOfArgs--;
	}
	return max;
}

void _lab18add1GeneratorAndOut(int** arr, int size, string text) {
	cout << text << ":\t";
	for (int step = 0; step < size; step++) {
		(*arr)[step] = ((rand() % 100) - (rand() % 100));
		cout << (*arr)[step] << "\t";
	}
	cout << endl;
}

int _lab18add1SizeOfNumbersInString(string text) {
	int size = 0;
	for (int step = 0; step < text.length(); step++) {
		if (text[step] == ' ') {
			size++;
		}
	}
	return size;
}

void _lab18add1ArrCreatorFromString(string text, int size, int** arr) {
	string* arrOfStringNumbers = new string[size];
	int temp = 0;
	for (int step = 0; step < text.length(); step++) {
		if (text[step] != ' ') {
			arrOfStringNumbers[temp] += text[step];
		}
		else {
			temp++;
		}
	}

	for (int step = 0; step < size; step++) {
		(*arr)[step] = atoi(arrOfStringNumbers[step].c_str());
	}
}

lab18add1::lab18add1() {
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	ofstream FileAWrite("lab18add1fileA.txt", ios::in | ios::trunc);
	ifstream FileARead;
	ofstream FileBWrite("lab18add1fileB.txt", ios::in | ios::trunc);
	ifstream FileBRead;
	ofstream FileCWrite("lab18add1fileC.txt", ios::in | ios::trunc);
	ifstream FileCRead;
	ofstream FileDWrite("lab18add1fileD.txt", ios::in | ios::trunc);

	int size;
	cout << "Введите кол-во чисел в ваших файлах: ";
	cin >> size;

	int* arr = new int[size];
	/*cout << "FileA:\t";
	for (int step = 0; step < size; step++) {
		arr[step] = ((rand() % 100) - (rand() % 100));
		cout << arr[step] << "\t";
		FileAWrite << arr[step] << " ";
	}
	cout << endl;*/
	_lab18add1GeneratorAndOut(&arr, size, "FileA");
	for (int step = 0; step < size; step++) {
		FileAWrite << arr[step] << " ";
	}
	FileAWrite.close();
	FileARead.open("lab18add1fileA.txt", ios::out);
	string numbersOfAAsString;
	getline(FileARead, numbersOfAAsString);

	int* arrOfA = new int[_lab18add1SizeOfNumbersInString(numbersOfAAsString)];
	_lab18add1ArrCreatorFromString(numbersOfAAsString, _lab18add1SizeOfNumbersInString(numbersOfAAsString), &(arrOfA));

	_lab18add1GeneratorAndOut(&arr, size, "FileB");
	for (int step = 0; step < size; step++) {
		FileBWrite << arr[step] << " ";
	}
	FileBWrite.close();
	FileBRead.open("lab18add1fileB.txt", ios::out);
	string numbersOfBAsString;
	getline(FileBRead, numbersOfBAsString);

	int* arrOfB = new int[_lab18add1SizeOfNumbersInString(numbersOfBAsString)];
	_lab18add1ArrCreatorFromString(numbersOfBAsString, _lab18add1SizeOfNumbersInString(numbersOfBAsString), &(arrOfB));

	_lab18add1GeneratorAndOut(&arr, size, "FileC");
	for (int step = 0; step < size; step++) {
		FileCWrite << arr[step] << " ";
	}
	FileCWrite.close();
	FileCRead.open("lab18add1fileC.txt", ios::out);
	string numbersOfCAsString;
	getline(FileCRead, numbersOfCAsString);

	int* arrOfC = new int[_lab18add1SizeOfNumbersInString(numbersOfCAsString)];
	_lab18add1ArrCreatorFromString(numbersOfCAsString, _lab18add1SizeOfNumbersInString(numbersOfCAsString), &(arrOfC));

	cout << "FileD:\t";
	FileDWrite << "task1: ";
	for (int step = 0; step < size; step++) {
		FileDWrite << _lab18add1Max(3, arrOfA[step], arrOfB[step], arrOfC[step]) << " ";
		cout << _lab18add1Max(3, arrOfA[step], arrOfB[step], arrOfC[step]) << "\t";
	}
	cout << endl;
	FileDWrite << endl;
	cout << "Программа приостановлена! Можно проверить файлы. Для продолжения нажмите ENTER..." << endl;
	_getwche();
	cout << "FileD:\t";
	FileDWrite << "task2: ";
	for (int step = 0; step < size; step++) {
		FileDWrite << arrOfA[step] << ", " << arrOfB[step] << ", " << arrOfC[step] << ", ";
		cout << arrOfA[step] << "\t" << arrOfB[step] << "\t" << arrOfC[step] << "\t";
	}
	cout << endl;
}