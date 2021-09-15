#include <iostream>
#include <conio.h>
#include <string>
#include <cmath>

using namespace std;

void ticket() {
    system("cls");
    string ticketOne, ticketTwo;
    int number[2] = { 0, 0 };
    int tmp = 0;

    cout << "Шестизначный автобусный билет считается удачным, если сумма его цифр делится на 7. Могут ли два билета подряд быть удачными?\n";

    do {
        cout << "Введите номер первого билета: ";
        cin >> ticketOne;
    } while (ticketOne.length() != 6);

    do {
        cout << "Введите номер второго билета: ";
        cin >> ticketTwo;
    } while (ticketTwo.length() != 6);

    for (int i = 5; i >= 0; i--) {
        number[0] = number[0] + (ticketOne[i] - '0');//Крутая тема чтоб переводить char число в int, надо б запомнить)
        number[1] = number[1] + (ticketTwo[i] - '0');
        tmp++;
    }

    if (!(number[0] % 7) && !(number[1] % 7)) {
        cout << "Ответ: Да.\n";
    } else {
        cout << "Ответ: Нет.\n";
    }

    cout << "Для продолжения нажмите ENTER...";
    _getch();
}

void firm() {
    system("cls");
    double p, q;
    int dayCount = 0;

    cout << "Торговая фирма в первый день работы реализовала товаров на P тыс. руб., а затем ежедневно увеличивала выручку на 3%. Какой будет выручка фирмы в тот день, когда она впервые превысит заданное значение Q? Сколько дней придется торговать фирме для достижения этого результата?\n";
    cout << "p == ";
    cin >> p;
    cout << "q == ";
    cin >> q;

    while (p <= q) {
        p *= 1.03;
        dayCount++;
    }

    cout << "Ответ: Выручка составит " << p << " и это займёт " << dayCount << " дней.\n";

    cout << "Для продолжения нажмите ENTER...";
    _getch();
}

void lab5() {
    system("cls");
    double result[2];
    double a = 8;
    double m = 6;
    double b = 5 * pow(10, -3);
    double k[3] = { 1.6, 9.1, 8 };

    cout << "Цикл for:\n";
    for (int i = 0; i < 3; i++) {
        result[0] = sin(k[i] / a) / cos(m * b);
        result[1] = result[0] / (pow(result[0], 2) + 1) / (1 - exp(k[i]));
        cout << "d == " << result[0] << endl << "c == " << result[1] << endl;
    }

    cout << "Цикл while:\n";
    while (k[2] >= 3) {
        result[0] = sin(k[2] / a) / cos(m * b);
        result[1] = result[0] / (pow(result[0], 2) + 1) / (1 - exp(k[2]));
        cout << "d == " << result[0] << endl << "c == " << result[1] << endl;
        k[2] -= 0.5;
    }

    cout << "Двойной цикл:\n";
    k[0] = 1.7;
    k[1] = 5;
    k[2] = -2;
    a = 2;
    while (a <= 2.8) {
        for (int i = 0; i < 3; i++) {
            result[0] = sin(k[i] / a) / cos(m * b);
            result[1] = result[0] / (pow(result[0], 2) + 1) / (1 - exp(k[i]));
            cout << "d == " << result[0] << endl << "c == " << result[1] << endl;
        }

        a += 0.2;
    }

    cout << "Для продолжения нажмите ENTER...";
    _getch();
}

void sphere() {
    system("cls");
    double data[3];
    double* temp = new double;

    cout << "Может ли шар радиуса r пройти через ромбообразное отверстие с диагоналями p и q?\nr == ";
    cin >> data[0];
    cout << "p == ";
    cin >> data[1];
    cout << "q == ";
    cin >> data[2];

    *temp = (data[1] * data[2]) / (sqrt((pow(data[1], 2)) + (pow(data[2], 2))));

    if (data[0] <= (*temp)) {
        cout << "Ответ: Да, может.\n";
    } else {
        cout << "Ответ: Нет, не может.\n";
    }

    delete temp;

    cout << "Для продолжения нажмите ENTER...";
    _getch();
}

void chess() {
    system("cls");
    short int oX = 0;
    short int oY = 0;
    int iTest, jTest;
    short stage = 0;
    bool result = true;
    bool loopChess = true;
    bool err = false;
    short int chess[8][8] = { 1, 0, 0, 0, 0, 0, 0, 0,
                              0, 0, 0, 0, 0, 0, 0, 0,
                              0, 0, 0, 0, 0, 0, 0, 0,
                              0, 0, 0, 0, 0, 0, 0, 0,
                              0, 0, 0, 0, 0, 0, 0, 0,
                              0, 0, 0, 0, 0, 0, 0, 0,
                              0, 0, 0, 0, 0, 0, 0, 0,
                              0, 0, 0, 0, 0, 0, 0, 0 };
    /*
       _______________________________________________________
      |      |      |      |      |      |      |      |      |
      |  K<- |  K<- |  K<- |  K<- |  K<- |  K<- |  K<- |  K<- |
      |______|______|______|______|______|______|______|______|
      |      |      |      |      |      |      |      |      |
      |  K<- |  K<- |  K<- |  K<- |  K<- |  K<- |  K<- |  K<- |
      |______|______|______|______|______|______|______|______|
      |      |      |      |      |      |      |      |      |
      |  K<- |  K<- |  K<- |  K<- |  K<- |  K<- |  K<- |  K<- |
      |______|______|______|______|______|______|______|______|
      |      |      |      |      |      |      |      |      |
      |  K<- |  K<- |  K<- |  K<- |  K<- |  K<- |  K<- |  K<- |
      |______|______|______|______|______|______|______|______|
      |      |      |      |      |      |      |      |      |
      |  K<- |  K<- |  K<- |  K<- |  K<- |  K<- |  K<- |  K<- |
      |______|______|______|______|______|______|______|______|
      |      |      |      |      |      |      |      |      |
      |  K<- |  K<- |  K<- |  K<- |  K<- |  K<- |  K<- |  K<- |
      |______|______|______|______|______|______|______|______|
      |      |      |      |      |      |      |      |      |
      |  K<- |  K<- |  K<- |  K<- |  K<- |  K<- |  K<- |  K<- |
      |______|______|______|______|______|______|______|______|
      |      |      |      |      |      |      |      |      |
      |  K<- |  K<- |  K<- |  K<- |  K<- |  K<- |  K<- |  K<- |
      |______|______|______|______|______|______|______|______|
      */
    while (loopChess) {
        system("cls");
        
        for (int i = 0; i < 8; i++) {
            //Отображение доски
            if (i == 0) {
                cout << " _______________________________________________________\n";
                cout << "|      |      |      |      |      |      |      |      |\n";
            }
            if (i > 0 && i < 8) {
                cout << "|______|______|______|______|______|______|______|______|\n";
                cout << "|      |      |      |      |      |      |      |      |\n";
            }

            for (int j = 0; j < 8; j++) {
                switch (chess[i][j]) {
                case 0:
                    cout << "|      ";
                    break;
                case 1:
                    cout << "|    < ";
                    break;
                case 2:
                    cout << "|  БК< ";
                    break;
                case 3:
                    cout << "|  БК  ";
                    break;
                case 4:
                    cout << "|  ЧС< ";
                    break;
                case 5:
                    cout << "|  ЧС  ";
                    break;
                }
            }
            cout << "|\n";

            if (i == 7) {
                cout << "|______|______|______|______|______|______|______|______|\n";
            }

            if (err && i == 7) {
                cout << "Вы не можете поставить черного слона на белого короля!\n";
                err = false;
            }
        }

        if (stage != 2) {
            switch (_getch()) {
            case 72:
                switch (chess[oY][oX]) {
                case 1:
                    chess[oY][oX] = 0;
                    break;
                case 2:
                    chess[oY][oX] = 3;
                    break;
                case 4:
                    chess[oY][oX] = 5;
                    break;
                }
                if (oY == 0) {
                    oY = 7;
                }
                else {
                    oY--;
                }
                switch (chess[oY][oX]) {
                case 0:
                    chess[oY][oX] = 1;
                    break;
                case 3:
                    chess[oY][oX] = 2;
                    break;
                case 5:
                    chess[oY][oX] = 4;
                    break;
                }
                break;
            case 80:
                switch (chess[oY][oX]) {
                case 1:
                    chess[oY][oX] = 0;
                    break;
                case 2:
                    chess[oY][oX] = 3;
                    break;
                case 4:
                    chess[oY][oX] = 5;
                    break;
                }
                if (oY == 7) {
                    oY = 0;
                }
                else {
                    oY++;
                }
                switch (chess[oY][oX]) {
                case 0:
                    chess[oY][oX] = 1;
                    break;
                case 3:
                    chess[oY][oX] = 2;
                    break;
                case 5:
                    chess[oY][oX] = 4;
                    break;
                }
                break;
            case 77:
                switch (chess[oY][oX]) {
                case 1:
                    chess[oY][oX] = 0;
                    break;
                case 2:
                    chess[oY][oX] = 3;
                    break;
                case 4:
                    chess[oY][oX] = 5;
                    break;
                }
                if (oX == 7) {
                    oX = 0;
                }
                else {
                    oX++;
                }
                switch (chess[oY][oX]) {
                case 0:
                    chess[oY][oX] = 1;
                    break;
                case 3:
                    chess[oY][oX] = 2;
                    break;
                case 5:
                    chess[oY][oX] = 4;
                    break;
                }
                break;
            case 75:
                switch (chess[oY][oX]) {
                case 1:
                    chess[oY][oX] = 0;
                    break;
                case 2:
                    chess[oY][oX] = 3;
                    break;
                case 4:
                    chess[oY][oX] = 5;
                    break;
                }
                if (oX == 0) {
                    oX = 7;
                }
                else {
                    oX--;
                }
                switch (chess[oY][oX]) {
                case 0:
                    chess[oY][oX] = 1;
                    break;
                case 3:
                    chess[oY][oX] = 2;
                    break;
                case 5:
                    chess[oY][oX] = 4;
                    break;
                }
                break;
            case 13:
                switch (stage) {
                case 0:
                    stage++;
                    chess[oY][oX] = 2;
                    break;
                case 1:
                    if (chess[oY][oX] == 2) {
                        err = true;
                    }
                    else {
                        stage++;
                        chess[oY][oX] = 4;
                    }
                    break;
                }
                break;
            case 27:
                loopChess = false;
                break;
            }
        } else {
            for (int iFill = 0; iFill < 8; iFill++) {
                for (int jFill = 0; jFill < 8; jFill++) {
                    if (chess[iFill][jFill] == 4 || chess[iFill][jFill] == 5 || chess[iFill][jFill] == 6) {
                        iTest = iFill;
                        jTest = jFill;
                        while (iTest >= 0 && jTest >= 0) {
                            chess[iTest][jTest] = 6;
                            iTest--;
                            jTest--;
                        }

                        iTest = iFill;
                        jTest = jFill;
                        while (iTest <= 7 && jTest <= 7) {
                            chess[iTest][jTest] = 6;
                            iTest++;
                            jTest++;
                        }

                        iTest = iFill;
                        jTest = jFill;
                        while (iTest >= 0 && jTest <= 7) {
                            chess[iTest][jTest] = 6;
                            iTest--;
                            jTest++;
                        }

                        iTest = iFill;
                        jTest = jFill;
                        while (iTest <= 7 && jTest >= 0) {
                            chess[iTest][jTest] = 6;
                            iTest++;
                            jTest--;
                        }
                    }
                }
            }

            for (int iCheck = 0; iCheck < 8; iCheck++) {
                for (int jCheck = 0; jCheck < 8; jCheck++) {
                    if (result) {
                        if (chess[iCheck][jCheck] == 2 || chess[iCheck][jCheck] == 3) {
                            result = false;
                        }
                    }
                }
            }

            if (result) {
                cout << "Ответ: Ууууу угрожаю, бойся меня!\n";
                loopChess = false;
            }
            else {
                cout << "Ответ: У нас с тобой нейтралитет, бро.)\n";
                loopChess = false;
            }
        }    
    }

    cout << "Для продолжения нажмите ENTER...";
    _getch();
}

void calculator() {
    system("cls");
    int result;
    int number[2] = { 0, 0 };
    string text;
    char textToChar[100];
    int temp[2] = { 0, 0 };

    cout << "Введите, то что вы хотите посчитать: ";
    getline(cin, text);//Получение из cin полной строки(с пробелами)

    strcpy_s(textToChar, text.c_str());//Безопасная копия строки text с переводом в char элемента и копия его значения в соответсвующий элемент массива textToChar
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
    cout << "2.Лабораторная работа №4. Дополнительное задание №2.\n";

    if (menuSelection == 3) {
        cout << "->";
    }
    cout << "3.Лабораторная работа №4. Дополнительное задание №5.\n";

    if (menuSelection == 4) {
        cout << "->";
    }
    cout << "4.Лабораторная работа №5.\n";

    if (menuSelection == 5) {
        cout << "->";
    }
    cout << "5.Лабораторная работа №5. Дополнительное задание №2.\n";

    if (menuSelection == 6) {
        cout << "->";
    }
    cout << "6.Лабораторная работа №5. Дополнительное задание №1.\n";

    if (menuSelection == 7) {
        cout << "->";
    }
    cout << "7.Лабораторная работа №5. Дополнительное задание №3.\n";
}

void input(int *inputSelection, bool *inputVerification, bool *inputBreak) {
    switch (_getch()) {
    case 72:
        if (*inputSelection == 1)
            *inputSelection = 7;
        else
            *inputSelection = *inputSelection - 1;
        break;
    case 80:
        if (*inputSelection == 7)
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
            chess();
        }
        if (checkSelection == 3) {
            sphere();
        }
        if (checkSelection == 4) {
            lab5();
        }
        if (checkSelection == 5) {
            firm();
        }
        if (checkSelection == 6) {
            ticket();
        }
        if (checkSelection == 7) {
            sphere();
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