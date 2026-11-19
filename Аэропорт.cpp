
#include <iostream>
#include <Windows.h>
using namespace std;


int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);


    double distance, time, speed;
    cout << "Введите расстояние до аэропорта (км)";
    cin >> distance;
    cout << "Введите время пути (часы)";
    cin >> time;
    if (time > 0)
    {
        speed = distance / time;
        cout << "Необходимая скорость:" << speed << " км/ч " << endl;
    }
    else
    {
        cout << "Ошибка! Время должно быть больше нуля." << endl;
    }
    return 0;
}


/*Задание 1*/




#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);


    int h1, m1, s1;
    int h2, m2, s2;
    int start, finish, duration;
    double cost;

    cout << "Введите время начала поездки (часы минуты секунды): ";
    cin >> h1 >> m1 >> s1;

    cout << "Введите время окончания поездки (часы минуты секунды): ";
    cin >> h2 >> m2 >> s2;

    start = h1 * 3600 + m1 * 60 + s1;
    finish = h2 * 3600 + m2 * 60 + s2;

    duration = finish - start;

    if (duration >= 0)
    {
        cost = duration / 60.0 * 2;

        cout << "Время поездки: " << duration / 60.0 << " минут" << endl;
        cout << "Стоимость поездки: " << cost << " гривен" << endl;
    }
    else
    {
        cout << "Ошибка! Время окончания меньше времени начала." << endl;
    }

    return 0;
}


/*Задание 2*/





#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;
int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    double distance, consumption;
    double price1, price2, price3;
    double cost1, cost2, cost3;
    double fuel;
    cout << "Введите расстояние поездки (км): ";
    cin >> distance;
    cout << "Введите расход бензина на 100 км: ";
    cin >> consumption;
    cout << "Введите стоимость первого вида бензина: ";
    cin >> price1;
    cout << "Введите стоимость второго вида бензина: ";
    cin >> price2;
    cout << "Введите стоимость третьего вида бензина: ";
    cin >> price3;
    fuel = distance * consumption / 100;
    cost1 = fuel * price1;
    cost2 = fuel * price2;
    cost3 = fuel * price3;
    cout << endl;
    cout << fixed << setprecision(2);
    cout << "----------------------------------------" << endl;
    cout << "| Вид бензина | Цена за литр | Стоимость |" << endl;
    cout << "----------------------------------------" << endl;
    cout << "| Бензин 1    | " << setw(12) << price1
        << " | " << setw(9) << cost1 << " |" << endl;
    cout << "| Бензин 2    | " << setw(12) << price2
        << " | " << setw(9) << cost2 << " |" << endl;
    cout << "| Бензин 3    | " << setw(12) << price3
        << " | " << setw(9) << cost3 << " |" << endl;
    cout << "----------------------------------------" << endl;
    return 0;
}



/*Задание 3*/







