#include "lab18add2.h"
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include <stdlib.h>

using namespace std;

lab18add2::lab18add2() {
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	ofstream FileAWrite("lab18add2fileA.txt", ios::in | ios::trunc);
	ifstream FileARead;
	ofstream FileBWrite("lab18add2fileB.txt", ios::in | ios::trunc);
	ifstream FileBRead;
	ofstream FileCWrite("lab18add2fileC.txt", ios::in | ios::trunc);

	int oX[2], oY[2];
	cout << "X1 == ";
	cin >> oX[0];
	cout << "Y1 == ";
	cin >> oY[0];

	int*** arr = new int** [2];
	arr[0] = new int* [oY[0]];
	for (int stepY = 0; stepY < oY[0]; stepY++) {
		arr[0][stepY] = new int[oX[0]];
	}

	for (int stepY = 0; stepY < oY[0]; stepY++) {
		for (int stepX = 0; stepX < oX[0]; stepX++) {
			arr[0][stepY][stepX] = ((rand() % 10) - (rand() % 10));
			cout << arr[0][stepY][stepX] << "\t";
		}
		cout << endl;
	}
	cout << "\n======666======\n";

	FileAWrite << oX[0] << " " << oY[0] << " " << endl;
	for (int stepY = 0; stepY < oY[0]; stepY++) {
		for (int stepX = 0; stepX < oX[0]; stepX++) {
			FileAWrite << arr[0][stepY][stepX] << " ";
		}
		FileAWrite << endl;
	}

	FileAWrite.close();

	cout << "X2 == ";
	cin >> oX[1];
	cout << "Y2 == ";
	cin >> oY[1];

	arr[1] = new int* [oY[1]];
	for (int stepY = 0; stepY < oY[1]; stepY++) {
		arr[1][stepY] = new int[oX[1]];
	}

	for (int stepY = 0; stepY < oY[1]; stepY++) {
		for (int stepX = 0; stepX < oX[1]; stepX++) {
			arr[1][stepY][stepX] = ((rand() % 10) - (rand() % 10));
			cout << arr[1][stepY][stepX] << "\t";
		}
		cout << endl;
	}
	cout << "\n======666======\n";

	FileBWrite << oX[1] << " " << oY[1] << " " << endl;
	for (int stepY = 0; stepY < oY[1]; stepY++) {
		for (int stepX = 0; stepX < oX[1]; stepX++) {
			FileBWrite << arr[1][stepY][stepX] << " ";
		}
		FileBWrite << endl;
	}

	FileBWrite.close();

	FileARead.open("lab18add2fileA.txt", ios::out);
	FileBRead.open("lab18add2fileB.txt", ios::out);

	struct Matrix
	{
		int oX;
		int oY;
	};

	Matrix matrixA;
	string fullInfoA;
	getline(FileARead, fullInfoA);
	string* infoA = new string[2];

	int temp[2] = { 0, 0 };
	for (int step = 0; step < fullInfoA.length(); step++) {
		if (fullInfoA[step] != ' ') {
			infoA[temp[0]] += fullInfoA[step];
		}
		else {
			temp[0]++;
		}
	}
	matrixA.oX = atoi(infoA[0].c_str());
	matrixA.oY = atoi(infoA[1].c_str());

	Matrix matrixB;
	string fullInfoB;
	getline(FileBRead, fullInfoB);
	string* infoB = new string[2];

	temp[0] = 0;
	for (int step = 0; step < fullInfoB.length(); step++) {
		if (fullInfoB[step] != ' ') {
			infoB[temp[0]] += fullInfoB[step];
		}
		else {
			temp[0]++;
		}
	}
	matrixB.oX = atoi(infoB[0].c_str());
	matrixB.oY = atoi(infoB[1].c_str());

	//Условия
	if (matrixA.oX == matrixB.oY) {
		int*** matrix = new int** [2];
		string*** matrixAsString = new string * *[2];
		string fullMatrixAsString;
		for (int numberOfMatrix = 0; numberOfMatrix < 2; numberOfMatrix++) {
			if (numberOfMatrix == 0) {
				matrix[numberOfMatrix] = new int* [matrixA.oY];
				matrixAsString[numberOfMatrix] = new string * [matrixA.oY];
				for (int stepYOfA = 0; stepYOfA < matrixA.oY; stepYOfA++) {
					matrix[numberOfMatrix][stepYOfA] = new int[matrixA.oX];
					matrixAsString[numberOfMatrix][stepYOfA] = new string[matrixA.oX];
				}
			}
			if (numberOfMatrix == 1) {
				matrix[numberOfMatrix] = new int* [matrixB.oY];
				matrixAsString[numberOfMatrix] = new string * [matrixB.oY];
				for (int stepYOfB = 0; stepYOfB < matrixB.oY; stepYOfB++) {
					matrix[numberOfMatrix][stepYOfB] = new int[matrixB.oX];
					matrixAsString[numberOfMatrix][stepYOfB] = new string[matrixB.oX];
				}
			}
		}

		temp[0] = 0;
		while (getline(FileARead, fullMatrixAsString)) {
			for (int step = 0; step < fullMatrixAsString.length(); step++) {
				if (fullMatrixAsString[step] != ' ') {
					matrixAsString[0][temp[0]][temp[1]] += fullMatrixAsString[step];
				}
				else {
					temp[1]++;
				}
			}
			temp[1] = 0;
			temp[0]++;
		}
		temp[0] = 0;
		while (getline(FileBRead, fullMatrixAsString)) {
			for (int step = 0; step < fullMatrixAsString.length(); step++) {
				if (fullMatrixAsString[step] != ' ') {
					matrixAsString[1][temp[0]][temp[1]] += fullMatrixAsString[step];
				}
				else {
					temp[1]++;
				}
			}
			temp[1] = 0;
			temp[0]++;
		}

		for (int numberOfMatrix = 0; numberOfMatrix < 2; numberOfMatrix++) {
			if (numberOfMatrix == 0) {
				for (int stepYOfA = 0; stepYOfA < matrixA.oY; stepYOfA++) {
					for (int stepXOfA = 0; stepXOfA < matrixA.oX; stepXOfA++) {
						matrix[numberOfMatrix][stepYOfA][stepXOfA] = atoi(matrixAsString[numberOfMatrix][stepYOfA][stepXOfA].c_str());
					}
				}
			}
			if (numberOfMatrix == 1) {
				for (int stepYOfB = 0; stepYOfB < matrixB.oY; stepYOfB++) {
					for (int stepXOfB = 0; stepXOfB < matrixB.oX; stepXOfB++) {
						matrix[numberOfMatrix][stepYOfB][stepXOfB] = atoi(matrixAsString[numberOfMatrix][stepYOfB][stepXOfB].c_str());
					}
				}
			}
		}
		int** resultMatrix = new int* [matrixA.oY];
		for (int step = 0; step < matrixA.oY; step++) {
			resultMatrix[step] = new int[matrixB.oX];
		}
		for (int stepY = 0; stepY < matrixA.oY; stepY++) {
			for (int stepX = 0; stepX < matrixB.oX; stepX++) {
				resultMatrix[stepY][stepX] = 0;
			}
		}
		for (int stepY = 0; stepY < matrixA.oY; stepY++) {
			for (int stepX = 0; stepX < matrixB.oX; stepX++) {
				for (int stepForResult = 0; stepForResult < matrixB.oY; stepForResult++) {
					resultMatrix[stepY][stepX] += (matrix[0][stepY][stepForResult] * matrix[1][stepForResult][stepX]);
				}
			}
		}
		for (int stepY = 0; stepY < matrixA.oY; stepY++) {
			for (int stepX = 0; stepX < matrixB.oX; stepX++) {
				cout << resultMatrix[stepY][stepX] << "\t";
			}
			cout << endl;
		}
		cout << "\n======666======\n";
		for (int stepY = 0; stepY < matrixA.oY; stepY++) {
			for (int stepX = 0; stepX < matrixB.oX; stepX++) {
				FileCWrite << resultMatrix[stepY][stepX] << " ";
			}
			FileCWrite << endl;
		}
	}
	else {
		cout << "Невозможно перемножить!\n";
		FileCWrite << "Невозможно перемножить!";
	}
	ofstream FileFWrite("lab18add2fileF.txt", ios::in | ios::trunc);
	int sizeOfNumbers, k;
	cout << "Введите кол-во ваших чисел: ";
	cin >> sizeOfNumbers;
	cout << "k == ";
	cin >> k;
	int* arrOfNumbers = new int[sizeOfNumbers];
	for (int step = 0; step < sizeOfNumbers; step++) {
		arrOfNumbers[step] = ((rand() % 100) - (rand() % 100));
		cout << "arrOfNumbers[" << step << "] == " << arrOfNumbers[step] << endl;
		FileFWrite << arrOfNumbers[step] << " ";
	}
	cout << "\n======666======\n";
	FileFWrite.close();
	ifstream FileFRead("lab18add2fileF.txt", ios::out);
	string stringOfNumbers;
	getline(FileFRead, stringOfNumbers);
	string* stringOfNumbersByNumber = new string[sizeOfNumbers];
	temp[0] = 0;
	for (int step = 0; step < stringOfNumbers.length(); step++) {
		if (stringOfNumbers[step] != ' ') {
			stringOfNumbersByNumber[temp[0]] += stringOfNumbers[step];
		}
		else {
			temp[0]++;
		}
	}
	ofstream FileGWrite("lab18add2fileG.txt", ios::in | ios::trunc);
	int* finalArrOfNumbers = new int[sizeOfNumbers];
	for (int step = 0; step < sizeOfNumbers; step++) {
		finalArrOfNumbers[step] = atoi(stringOfNumbersByNumber[step].c_str());
		if (!(finalArrOfNumbers[step] % k)) {
			FileGWrite << finalArrOfNumbers[step] << " ";
			cout << "arrOfNumbers[" << step << "] == " << arrOfNumbers[step] << endl;
		}
	}
	FileGWrite.close();
}