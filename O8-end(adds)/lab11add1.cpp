#include "lab11add1.h"
#include <iostream>
#include <conio.h>
#include <ctime>

using namespace std;

lab11add1::lab11add1() {
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	int sizeOfArr, k;
	cout << "k == ";
	cin >> k;
	cout << "¬ведите размер массива: ";
	cin >> sizeOfArr;
	int* arr = new int[sizeOfArr];
	for (int stepOfArr = 0; stepOfArr < sizeOfArr; stepOfArr++) {
		arr[stepOfArr] = (rand() % 100) - (rand() % 100);
		cout << "arr[" << stepOfArr << "] == " << arr[stepOfArr] << endl;
	}
	for (int stepOfArr = 0; stepOfArr < sizeOfArr; stepOfArr++) {
		if (k == arr[stepOfArr]) {
			cout << "arr[" << stepOfArr << "] == k" << endl;
		}
		else if (k > arr[stepOfArr]) {
			cout << "arr[" << stepOfArr << "] < k" << endl;
		}
		else {
			cout << "arr[" << stepOfArr << "] > k" << endl;
		}
	}
}