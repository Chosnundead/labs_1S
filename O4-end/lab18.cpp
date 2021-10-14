#include "lab18.h"
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include <stdlib.h>

using namespace std;

lab18::lab18() {
	ofstream FileAWrite("fileA.txt", ios::in | ios::trunc);
	ifstream FileARead;
	ofstream FileBWrite("fileB.txt", ios::in | ios::trunc);
	ofstream FileCWrite("fileC.txt", ios::in | ios::trunc);
	string numbersAsString;
	int numberOfNumbers, temp;
	bool isMoreThanOne;
	srand(time(0));

	try {
		cout << "¬ведите кол-во ваших элементов документа: ";
		cin >> numberOfNumbers;
		if (numberOfNumbers < 2) {
			throw 0;
		}

		int* arrayOfNumbers = new int[numberOfNumbers];
		string* numberAsString = new string[numberOfNumbers];

		for (int countOfNumberOfNumbers = 0; countOfNumberOfNumbers < numberOfNumbers; countOfNumberOfNumbers++) {
			arrayOfNumbers[countOfNumberOfNumbers] = (rand() % 10) - (rand() % 10);
			FileAWrite << arrayOfNumbers[countOfNumberOfNumbers] << " ";
		}
		FileAWrite.close();
		
		FileARead.open("fileA.txt", ios::out);
		getline(FileARead, numbersAsString);
		FileARead.close();

		temp = 0;//„исло отвечающее за номер строки с числом
		for (int positionInStringOfNumbers = 0; positionInStringOfNumbers < numbersAsString.length(); positionInStringOfNumbers++) {
			while (numbersAsString[positionInStringOfNumbers] != ' ') {
				numberAsString[temp] += numbersAsString[positionInStringOfNumbers];
				positionInStringOfNumbers++;
			}
			temp++;
		}

		cout << "\t\t\tFor debuging:\nNumbers:\n";
		for (int countOfNumberOfNumbers = 0; countOfNumberOfNumbers < numberOfNumbers; countOfNumberOfNumbers++) {
			arrayOfNumbers[countOfNumberOfNumbers] = atoi(numberAsString[countOfNumberOfNumbers].c_str());
			cout << (countOfNumberOfNumbers + 1) << ") " << arrayOfNumbers[countOfNumberOfNumbers] << endl;
		}

		isMoreThanOne = false;
		temp = 0;
		for (int positionOfNumberInArray = 0; positionOfNumberInArray < numberOfNumbers; positionOfNumberInArray++) {
			for (int numberCheck = 0; numberCheck < numberOfNumbers; numberCheck++) {
				if (arrayOfNumbers[positionOfNumberInArray] == arrayOfNumbers[numberCheck]) {
					temp++;
				}
				if (temp >= 2) {
					isMoreThanOne = true;
					break;
				}
			}
			temp = 0;

			if (isMoreThanOne) {
				FileBWrite << arrayOfNumbers[positionOfNumberInArray] << " ";
			}

			isMoreThanOne = false;
		}

		FileBWrite.close();

		isMoreThanOne = false;
		for (int positionOfNumberInArray = 0; positionOfNumberInArray < numberOfNumbers; positionOfNumberInArray++) {
			for (int numberCheck = positionOfNumberInArray; numberCheck < numberOfNumbers; numberCheck++) {
				if ((arrayOfNumbers[positionOfNumberInArray] == arrayOfNumbers[numberCheck]) && (positionOfNumberInArray != numberCheck)) {
					isMoreThanOne = true;
				}
			}

			if (!(isMoreThanOne)) {
				FileCWrite << arrayOfNumbers[positionOfNumberInArray] << " ";
			}

			isMoreThanOne = false;
		}

		FileCWrite.close();
	} catch (...) {
		cout << "¬ведены неверные данные!\n";
	}
}