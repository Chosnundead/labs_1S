#include <iostream>
#include <conio.h>

using namespace std;

void menu(int menuSelection) {
    if (menuSelection == 1){
        cout << "->";
    }
    cout << "1.\n";

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
            cout << "1";
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