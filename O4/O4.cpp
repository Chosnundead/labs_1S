#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

void calculator() {
    system("cls");
    int number[2];
    string text;

    cout << "Введите, то что вы хотите посчитать: ";
    cin >> text;
    
    char textToChar[100];
    strcpy(textToChar, text.c_str());

    for (int i = 0; i < 100; i++)
        cout << textToChar[i] << endl;

    //_getch();
}

void menu(int menuSelection) {
    if (menuSelection == 1){
        cout << "->";
    }
    cout << "1.Лабораторная работа №4. Дополнительное задание №1.\n";

    if (menuSelection == 2) {
        cout << "->";
    }
    cout << "2.\n";

    if (menuSelection == 3) {
        cout << "->";
    }
    cout << "3.\n";
}

void input(int *inputSelection, bool *inputVerification, bool *inputBreak) {
    switch (_getch()) {
    case 72:
        if (*inputSelection == 1)
            *inputSelection = 3;
        else
            *inputSelection = *inputSelection - 1;
        break;
    case 80:
        if (*inputSelection == 3)
            *inputSelection = 1;
        else
            *inputSelection = *inputSelection + 1;
        break;
    case 13:
        *inputVerification = true;
        break;
    case 27:
        *inputBreak = true;
        break;
    }
}

bool check(int checkSelection, bool checkVerification) {
    if (checkVerification) {
        if (checkSelection == 1) {
            calculator();
        }
        if (checkSelection == 2) {
            cout << "2";
        }
        if (checkSelection == 3) {
            cout << "3";
        }
    }

    return false;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int selection = 1;
    bool verification = false;
    bool breaker = false;

    do {
        system("cls");

        menu(selection);
        
        input(&selection, &verification, &breaker);

        verification = check(selection, verification);
        


    } while (!(breaker));

    return 0;
}