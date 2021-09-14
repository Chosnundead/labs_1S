#include <iostream>
#include <conio.h>
#include <string>
#include <cmath>

using namespace std;

void calculator() {
    system("cls");
    int result;
    int number[2] = { 0, 0 };
    string text;
    char textToChar[100];
    int temp[2] = { 0, 0 };

    cout << "Введите, то что вы хотите посчитать: ";
    getline(cin, text);

    strcpy_s(textToChar, text.c_str());
    for (int i = 0; i < 100; i++)
        if ((textToChar[i] == 'ю') || (textToChar[i] == ' '))
            textToChar[i] = NULL;

    for (int i = 0; i < 100; i++) {
        if (textToChar[i] == '+' || textToChar[i] == '-' || textToChar[i] == '*' || textToChar[i] == '/' || textToChar[i] == '%') {
            for (int j = i; j >= 0; j--) {
                if (textToChar[j] != NULL) {
                    switch (textToChar[j]) {
                    case '0':
                        number[0] = number[0] + 0 * pow(10, temp[0]);
                        temp[0]++;
                        break;
                    case '1':
                        number[0] = number[0] + 1 * pow(10, temp[0]);
                        temp[0]++;
                        break;
                    case '2':
                        number[0] = number[0] + 2 * pow(10, temp[0]);
                        temp[0]++;
                        break;
                    case '3':
                        number[0] = number[0] + 3 * pow(10, temp[0]);
                        temp[0]++;
                        break;
                    case '4':
                        number[0] = number[0] + 4 * pow(10, temp[0]);
                        temp[0]++;
                        break;
                    case '5':
                        number[0] = number[0] + 5 * pow(10, temp[0]);
                        temp[0]++;
                        break;
                    case '6':
                        number[0] = number[0] + 6 * pow(10, temp[0]);
                        temp[0]++;
                        break;
                    case '7':
                        number[0] = number[0] + 7 * pow(10, temp[0]);
                        temp[0]++;
                        break;
                    case '8':
                        number[0] = number[0] + 8 * pow(10, temp[0]);
                        temp[0]++;
                        break;
                    case '9':
                        number[0] = number[0] + 9 * pow(10, temp[0]);
                        temp[0]++;
                        break;
                    default:
                        break;
                    }
                }
            }

            for (int k = 99; k != i; k--) {
                if (textToChar[k] != NULL) {
                    switch (textToChar[k]) {
                    case '0':
                        number[1] = number[1] + 0 * pow(10, temp[1]);
                        temp[1]++;
                        break;
                    case '1':
                        number[1] = number[1] + 1 * pow(10, temp[1]);
                        temp[1]++;
                        break;
                    case '2':
                        number[1] = number[1] + 2 * pow(10, temp[1]);
                        temp[1]++;
                        break;
                    case '3':
                        number[1] = number[1] + 3 * pow(10, temp[1]);
                        temp[1]++;
                        break;
                    case '4':
                        number[1] = number[1] + 4 * pow(10, temp[1]);
                        temp[1]++;
                        break;
                    case '5':
                        number[1] = number[1] + 5 * pow(10, temp[1]);
                        temp[1]++;
                        break;
                    case '6':
                        number[1] = number[1] + 6 * pow(10, temp[1]);
                        temp[1]++;
                        break;
                    case '7':
                        number[1] = number[1] + 7 * pow(10, temp[1]);
                        temp[1]++;
                        break;
                    case '8':
                        number[1] = number[1] + 8 * pow(10, temp[1]);
                        temp[1]++;
                        break;
                    case '9':
                        number[1] = number[1] + 9 * pow(10, temp[1]);
                        temp[1]++;
                        break;
                    default:
                        break;
                    }
                }
            }

            switch (textToChar[i]) {
            case '+':
                result = number[0] + number[1];
                break;
            case '-':
                result = number[0] - number[1];
                break;
            case '*':
                result = number[0] * number[1];
                break;
            case '/':
                result = number[0] / number[1];
                break;
            case '%':
                result = number[0] % number[1];
                break;
            default:
                break;
            }
        }
    }

    cout << "Ответ: " << result << endl << "Для продолжения нажмите ENTER...";

    _getch();
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