#include "lab18add3.h"
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include <stdlib.h>

using namespace std;

lab18add3::lab18add3() {
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	ofstream FileAWrite("lab18add3fileA.txt", ios::in | ios::trunc);
	ofstream FileBWrite("lab18add3fileB.txt", ios::in | ios::trunc);

	int size;
	cout << "¬ведите размер вашего массива: ";
	cin >> size;
	int* arr = new int[size];
	for (int step = 0; step < size; step++) {
		arr[step] = ((rand() % 10) - (rand() % 10));
		cout << "arr[" << step << "] == " << arr[step] << endl;
		FileAWrite << arr[step] << " ";
	}
	cout << "\n======666======\n";

	int temp = 0;
	for (int step = 0; step < size; step++) {
		if ((arr[step] != 666) && ((step + 1) < size)) {
			for (int stepForNumber = (step + 1); stepForNumber < size; stepForNumber++) {
				if (arr[step] == arr[stepForNumber]) {
					temp++;
					arr[stepForNumber] = 666;
				}
			}
			if (temp == 1) {
				FileBWrite << arr[step] << " ";
			}
		}
		temp = 0;
	}

	ofstream FileF1Write("lab18add3fileF1.txt", ios::in | ios::trunc);
	ofstream FileF2Write("lab18add3fileF2.txt", ios::in | ios::trunc);
	FileF1Write << "Alsi ku nushi ilani mushiti" << endl;
	FileF1Write << "Itti kunu alsi mushitum kallatum kuttumtum" << endl;
	FileF1Write << "Alsi bararitum qablitum u namaritum" << endl;
	FileF1Write << "Ashshu kashshaptu u kashshipanni" << endl;
	FileF1Write << "Eli nitum ubbiraanni" << endl;
	FileF1Write << "Ili - ia u Ishtari - ia ushis - su - u - eli - ia" << endl;
	FileF1Write << "Eli ameri - ia amru - usanaku" << endl;
	FileF1Write << "Imdikula salalu musha u urra" << endl;
	FileF1Write << "Qu - u imtana - allu - u pi - ia" << endl;
	FileF1Write << "Upu unti pi - ia iprusu" << endl;
	FileF1Write << "Me mashtiti - ia umattu - u" << endl;
	FileF1Write << "Eli li nubu - u xiduti si - ipdi" << endl;
	FileF1Write << "Izizanimma ilani rabuti shima - a dababi" << endl;
	FileF1Write << "Dini dina alakti limda" << endl;
	FileF1Write << "Epu - ush salam kashshapi - ia u kashshapti - ia" << endl;
	FileF1Write << "Sha epishia u mushtepishti - ia" << endl;
	FileF1Write << "Is mass - ssarati sha mushi lipshuru ruxisha limnuti" << endl;
	FileF1Write << "Pisha lu - u ZAL.LU Lishanusha Lu - u Tabtu" << endl;
	FileF1Write << "Sha iqbu - u amat limutti - ia kima ZAL.LU litta - tuk" << endl;
	FileF1Write << "Sha ipushu kishpi kima Tabti lishxarmit" << endl;
	FileF1Write << "qi - ishrusha pu - uttu - ru ipshetusha xulluqu" << endl;
	FileF1Write << "Kal amatusha malla - a sseri" << endl;
	FileF1Write << "Ina qibit iqbu - u ilani mushitum." << endl;
	FileF1Write.close();
	ifstream FileF1Read("lab18add3fileF1.txt", ios::out);
	string stringOfText;
	while (getline(FileF1Read, stringOfText)) {
		if (stringOfText[(stringOfText.length() - 1)] == 'a') {
			FileF2Write << stringOfText << endl;
		}
	}
}