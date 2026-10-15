#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    // цены за 1 литр
    const int priceApple = 100;
    const int priceOrange = 120;
    const int priceApricot = 130;
    const int pricePear = 110;
	const int priceTomato = 90;   //все в константах, чтобы не менять их в коде
    const int priceOnion = 80;
    const int priceCucumber = 85;
    const int priceGarlicTea = 150;
    const int priceParsleyTea = 140;
    const int priceHawthorn = 300;

    const int LIMIT = 2222; // порог для скидки в чеки


    // сколько литров каждого товара в корзине
    int apple = 0, orange = 0, apricot = 0, pear = 0;
    int tomato = 0, onion = 0, cucumber = 0;
    int garlicTea = 0, parsleyTea = 0;
    int hawthorn = 0;

    int category;
    int drink;
    int qty;

    std::cout << " Ларек Сани \n";

    while (true)
    {
        std::cout << "\n Главное меню \n";
        std::cout << "1  Фруктовые соки\n";
        std::cout << "2  Овощные соки\n";
        std::cout << "3  Чаи\n";
        std::cout << "4  Настойки\n";
        std::cout << "0  Оформить чек\n";
        std::cout << "Выбор: ";
        std::cin >> category;

        if (category == 0)
        {
            break;
        }

        if (category == 1)
        {
            while (true)
            {
                std::cout << "\n Фруктовые соки \n";
                std::cout << "1  Яблочный (" << priceApple << " руб/л)\n";
                std::cout << "2  Апельсиновый (" << priceOrange << " руб/л)\n";
                std::cout << "3  Абрикосовый (" << priceApricot << " руб/л)\n";
                std::cout << "4  Грушевый (" << pricePear << " руб/л)\n";
                std::cout << "0  Назад\n";
                std::cout << "Выбор: ";
                std::cin >> drink;

                if (drink == 0) break;
                if (drink < 1 || drink > 4)
                {
                    std::cout << "Нет такого пункта\n";
                    continue;
                }

                std::cout << "Сколько литров: ";
                std::cin >> qty;
                if (qty <= 0)
                {
                    std::cout << "Неверное колво\n";
                    continue;
                }

                if (drink == 1) apple += qty;
                if (drink == 2) orange += qty;
                if (drink == 3) apricot += qty;
                if (drink == 4) pear += qty;
                std::cout << "Добавлено в корзину\n";
            }
        }
        else if (category == 2)
        {
            while (true)
            {
                std::cout << "\n Овощные соки \n";
                std::cout << "1  Томатный (" << priceTomato << " руб/л)\n";
                std::cout << "2  Луковый (" << priceOnion << " руб/л)\n";
                std::cout << "3  Огуречный (" << priceCucumber << " руб/л)\n";
                std::cout << "0  Назад\n";
                std::cout << "Выбор: ";
                std::cin >> drink;

                if (drink == 0) break;
                if (drink < 1 || drink > 3)
                {
                    std::cout << "Нет такого пункта\n";
                    continue;
                }

                std::cout << "Сколько литров: ";
                std::cin >> qty;
                if (qty <= 0)
                {
                    std::cout << "Неверное количество\n";
                    continue;
                }

                if (drink == 1) tomato += qty;
                if (drink == 2) onion += qty;
                if (drink == 3) cucumber += qty;
                std::cout << "Добавлено в корзину!\n";
            }
        }
        else if (category == 3)
        {
            while (true)
            {
                std::cout << "\n Чаи \n";
                std::cout << "1  Чесночный (" << priceGarlicTea << " руб/л)\n";
                std::cout << "2  Петрушевый (" << priceParsleyTea << " руб/л)\n";
                std::cout << "0  Назад\n";
                std::cout << "Выбор: ";
                std::cin >> drink;

                if (drink == 0) break;
                if (drink < 1 || drink > 2)
                {
                    std::cout << "Нет такого пункта\n";
                    continue;
                }

                std::cout << "Сколько литров: ";
                std::cin >> qty;
                if (qty <= 0)
                {
                    std::cout << "Неверное количество\n";
                    continue;
                }

                if (drink == 1) garlicTea += qty;
                if (drink == 2) parsleyTea += qty;
                std::cout << "Добавлено в корзину!\n";
            }
        }
        else if (category == 4)
        {
            while (true)
            {
                std::cout << "\n Настойки \n";
                std::cout << "1  Боярышник (" << priceHawthorn << " руб/л)\n";
                std::cout << "0  Назад\n";
                std::cout << "Выбор: ";
                std::cin >> drink;

                if (drink == 0) break;
                if (drink != 1)
                {
                    std::cout << "Нет такого пункта\n";
                    continue;
                }

                std::cout << "Сколько литров: ";
                std::cin >> qty;
                if (qty <= 0)
                {
                    std::cout << "Неверное количество\n";
                    continue;
                }

                hawthorn += qty;
                std::cout << "Добавлено в корзину!\n";
            }
        }
        else
        {
            std::cout << "Нет такого пункта\n";
        }
    }

    // чек
    int sum = apple * priceApple
        + orange * priceOrange
        + apricot * priceApricot
        + pear * pricePear
        + tomato * priceTomato
        + onion * priceOnion
        + cucumber * priceCucumber
        + garlicTea * priceGarlicTea
        + parsleyTea * priceParsleyTea
        + hawthorn * priceHawthorn;

    std::cout << "\n Чек \n";
    if (apple > 0)
        std::cout << "Яблaчный: " << apple << " л x " << priceApple << " = " << apple * priceApple << " руб\n";
    if (orange > 0)
        std::cout << "Апельсиновый: " << orange << " л x " << priceOrange << " = " << orange * priceOrange << " руб\n";
    if (apricot > 0)
        std::cout << "Абрикосовый: " << apricot << " л x " << priceApricot << " = " << apricot * priceApricot << " руб\n";
    if (pear > 0)
        std::cout << "Грушевый: " << pear << " л x " << pricePear << " = " << pear * pricePear << " руб\n";
    if (tomato > 0)
        std::cout << "Томатный: " << tomato << " л x " << priceTomato << " = " << tomato * priceTomato << " руб\n";
    if (onion > 0)
        std::cout << "Луковый: " << onion << " л x " << priceOnion << " = " << onion * priceOnion << " руб\n";
    if (cucumber > 0)
        std::cout << "Огуречный: " << cucumber << " л x " << priceCucumber << " = " << cucumber * priceCucumber << " руб\n";
    if (garlicTea > 0)
        std::cout << "Чесночный чай: " << garlicTea << " л x " << priceGarlicTea << " = " << garlicTea * priceGarlicTea << " руб\n";
    if (parsleyTea > 0)
        std::cout << "Петрушквый чай: " << parsleyTea << " л x " << priceParsleyTea << " = " << parsleyTea * priceParsleyTea << " руб\n";
    if (hawthorn > 0)
        std::cout << "Боярышник: " << hawthorn << " л x " << priceHawthorn << " = " << hawthorn * priceHawthorn << " руб\n";

    std::cout << "Сумма: " << sum << " руб\n";

    double total = sum;
    if (sum > LIMIT)
    {
        double discount = sum * 0.13;
        total = sum - discount;
        std::cout << "Скидка 13%: -" << discount << " руб\n";
    }

    std::cout << "Итого к оплате: " << total << " руб\n";

    system("pause");
    return 0;
}