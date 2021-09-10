#include <iostream>
#include <conio.h>

using namespace std;

void MENU(int MENU_SELECTION) {
    if (MENU_SELECTION == 1)
        cout << "->";
    cout << "1.\n";

    if (MENU_SELECTION == 2)
        cout << "->";
    cout << "2.\n";

    if (MENU_SELECTION == 3)
        cout << "->";
    cout << "3.\n";
}

void INPUT(int *INPUT_SELECTION, bool *INPUT_VERIFICATION, bool *INPUT_BREAK) {
    switch (_getch()) {
    case 72:
        if (*INPUT_SELECTION == 1)
            *INPUT_SELECTION = 3;
        else
            *INPUT_SELECTION = *INPUT_SELECTION - 1;
        break;
    case 80:
        if (*INPUT_SELECTION == 3)
            *INPUT_SELECTION = 1;
        else
            *INPUT_SELECTION = *INPUT_SELECTION + 1;
        break;
    case 13:
        *INPUT_VERIFICATION = true;
        break;
    case 27:
        *INPUT_BREAK = true;
        break;
    }
}

bool CHECK(int CHECK_SELECTION, bool CHECK_VERIFICATION) {
    if (CHECK_VERIFICATION) {
        if (CHECK_SELECTION == 1)
            cout << "1";
        if (CHECK_SELECTION == 2)
            cout << "2";
        if (CHECK_SELECTION == 3)
            cout << "3";
    }

    return false;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int SELECTION = 1;
    bool VERIFICATION = false;
    bool BREAK = false;

    do {
        system("cls");

        MENU(SELECTION);
        
        INPUT(&SELECTION, &VERIFICATION, &BREAK);

        VERIFICATION = CHECK(SELECTION, VERIFICATION);

    } while (!(BREAK));

    return 0;
}