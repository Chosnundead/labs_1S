#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

void LAB2() {
    double A[] = { 0, -9, -4, 1.5 };
    double RES[3];
    A[0] = 0.5 * pow(10, -8);

    RES[0] = A[0] * A[1] + A[3] * sqrt(A[1] - 1);
    RES[1] = 0.5 * RES[0] / A[0] + exp(A[3]);
    cout << "\t\tЛаба №2(13 вариант)\nt == " << RES[0] << "\ny == " << RES[1] << endl;
    cout << "Ошибки в коде тут нету, просто компьютор, ну и лично я, не знаем как доставать корень отрицательных чисел => программа ломается.(\n";
    cout << "Но я как ответственный парень решил продолжить и исправить ошибку, так что c == 9. -.-\n";

    RES[0] = A[0] * A[1] + A[3] * sqrt((-A[1]) - 1);
    RES[1] = 0.5 * RES[0] / A[0] + exp(A[3]);
    cout << "t == " << RES[0] << "\ny == " << RES[1] << endl;

    cout << "\t\t(16 вариант)\n";
    A[0] = 6;
    A[1] = 0.05 * pow(10, -5);
    RES[0] = cos(5 * A[0]) / pow(sin(0.4 * A[0]), 2);
    RES[1] = 4 * A[1] * RES[0] - 7 * exp(-2 * RES[0]);
    cout << "y == " << RES[0] << "\nw == " << RES[1] << endl;

    cout << "А ещё решил сделать другие варианты.)\n";
    cout << "\t\t(1 вариант)\n";
    A[0] = 4;
    A[1] = 2 * pow(10, -4);
    A[2] = 8.1;
    RES[0] = 2 * A[0] / A[2] + log(2 + A[1]);
    RES[1] = sqrt(A[0] - 1) / (RES[0] + 1);
    cout << "t == " << RES[0] << "\nu == " << RES[1] << endl;

    cout << "\t\t(4 вариант)\n";
    A[0] = 6;
    A[1] = -1.2;
    A[2] = 0.4 * pow(10, 6);
    RES[0] = 2.6 * A[0] + cos(A[1] / (3 * A[2] + A[1]));
    RES[1] = (sin(A[0])) / (cos(A[0]));
    cout << "p == " << RES[0] << "\nq == " << RES[1] << endl;

    cout << "\t\t(14 вариант)\n";
    A[0] = 1.5;
    A[1] = -8.1;
    A[2] = 4;
    A[3] = 4 * pow(10, -8);
    RES[0] = sqrt(A[3] * A[0] / A[3] + 1) + 4 * exp(2 * A[1]);
    RES[1] = RES[0] * A[0] / (1 + 0.1 * A[0]);
    RES[2] = RES[0] + A[2] * sqrt(pow(A[0], 2) + pow(A[1], 2));
    cout << "s == " << RES[0] << "\nw == " << RES[1] << "\nv == " << RES[2] << endl;
}

void LAB3() {
    unsigned char MATRIX13[6][8] = { 0,1,1,0,1,1,0,2,
                                     1,1,1,1,1,1,1,2,
                                     1,1,1,1,1,1,1,2,
                                     0,1,1,1,1,1,0,2,
                                     0,0,1,1,1,0,0,2,
                                     0,0,0,1,0,0,0,2 };//как после объявления массива, заново его переназначить через фигурные скобки???
    unsigned char MATRIX1[6][8] = { 0,0,1,1,1,0,0,2,
                                    0,1,1,1,1,1,0,2,
                                    1,1,1,1,1,1,1,2,
                                    0,0,0,0,0,0,0,2,
                                    0,0,0,0,0,0,0,2,
                                    0,0,0,0,0,0,0,2 };
    unsigned char MATRIX4[6][8] = { 0,0,1,1,1,0,0,2,
                                    0,1,1,1,1,1,0,2,
                                    1,1,1,1,1,1,1,2,
                                    1,1,1,1,1,1,1,2,
                                    0,1,1,1,1,1,0,2,
                                    0,0,1,1,1,0,0,2 };
    unsigned char MATRIX14[6][8] = { 0,0,0,1,0,0,0,2,
                                     0,0,1,1,1,0,0,2,
                                     1,1,1,1,1,1,1,2,
                                     1,1,1,1,1,1,1,2,
                                     0,0,1,1,1,0,0,2,
                                     0,0,0,1,0,0,0,2 };
    float A[5];
    float RES = 0;
    char SYMBOL;
    
    cout << "\t\tЛаба №3(13 вариант)\nВведите ваш символ: ";
    cin >> SYMBOL;

    for (int j = 0; j < 6; j++) {
        for (int k = 0; k < 8; k++) {
            switch (MATRIX13[j][k]) {
            case 0:
                cout << " ";
                break;
            case 1:
                cout << SYMBOL;
                break;
            case 2:
                cout << endl;
                break;
            }
        }
    }

    cout << "В бригаде, работающей на уборке сена, имеется N косилок. Первая из них работала M часов, а каждая следующая на 10 мин. Больше, чем предыдущая. Сколько часов работала вся бригада?\n";
    cout << "N == ";
    cin >> A[0];
    cout << "M == ";
    cin >> A[1];
    A[1] *= 60;

    while (A[0] > 0) {
        RES += A[1];
        A[1] += 10;
        A[0]--;
    }

    cout << "Ответ: " << (RES / 60) << " часов.\n";

    cout << "\t\t(1 вариант)\nВведите ваш символ: ";
    cin >> SYMBOL;

    for (int j = 0; j < 6; j++) {
        for (int k = 0; k < 8; k++) {
            switch (MATRIX1[j][k]) {
            case 0:
                cout << " ";
                break;
            case 1:
                cout << SYMBOL;
                break;
            case 2:
                cout << endl;
                break;
            }
        }
    }

    cout << "Поменять значения двух переменных: а) используя дополнительную переменную; б) не используя дополнительной переменной.\n";
    cout << "A[0] == ";
    cin >> A[0];
    cout << "A[1] == ";
    cin >> A[1];

    A[2] = A[1];
    cout << "а)A[2] = A[1]\n";
    A[1] = A[0];
    cout << "A[1] = A[0]\n";
    A[0] = A[2];
    cout << "A[0] = A[2]\n";
    cout << "A[0] == " << A[0] << endl;
    cout << "A[1] == " << A[1] << endl;

    A[0] += A[1];
    cout << "б)A[0] += A[1]\n";
    A[1] = A[0] - A[1];
    cout << "а)A[1] = A[0] - A[1]\n";
    A[0] -= A[1];
    cout << "а)A[0] -= A[1]\n";
    cout << "A[0] == " << A[0] << endl;
    cout << "A[1] == " << A[1] << endl;
    
    cout << "\t\t(4 вариант)\nВведите ваш символ: ";
    cin >> SYMBOL;

    for (int j = 0; j < 6; j++) {
        cout << "\t\t\t\t\t\t\t";
        for (int k = 0; k < 8; k++) {
            switch (MATRIX4[j][k]) {
            case 0:
                cout << " ";
                break;
            case 1:
                cout << SYMBOL;
                break;
            case 2:
                cout << endl;
                break;
            }
        }
    }

    cout << "Даны действительные числа X, Y, Z. Определить среднее арифметическое и среднее геометрическое их модулей.\n";
    cout << "X == ";
    cin >> A[0];
    cout << "Y == ";
    cin >> A[1];
    cout << "Z == ";
    cin >> A[2];
    cout << "Среднее арифметическое == " << ((A[0] + A[1] + A[2]) / 3) << endl;
    RES = pow(abs(A[0]) * abs(A[1]) * abs(A[2]), (1.0 / 3));
    cout << "Среднее геометрическое их модулей == " << RES << endl;

    cout << "\t\t(14 вариант)\nВведите ваш символ: ";
    cin >> SYMBOL;

    for (int j = 0; j < 6; j++) {
        for (int k = 0; k < 8; k++) {
            switch (MATRIX14[j][k]) {
            case 0:
                cout << " ";
                break;
            case 1:
                cout << SYMBOL;
                break;
            case 2:
                cout << endl;
                break;
            }
        }
    }

    cout << "Автомобиль на каждом из пяти одинаковых по длине участках дороги шел с известной средней скоростью. Составьте алгоритм и программу для определения средней скорости на всем пути.\n";
    cout << "A[0] == ";
    cin >> A[0];
    cout << "A[1] == ";
    cin >> A[1];
    cout << "A[2] == ";
    cin >> A[2];
    cout << "A[3] == ";
    cin >> A[3];
    cout << "A[4] == ";
    cin >> A[4];
    RES = (A[0] + A[1] + A[2] + A[3] + A[4]) / 5;
    cout << "Средняя скорость на всём пути == " << RES << endl;
}

void LAB4() {
    float A[7];
    float RES = 0;
    int CASE;
    cout << "\t\tЛаба №4(13 вариант)\nВведите числа:\nx1 == ";
    cin >> A[0];
    cout << "y1 == ";
    cin >> A[1];
    cout << "y2 == ";
    cin >> A[2];

    A[3] = max(A[0] + A[1], A[0] * A[1]);
    A[4] = max(A[3], A[1] * A[2]);

    A[5] = min(A[0], A[1]);
    A[6] = min(A[5], A[2]);
    RES = A[4] + A[6];
    cout << "Ответ: " << RES << endl;

    cout << "Проверить, является  ли дробь A/B правильной.\n";
    cout << "A == ";
    cin >> A[0];
    cout << "B == ";
    cin >> A[1];

    if (abs(A[0]) < abs(A[1]))
        cout << "Ответ: да.\n";
    else
        cout << "Ответ: нет.\n";
    
    cout << "Как часто вы читаете книги?\n1.Читаю всё что попадает под руку\n2.Часто\n3.Как получится\n4.Редко\n5.Книга? Это фрукт такой?\nВариант ответа(выбирете цифру): ";
    cin >> CASE;
    switch (CASE) {
    case 1:
        cout << "Мне страшно, выйдите погулять. Пожалуйста!\n";
        break;
    case 2:
        cout << "Вы молодец, но не засиживайтесь за книгами. Реальный мир прекрасней книг!\n";
        break;
    case 3:
        cout << "Вы, определённо умеете ставить приоритеты.\n";
        break;
    case 4:
        cout << "Плохо, старайтесь больше читать.\n";
        break;
    case 5:
        cout << "Срочно в магазин за книгой!\n";
        break;
    default:
        cout << "Какие книги? Вы цифры не знаете!\n";
        break;
    }

    cout << "\t\tЛаба №4(1 вариант)\n";
    cout << "Ввести три числа m, n, p. Подсчитать количество отрицательных чисел.\n";
    cout << "m == ";
    cin >> A[0];
    cout << "n == ";
    cin >> A[1];
    cout << "p == ";
    cin >> A[2];
    RES = 0;

    for (int i = 0; i < 3; i++) {
        if (A[i] < 0)
            RES++;
    }

    cout << "Ответ: " << RES << " число(а).\n";
    
    cout << "\t\tЛаба №4(4 вариант)\n";
    cout << "По номеру месяца напечатать пору года.\n";
    cout << "A[0] == ";
    cin >> CASE;

    switch (CASE) {
    case 1:
    case 2:
        cout << "Ответ: зима.\n";
        break;
    case 3:
    case 4:
    case 5:
        cout << "Ответ: весна.\n";
        break;
    case 6:
    case 7:
    case 8:
        cout << "Ответ: лето.\n";
        break;
    case 9:
    case 10:
    case 11:
        cout << "Ответ: осень.\n";
        break;
    case 12:
        cout << "Ответ: зима.\n";
        break;
    default:
        cout << "Такого месяца не существует.\n";
    }

    cout << "\t\tЛаба №4(14 вариант)\n";
    cout << "Для целого числа К от 1 до 9 напечатать фразу 'мне К лет', учитывая при этом, что при некоторых значениях К слово 'лет'' надо заменить на слово 'год' или 'года'.\n";
    cout << "K == ";
    cin >> CASE;

    switch (CASE) {
    case 1:
        cout << "Ответ: мне " << CASE << " год.\n";
        break;
    case 2:
    case 3:
    case 4:
        cout << "Ответ: мне " << CASE << " года.\n";
        break;
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
        cout << "Ответ: мне " << CASE << " лет.\n";
        break;
    default:
        cout << "Неверное K.\n";
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");//Поставили русский в консоле
    char CHECK;
    int NUMBER;

    do {
        system("cls");

        cout << "Выберите лабу(2, 3, 4): ";
        cin >> NUMBER;

        if (NUMBER >= 2 && NUMBER <= 4) {
            switch (NUMBER) {
            case 2:
                system("cls");
                LAB2();
                break;
            case 3:
                system("cls");
                LAB3();
                break;
            case 4:
                system("cls");
                LAB4();
                break;
            }
        } else {
            system("cls");
            cout << "Вы ввели не корректное число!" << endl;
        }

        cout << "Повторить цикл?(y/n) ";
        cin >> CHECK;

    } while (CHECK == 'y' || CHECK == 'Y');

    return 0;
}