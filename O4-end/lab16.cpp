#include "lab16.h"
#include <iostream>
#include <conio.h>
#include <ctime>

using namespace std;

void lab16::_spasiboZaPoiasneniiaKVashimLaboratornimRabotamKotorieNapisaniNaSiANeNaSiPlusPlusIZaZadachiSTrexmernimiDinamicheskimiMassivamiKogdaVMetodichkeNetDajeNormalnogoObiasneniiaObichnogoDinamicheskogoMassivaProsto10Iz10Blyat() {
	int size, number;
	bool isntBreak;

	do {
		cout << "Введите размеры ваших квадратных матриц: ";
		cin >> size;
		cout << "Введите количество ваших квадратных матриц: ";
		cin >> number;
		if ((size < 2) || (number < 1)) {
			system("cls");
			cout << "Вы ввели не корректные значения((size >= 2) && (nummber >= 1))!\n";
			isntBreak = true;
		} else {
			isntBreak = false;
		}
	} while (isntBreak);
	int* sumOfElements = new int[number];

	int*** matrix = new int** [number];
	for (int i = 0; i < number; i++) {
		matrix[i] = new int* [size];
	}
	for (int i = 0; i < number; i++) {
		for (int j = 0; j < size; j++) {
			matrix[i][j] = new int[size];
		}
	}

	srand(time(0));
	for (int i = 0; i < number; i++) {
		cout << "\n\n\n\t\t~~~~~~HERE IS NEW MATRIX~~~~~~\n\n\n";
		for (int j = 0; j < size; j++) {
			for (int k = 0; k < size; k++) {
				matrix[i][j][k] = rand() - rand();
				cout << matrix[i][j][k] << "\t";
			}
			cout << "\n\t\t======666======\n";
		}
	}

	for (int i = 0; i < number; i++) {
		sumOfElements[i] = 0;
	}
	int shiftOy = 0;
	for (int i = 0; i < number; i++) {
		shiftOy = 1;
		for (int j = 0; j < (size - shiftOy); j++) {
			sumOfElements[i] += matrix[i][shiftOy][j];
			shiftOy++;
		}
	}

	int count = 1;
	int result = sumOfElements[0];
	for (int i = 0; i < number; i++) {
		if (result < sumOfElements[i]) {
			result = sumOfElements[i];
			count = i + 1;
		}
	}

	cout << "\n\n\nСамая большая сумма элементов под главной диагональю находится в матрице №" << count << ": " << result << endl;
}

void lab16::_fillMatrix(int** matrix, int* size) {
	srand(time(0));

	for (int i = 0; i < (*size); i++) {
		for (int j = 0; j < (*size); j++) {
			matrix[i][j] = rand() - rand();
			cout << matrix[i][j] << "\t";
		}
		cout << "\n\t\t======666======\n";
	}
}

void lab16::_input(int* size, bool* isntBreak) {
	do {
		cout << "Введите размерность квадратной матрицы: ";
		cin >> (*size);
		if ((*size) < 1) {
			system("cls");
			cout << "Вы ввели неверную размерность матрицы(size >= 1)!\n";
			(*isntBreak) = true;
		}
		else {
			(*isntBreak) = false;
		}
	} while ((*isntBreak));
}

lab16::lab16() {
	_input(&size, &isntBreak);
	
	int** matrix = new int* [size];
	for (int i = 0; i < size; i++) {
		matrix[i] = new int[size];
	}

	_fillMatrix(matrix, &size);

	int temp[1] = { 0 };
	int minimumSum = 0;
	for (int i = 0; i < size; i++) {
		matrix[i][i] += minimumSum;
	}	

	for (int shiftOy = 0; shiftOy < size; shiftOy++) {
		for (int i = 0; i < (size - shiftOy); i++) {
			temp[0] += matrix[(i + shiftOy)][i];
		}
		if (minimumSum > temp[0]) {
			minimumSum = temp[0];
		}
		temp[0] = 0;
	}

	for (int shiftOy = 0; shiftOy < size; shiftOy++) {
		for (int i = (size - 1); i >= (0 + shiftOy); i--) {
			temp[0] += matrix[(i - shiftOy)][i];
		}
		if (minimumSum > temp[0]) {
			minimumSum = temp[0];
		}
		temp[0] = 0;
	}

	cout << "Минимальная сумма элементов диагонали параллельной главной: " << minimumSum << endl;

	_spasiboZaPoiasneniiaKVashimLaboratornimRabotamKotorieNapisaniNaSiANeNaSiPlusPlusIZaZadachiSTrexmernimiDinamicheskimiMassivamiKogdaVMetodichkeNetDajeNormalnogoObiasneniiaObichnogoDinamicheskogoMassivaProsto10Iz10Blyat();
}

lab16::~lab16() {
	cout << "delete \"lab16.h\"\n";
}