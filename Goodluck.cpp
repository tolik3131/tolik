

#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    cout << "Введите шестизначное число: ";
    cin >> n;

    if (n < 100000 || n > 999999) {
        cout << "Ошибка! Число не является шестизначным.";
    }
    else {
        int a = n / 100000;
        int b = n / 10000 % 10;
        int c = n / 1000 % 10;
        int d = n / 100 % 10;
        int e = n / 10 % 10;
        int f = n % 10;

        int sum1 = a + b + c;
        int sum2 = d + e + f;

        if (sum1 == sum2) {
            cout << "Число счастливое!";
        }
        else {
            cout << "Число не является счастливым.";
        }
    }

    return 0;
}


/*Заадание 1*/





#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    cout << "Введите четырёхзначное число: ";
    cin >> n;

    if (n < 1000 || n > 9999) {
        cout << "Ошибка! Число не является четырёхзначным.";
    }
    else {
        int a = n / 1000;
        int b = n / 100 % 10;
        int c = n / 10 % 10;
        int d = n % 10;

        int result = b * 1000 + a * 100 + d * 10 + c;

        cout << "Результат: " << result;
    }

    return 0;
}



/*Задание 2*/




#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int a, b, c, d, e, f, g;

    cout << "Введите семь целых чисел: ";
    cin >> a >> b >> c >> d >> e >> f >> g;

    int max = a;

    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;
    if (e > max) max = e;
    if (f > max) max = f;
    if (g > max) max = g;

    cout << "Максимальное число: " << max;

    return 0;
}


/*Задание 3*/