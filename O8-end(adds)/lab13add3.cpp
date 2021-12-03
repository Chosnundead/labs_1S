#include "lab13add3.h"
#include <iostream>
#include <conio.h>
#include <ctime>

using namespace std;

lab13add3::lab13add3() {
	setlocale(LC_ALL, "Russian");
	srand(time(0));

	int N;
	cout << "Введите ваше N: ";
	cin >> N;

	int** arr = new int* [N];
	for (int step = 0; step < N; step++) {
		arr[step] = new int[N];
	}

	for (int oY = 0; oY < N; oY++) {
		for (int oX = 0; oX < N; oX++) {
			arr[oY][oX] = ((rand() % 10) - (rand() % 10));
			cout << arr[oY][oX] << "\t";
		}
		cout << endl;
	}

	int temp = 0, counter = 0, maxNumber = -10;
	/*for (int stepOfMain = 0; stepOfMain < N; stepOfMain++) {
		temp += arr[stepOfMain][stepOfMain];
		temp += arr[stepOfMain][(N - 1 - stepOfMain)];
	}*/
	for (int oY = 0; oY < N; oY++) {
		for (int stepOfTop = counter; stepOfTop < (N - counter); stepOfTop++) {
			temp += arr[oY][stepOfTop];
			if (maxNumber < arr[oY][stepOfTop]) {
				maxNumber = arr[oY][stepOfTop];
			}
		}
		if (!((N - (2 * counter)) == 1)) {
			for (int stepOfBottom = counter; stepOfBottom < (N - counter); stepOfBottom++) {
				temp += arr[(N - 1 - oY)][stepOfBottom];
				if (maxNumber < arr[(N - 1 - oY)][stepOfBottom]) {
					maxNumber = arr[(N - 1 - oY)][stepOfBottom];
				}
			}
		}
		counter++;
	}
	cout << "Сумма: " << temp << endl;
	cout << "Максимальное значение: " << maxNumber << endl;
}