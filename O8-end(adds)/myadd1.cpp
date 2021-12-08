#include "myadd1.h"
#include <iostream>
#include <conio.h>

using namespace std;

class Task1 {
public:
	Task1() {
		cout << "Создан класс Task1\n";
	}
	~Task1() {
		cout << "Удалён класс Task1\n";
	}
	virtual void _task() {
		int A, counter = 0;
		char show[33];
		cout << "A == ";
		cin >> A;

		_itoa_s(A, show, 2);
		cout << "A == " << show << endl;
		for (int step = 3; step <= 13; step++) {
			if (!(A & (1 << step))) {
				counter++;
			}
		}
		cout << "Нулей: " << counter << endl;
	}
};

class Task2 : public Task1 {
public:
	Task2() {
		cout << "Создан класс Task2\n";
	}
	~Task2() {
		cout << "Удалён класс Task2\n";
	}
	virtual void _task() {
		int A, B, nm, p, q;
		char show[33];

		cout << "A == ";
		cin >> A;
		_itoa_s(A, show, 2);
		cout << "A == " << show << endl;

		cout << "B == ";
		cin >> B;
		_itoa_s(B, show, 2);
		cout << "B == " << show << endl;

		cout << "nm == ";
		cin >> nm;
		cout << "p == ";
		cin >> p;
		cout << "q == ";
		cin >> q;

		struct Temp
		{
			int tempA = 0;
			int tempB = 0;
			int copyToB = 0;
		};
		Temp temp;

		for (int step = 0; step < p; step++) {
			temp.tempA += (A & (1 << step));
		}
		A >>= p;
		for (int step = 0; step < nm; step++) {
			temp.copyToB += (A & (1 << step));
		}
		A >>= nm;
		A <<= nm;
		for (int step = 0; step < nm; step++) {
			A |= ((1 << step) & (~(temp.copyToB)));
		}
		A <<= p;
		for (int step = 0; step < p; step++) {
			A |= ((1 << step) & (temp.tempA));
		}

		_itoa_s(A, show, 2);
		cout << "A == " << show << endl;

		for (int step = 0; step < q; step++) {
			temp.tempB += (B & (1 << step));
		}
		B >>= q;
		B >>= nm;
		B <<= nm;
		for (int step = 0; step < nm; step++) {
			B |= ((1 << step) & (~(temp.copyToB)));
		}
		B <<= q;
		for (int step = 0; step < q; step++) {
			B |= ((1 << step) & (temp.tempB));
		}

		_itoa_s(B, show, 2);
		cout << "B == " << show << endl;
	}
	Task2 operator+(Task1& obj) {
		Task2 result;

		obj._task();
		cout << "\n======666======\n";

		this->_task();
		cout << "\n======666======\n";

		system("pause");
		return result;
	}
};

void HELL() {
	setlocale(LC_ALL, "Russian");

	Task1 Task1_start;
	Task2 Task2_start;

	Task2 result = Task2_start + Task1_start;
}

myadd1::myadd1() {
	HELL();
}