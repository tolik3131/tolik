#include <iostream>
#include <Windows.h>
#include <cmath>

void DinP(int size, int*& ptr)
{
	ptr = new int[size];
	for (int i = 0; i < size; i++)
	{
		std::cout << ptr + i << "\n";
	}
}
void DinM(int size, int*& ptr)
{
	for (int i = 0; i < size; i++)
	{
		ptr[i] = rand() % 10;
	}
	for (int i = 0; i < size; i++)
	{
		std::cout << ptr[i] << "\n";
	}
	
	
}

void DinPech(int size, int* ptr)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << ptr[i] << "\n";
	}
}

void DinUdal(int size, int*& ptr)
{
	delete[] ptr;
	ptr = nullptr;
}

void DinDob(int& size, int*& ptr, int plus)
{
	int* arr = new int [size + 1];
	
	for (int i = 0; i < size; i++)
	{
		arr[i] = ptr[i];
	}

	arr[size] = plus;
	delete[] ptr;

	ptr = arr;

	size++;
 }

void DinVstavka(int& size, int*& ptr, int newEL, int index)
{
	int* Rab = new int[size + 1];

	for (int i = 0; i < index; i++)
	{
		Rab[i] = ptr[i];
	}

	Rab[index] = newEL;

	for (int i = index; i < size; i++)
	{
		Rab[i + 1] = ptr[i];
	}

	delete[] ptr;
	ptr = Rab;
	size++;
}

void DinUdalIndex(int& size, int*& ptr, int index)
{
	int* Rab = new int[size - 1];

	for (int i = 0; i < index; i++)
	{
		Rab[i] = ptr[i];
	}

	for (int i = index + 1; i < size; i++)
	{
		Rab[i - 1] = ptr[i];
	}

	delete[] ptr;
	ptr = Rab;
	size--;
}



int main()
{
	int index = 0;
	int newEl = 0;
	int plus = 0;
	int size = 5;
	int* ptr = nullptr;

	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	DinP(size, ptr);
	std::cout << "\n";
	DinM(size, ptr);
	std::cout << "\n";
	DinDob(size, ptr, 40);
	std::cout << "\n\n";

	DinVstavka(size, ptr, 40, 2);
	DinPech(size, ptr);
	std::cout << "\n\n";
	DinUdalIndex(size, ptr, 2);
	DinPech(size, ptr);
	
	DinUdal(size, ptr);
	


























	return 0;


}

	/* тип_данных имя_переменной
	тип_данных имя_переменной
	/*std::cout << "Серега\n";
		std::cout << "\tЧтобы есть\n";
		std::cout << "\t\tЧтобы просить попить\n";
		std::cout << "\t" << 2 << " тенге\n";
		std::cout << "что-то\n\n";
		std::cout << 655345345;*/
	/*double a = 4.3;
	double b = 4.3;
	

	if (a == b)
	{

		std::cout << "Cepera";
	}*/
	/*if (a == 0)
	{
		std::cout << "Hello\n";

	}
	else if (a != 0)
	{
		std::cout << 2;
	}
	else
	{
		std::cout << 1;


	}
	*/
	/*std::cout << "калькулятор\n\n";

	double a = 0;
	double b = 0;
	

	std::cout << "Введите 1 число:";
	std::cin >> a;
	std::cout << "Введите 2 число:";
	std::cin >> b;
	char v;
	std::cout << "Выберите действие:(+ - * /):";
	std::cin >> v;


	
	if (v == '+')
	{
		std::cout << "Cумма\n\n: " << a + b;

	}
	else if (v == '-')
	{
		std::cout << "Разность:\n\n" << a - b;
	}
	else if (v == '*')
	{
		std::cout << "Умножение:\n\n" << a * b;
	}
	else if (v == '/')
	{
		std::cout << "Частное:\n\n" << a / b;
	}
	else if (v == '/')
	{
		if ( b == 0)
		{
			std::cout << "Частное:\n\n" << a / b;
		}
		else
		{
			std::cout << "Ошибка вычисления!\n";
		}
	}
	else
	{
		std::cout << "Ошибка";
	}
	*/
	/*

типы данных:

	bool								true/false		0 - false

	char								'+'	- один символ	43     -128 - 127
	unsigned char						'#'				0 - 255

	short								123				-32768 -- 32767
	unsigned short						123				0 --65535

	int									456326			-2147483648 -- 2147483647
	long long int						12345678		дофига
	unsigned int						123465463		0 -- 42944967295

	float								12345.4561		+- 3.4Е+-38
	double								12345687.10536	1. 7E+-308
	long double							no comment		3.4e-4932 -- 1.1e+4932

	Операторы:

	математические: + - * / = -- += -= *= /= ()

	сравнительные: > < >= <= != == <=>

	логические: && (И)		|| (или)		! (нее)
	
	ТАБУ:	goto	and or not		int ИмяПеременной

	*/
	/*	double a = 0, b = 0, c = 0, d = 0, x1 = 0, x2 = 0;

	std::cout << "Решение полного квадратного уравнения\n\n";
	std::cout << "ax^2 + bx + c = 0\n\n";
	std::cout << "Введите a: ";
	std::cin >> a;
	std::cout << "Введите b: ";
	std::cin >> b;
	std::cout << "Введите c: ";
	std::cin >> c;
	
	std::cout << "\n" << a << "x^2 + " << b << "x + " << c << " = 0\n\n";

	d = std::pow(b, 2) - 4 * a * c;

	std::cout << "Дискраминант: " << d << "\n\n";

	if (d < 0)
	{

		std::cout << "Нет корней\n";
	}
	else if (d == 0)
	{
		x1 = -b / (2 * a);
		std::cout << "Один корень: " << x1 << "\n\n";
	}
	else
	{
		x1 = (-b + std::sqrt(d)) / (2 * a);
		x2 = (-b + std::sqrt(d)) / (2 * a);
		std::cout << "Первый корень: " << x1 << "\n\n";
		std::cout << "Второй корень: " << x2 << "\n\n";
	}*/
	/*srand(time(NULL));

	int number = 0;
	int b = rand() % 10 + 1;
	std::cout << b << "\n\n";

	system("pause");

	int a = 0, randomNumber = 0, hp = 0, number = 0;
	int maxHp = 25, maxHpHard = 25;
	int choose = 0;
	int chance = 30;

	system("cls");
	std::cout << "\n\n\n\t\tИгра Угадай число\n\n\n";
	std::cout << "1 - Начать\n\n";
	std::cout << "2 - Настройки\n\n";
	std::cout << "0 - Выход\n\n";
	std::cout << "Ввод: ";
	std::cin >> choose;
	
			while (true)
			{
				system("cls");
				std::cout << "\n\n\n\t\tВыберите уровень сложности\n\n\n";
				std::cout << "1 - Лёгкий (0 - 500)\n";
				std::cout << "2 - Сложный(0 - 5000)\n";
				std::cout << "0 - Выход в главное меню\n\n";
				std::cout << "Ввод: ";
				std::cin >> choose;

				if (choose == 1)
				{
					randomNumber = rand() % 500 + 1;
					hp = maxHp;
					while (true)
					{
						std::cout << "Кол-во жизней: " << hp << "\n";
						std::cout << "Введите число от 1 до 500:";
						std::cin >> number;


						if (number == randomNumber)
						{
							std::cout << "Вы угадали! Поздравляем!\n";

							system("pause");
							break;
						}
						else if (number < 1 || number > 500)
						{
							std::cout << "Вы вышли за лимиты\n";
							Sleep(1000);
						}
						else
						{
							hp--;
							if (hp <= 0)
							{
								std::cout << "Вы проиграли! \n";
								std::cout << "Число компьютера было: " << randomNumber << "\n\n";
								system("pause");
								break;
							}

							std::cout << "Не верно\n";
							std::cout << "Кол-во жизней: " << hp << "\n";
							std::cout << "Взять подсказку за 1 жизнь?\n";
							std::cout << "1 - Да\nЛюбое чиисло - Нет\nВвод: ";
							std::cin >> choose;
							if (choose == 1)
							{
								hp--;
								if (hp <= 0)
								{
									std::cout << "Вы проиграли! \n";
									std::cout << "Число компьютера было: " << randomNumber << "\n\n";
									system("pause");
									break;
								}
								if (number < randomNumber)
								{
									std::cout << "Ваше число меньше числа компьютера\n";

								}
								else
								{
									std::cout << "Ваше число больше числа компьютера\n";
								}
								Sleep(1500);
							}
						}
					}
				}

				else if (choose == 2)
				{
					while (true)
					{

						randomNumber = rand() % 5000 + 1;
						hp = maxHp;
						while (true)
						{
							std::cout << "Кол-во жизней: " << hp << "\n";
							std::cout << "Введите число от 1 до 5000:";
							std::cin >> number;


							if (number == randomNumber)
							{
								std::cout << "Вы угадали! Поздравляем!\n";

								system("pause");
								break;
							}
							else if (number < 1 || number > 5000)
							{
								std::cout << "Вы вышли за лимиты\n";
								Sleep(1000);

							}
							else
							{
								hp--;
								if (hp <= 0)
								{
									std::cout << "Вы проиграли! \n";
									std::cout << "Число компьютера было: " << randomNumber << "\n\n";
									system("pause");
									break;
								}

								std::cout << "Не верно\n";
								std::cout << "Кол-во жизней: " << hp << "\n";
								std::cout << "Взять подсказку за 1 жизнь?\n";
								std::cout << "1 - Да\nЛюбое чиисло - Нет\nВвод: ";
								std::cin >> choose;
								if (choose == 1)
								{

									if (rand() % 101 <= chance)
									{
										std::cout << "Бесплатная подсказка\n";
										Sleep(1000);
									}
									else
									{
										hp--;
										if (hp <= 0)
										{
											std::cout << "Вы проиграли! \n";
											std::cout << "Число компьютера было: " << randomNumber << "\n\n";
											system("pause");
											break;
										}
									}

									if (number < randomNumber)
									{
										std::cout << "Ваше число меньше числа компьютера\n";

									}
									else
									{
										std::cout << "Ваше число больше числа компьютера\n";
									}
									Sleep(1500);
								}
							}
						}
					}
				}

				while (true)
				{

					system("cls");
					std::cout << "\n\n\n\t\tНастройки игры\n\n\n";
					std::cout << "1 - Изменить кол-во жизней для легкой игры\n";
					std::cout << "2 - Изменить кол-во жизей для сложной игры\n";
					std::cout << "3 - Изменить шанс бесплатной подсказки для сложной игры\n";
					std::cout << "0 - Выход\n\n";
					std::cout << "Ввод: ";
					std::cin >> choose;
					
					if (choose == 1)
					{
						while (true)
						{
							std::cout << "Введите кол-во жизней для легкой игры: ";
							std::cin >> choose;
							if (choose < 1 || choose > 100)
							{
								std::cout << "Допустимое значение от 0 до 100\n";
								Sleep(1500);
							}
							else
							{
								std::cout << "Успешно\n";
								maxHp = choose;
								Sleep(1500);
								break;
							}
						}
					}
					else if (choose == 2)
					{
						while (true)
						{
							std::cout << "Введите кол-во жизней для сложной игры: ";
							std::cin >> choose;
							if (choose < 1 || choose > 100)
							{
								std::cout << "Допустимое значение от 0 до 100\n";
								Sleep(1500);
							}
							else
							{
								std::cout << "Успешно\n";
								maxHp = choose;
								Sleep(1500);
								break;
							}
						}
					}
					else if (choose == 3)
					{
						while (true)
						{
							std::cout << "Введите шанс бесплатной подсказки для сложной игры: ";
							std::cin >> choose;
							if (choose < 1 || choose > 100)
							{
								std::cout << "Допустимое значение от 0 до 100\n";
								Sleep(1500);
							}
							else
							{
								std::cout << "Успешно\n";
								maxHp = choose;
								Sleep(1500);
								break;
							}
						}
					}
					else if (choose == 0)
					{
						break;
					}
					else
					{
						std::cout << "Ошибка!.. Неккоректный ввод\n";
					}
				}

				if (choose == 0)
				{
					system("cls");
					std::cout << "\n\n\n\t\tСпасибо за игру!\n\n\n";
					break;
				}


			}*/
	/*	const int size = 10;
	double sumP = 0, sumO = 0;
	int igor[size]{};

	int a = rand() % 10 - 11;
	const int size = 10;
	// тип_данных имя_массива[кол-во ячеек]

	int igor[size]{};

	for (int i = 0; i < size; i++)
	{
		std::cin >> igor[i];
	}

	for (int i = 0; i < size; i++)
	{
		std::cout << igor[i] << " ";
		std::cin >> a;
	}

	for (a; a > 0; a++)
	{
		std::cout << "Сумма всех положительных чисел: " << a << "\n";
	}

	for (a; a < 0; a--)
	{
		std::cout << "Сумма всеъ отрицательных чисел: " << a << "\n";
	}*//*long long factorial(int n)
{
	long long f = 1;
	for (int i = 2; i <= n; i++) f *= i;
	{
		return f;
	}
}*/

	/*	const int row = 3, col = 4;
	int arr[row][col];
	

	arr[0][0] = 100;
	std::cout << "\t\tМассив ранд. чисел\n\n";

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 10;
			std::cout << arr[i][j] << " ";
		}
		std::cout << "\n";
	}

	std::cout << "ИГООООООООООООООООООООРЬ";*/
	/*	std::cout << "\t\tКалькулятор комбинаторики:\n\n";


	std::string a;
	int n = 0;
	int k = 0;
	int m = 0;
	//Aп - с повторениями, А - без и т.д
	std::cout << "Выберите тип задачи: \n";
	std::cout << "1.A" << "\n2.Aп" << "\n3.C" << "\n4.Cп" << "\n5.P" << "\n6.Pп" << "\n"; 
	std::cin >> a;
	//Вводить надо цифру
	if (a == "1")
	{
		std::cout << "Введите n и m:\n";
		std::cin >> n >> m;
		std::cout << "A:\n\n" << factorial(n) / factorial(n - m);
		
	}
	else if (a == "2")
	{
		std::cout << "Введите n и m:\n";
		std::cin >> n >> m;
		std::cout << "Aп:\n\n" << std::pow(n, m);
		
	}
	else if (a == "3")
	{
		std::cout << "Введите n и m:\n";
		std::cin >> n >> m;
		std::cout << "C:\n\n" << factorial(n) / (factorial(m) * factorial(n - m));
	}
	else if (a == "4")
	{
		std::cout << "Введите n и m:\n";
		std::cin >> n >> m;
		std::cout << "Cп:\n\n" << factorial(n + m - 1) / (factorial(m) * factorial(n - 1));
	}
	else if (a == "5")
	{
		std::cout << "Введите n: \n";
		std::cin >> n;
		std::cout << "P:\n\n" << factorial(n);
	}
	else if (a == "6")
	{
		std::cout << "Введите n и k: \n";
		std::cin >> n >> k;
		std::cout << "P:\n\n" << factorial(n) / (factorial(k) * factorial(n - k));
	}
	else
	{
		std::cout << "Ошибка!";
	}*/

//циклы
/*	// 1 Задание
	std::cout << "\t\tСчастливый билет:\n\n";

	int num = 0;
	std::cout << "Введите 6-ти значное число: \n";
	std::cin >> num;

	if (num < 100000 || num > 999999)
	{
		std::cout << "Ошибка! Число не шестизначное\n";
	}
	int first = num / 1000;
	int second = num % 1000;

	
	int sum1 = (first / 100) + ((first / 10) % 10) + (first % 10);

	int sum2 = (second / 100) + ((second / 10) % 10) + (second % 10);

	if (sum1 == sum2) 
	{
		std::cout << "Билет СЧАСТЛИВЫЙ!\n";
	}
	else 
	{
		std::cout << "Билет обычный\n";
	}

	// 2 Задание
	int num = 0;
	std::cout << "Введите 4-ех значное число: \n";
	std::cin >> num;

	if (num >= 1000 || num <= 9999)
	{
		int a = num / 1000;
		int b = (num / 100) % 10; 
		int c = (num / 10) % 10; 
		int v = num % 10;

		int result = b * 1000 + a * 100 + v * 10 + c;
		std::cout << "Результат: \n" << result;
	}
	else 
	{
	 std::cout << "Ошибка!! Введи 4-ех значное число";
	}
	


	// 3 Задание
	int a1, a2, a3, a4, a5, a6, a7;
	std::cout << "Введите 7 целых чисел: \n";
	std::cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6 >> a7;

	int max_num = a1;

	if (a2 > max_num) max_num = a2;
	if (a3 > max_num) max_num = a3;
	if (a4 > max_num) max_num = a4;
	if (a5 > max_num) max_num = a5;
	if (a6 > max_num) max_num = a6;
	if (a7 > max_num) max_num = a7;

	std::cout << "Максимальное число: " << max_num;
	*/
//массивы
/*	//Задание 1 
	const int size = 10;

	int arr[size];

	for (int a = 0; a < size; a++)
	{
		arr[a] = rand() % 10 + 1;
		std::cout << arr[a] << " ";
	}
	std::cout << "\n\n";
	
	int min_num = arr[0];
	int max_num = arr[0];

	for (int i = 1;i < size; i++)
	{
		if (arr[i] < min_num) min_num = arr[i];
		if (arr[i] > max_num) max_num = arr[i];
	}
	std::cout << "\n\nМинимальное число: " << min_num << "\n";

	std::cout << "Максимальное число: " << max_num << "\n";


	//Задание 2 
	const int size = 10;
	int arr[size];
	int min_num = 0;
	int max_num = 0;

	std::cout << "Введи порог(мин, макс (через пробел)):";
	std::cin >> min_num >> max_num;

	for (int i = 0; i < size; i++)
	{
		arr[i] =min_num + rand() % (max_num - min_num + 1);
		std::cout << arr[i] << " ";
	}
	std::cout << "\n\n";

	int porog;
	std::cout << "Введите число (порог): ";
	std::cin >> porog;
	
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] < porog)
		{
			sum += arr[i];
		}
	}

	std::cout << "Сумма элементов меньше :" << porog << "\nравна: " << sum;



	//Задание 3
	const int months = 12;

	double firma[months];
	std::cout << "Введите прибыль за год:";
	for (int i = 0; i < months; i++) {
		std::cout << "\nМесяц " << (i + 1) << ": ";
		std::cin >> firma[i];
	}
	
	int start_mon, end_mon;
	std::cout << "\nВведите диапазон месяцев (начальный и конечный, от 1 до 12): ";
	std::cin >> start_mon >> end_mon;

	int start_idx = start_mon - 1;
	int end_idx = end_mon - 1;

	int best_max_month = start_idx;
	int best_min_month = start_idx;

	for (int i = start_idx + 1; i <= end_idx; i++) {
		if (firma[i] > firma[best_max_month]) {
			best_max_month = i;
		}
		if (firma[i] < firma[best_min_month]) {
			best_min_month = i;
		}
	}

	std::cout << "\n--- Результат в диапазоне с " << start_mon << "-го по " << end_mon << "-й месяц ---\n";
	std::cout << "Максимальная прибыль: " << firma[best_max_month] << " (в " << (best_max_month + 1) << "-м месяце)\n";
	std::cout << "Минимальная прибыль: " << firma[best_min_month] << " (в " << (best_min_month + 1) << "-м месяце)\n";*/
//магаз
/*int сhoose = 0;
	int choose = 0;
	int korzina = 0;
	int number = 0;
	int choose_drink = 0;
	int apple = 90, orange = 110, apricos = 100, grusha = 140;
	int tomato = 80, onion = 90, cucumber = 110;
	int garlic = 80, petrushka = 70;
	double sumKor = 0;
	int hawthorn = 200;
	bool fruitBought = false;
	bool hawthornBought = false;
	int hawthornSum = 0;
	int cost = 0;



	while (true)
	{
		system("cls");
		std::cout << "\t\t Магазин Севы\n";
		std::cout << "1 - Категории\n";
		std::cout << "2 - Общая сумма корзины\n";
		std::cout << "0 - Выход из магазина\n\n";
		std::cout << "Ввод: ";
		std::cin >> сhoose;

		if (сhoose == 1)
		{
			while (true)
			{
				system("cls");
				std::cout << "\t\t Выберите категорию\n\n";
				std::cout << "1 - Фруктовый\n";
				std::cout << "2 - Овощной\n";
				std::cout << "3 - Чай\n\n";
				std::cout << "4 - Настойки\n";
				std::cout << "0 - Выход \n";
				std::cout << "Ввод: ";
				std::cin >> сhoose;


				if (сhoose == 1)
				{
					int fruit = 0;

					system("cls");
					std::cout << "\t\t Выбрана категория фруктовый\n\n\n";
					std::cout << "1 - Яблочный\n";
					std::cout << "2 - Апельсиновый\n";
					std::cout << "3 - Абрикосовый\n";
					std::cout << "4 - Грушевый \n";
					std::cout << "0 - Выход к выбору категории \n\n";
					std::cout << "Ввод: ";
					std::cin >> choose_drink;
					if (choose_drink == 1)
					{
						std::cout << "Литр Яблочного сока стоит: 90 рублей\n\n";
						while (true)
						{
							std::cout << "Сколько хотите взять литров Яблочного сока?\n";
							std::cout << "Ввод: ";
							std::cin >> number;
							korzina = korzina + (apple * number);
							fruit++;
							break;

						}
					}
					if (choose_drink == 2)
					{
						std::cout << "Литр Апельсинового сока стоит: 110 рублей\n\n";
						while (true)
						{
							std::cout << "Сколько хотите взять литров Апелсинового сока?\n";
							std::cout << "Ввод: ";
							std::cin >> number;
							korzina = korzina + (orange * number);
							fruit++;
							break;
						}
					}
					if (choose_drink == 3)
					{
						std::cout << "Литр Абрикосового сока стоит: 100 рублей\n\n";
						while (true)
						{
							std::cout << "Сколько хотите взять литров Абрикосового сока?\n";
							std::cout << "Ввод: ";
							std::cin >> number;
							korzina = korzina + (apricos * number);
							fruit++;
							break;
						}
					}
					if (choose_drink == 4)
					{
						std::cout << "Литр Грушевого сока стоит: 140 рублей\n\n";
						while (true)
						{
							std::cout << "Сколько хотите взять литров Грушевого сока?\n";
							std::cout << "Ввод: ";
							std::cin >> number;
							korzina = korzina + (grusha * number);
							fruit++;
							break;
						}
					}
					if (fruit > 0 && !fruitBought)
					{
						fruitBought = true;

						if (hawthornBought)
						{
							korzina -= hawthornSum;
							hawthornBought = false;
							hawthornSum = 0;

							system("cls");
							std::cout << "Покупка фруктового сока изъял боярышник\n";
							std::cout << "Деньги за настойку возвращены в корзину\n";
							std::cout << "Боярышник больше недоступен для покупки\n";
							Sleep(1500);
						}
						else
						{
							std::cout << "\nВнимание! После покупки фруктового сока боярышник недоступен.\n";
							Sleep(1500);
						}
					}
				}

				else if (сhoose == 2)
				{
					system("cls");
					std::cout << "\t\t Выбрана категория овощной\n\n";
					std::cout << "1 - Томатный\n";
					std::cout << "2 - Луковый\n";
					std::cout << "3 - Огуречный\n";
					std::cout << "0 - Выход к выбору категории \n\n";
					std::cout << "Ввод: ";
					std::cin >> choose_drink;
					if (choose_drink == 1)
					{
						std::cout << "Литр Томатного сока стоит: 80 рублей\n\n";
						while (true)
						{
							std::cout << "Сколько хотите взять литров Томатного сока?\n";
							std::cout << "Ввод: ";
							std::cin >> number;
							korzina = korzina + (tomato * number);
							break;
						}
					}

					if (choose_drink == 2)
					{
						std::cout << "Литр Лукового сока стоит: 90 рублей\n\n";
						while (true)
						{
							std::cout << "Сколько хотите взять литров Лукового сока?\n";
							std::cout << "Ввод: ";
							std::cin >> number;
							int FreeLiter = number / 4;
							korzina = korzina + (onion * number);
							korzina = korzina - (FreeLiter * onion);
							if (FreeLiter > 0)
							{
								std::cout << "Вам подарок: " << FreeLiter << " л бесплатно!\n";
							}
							else
							{
								std::cout << "Скидки нет (нужно минимум 4 литра).\n";
							}
							Sleep(1500);
							break;
						}
					}

					if (choose_drink == 3)
					{
						std::cout << "Литр Огуречного сока стоит: 110 рублей\n\n";
						while (true)
						{
							std::cout << "Сколько хотите взять литров Огуречного сока?\n";
							std::cout << "Ввод: ";
							std::cin >> number;
							korzina = korzina + (cucumber * number);
							break;
						}
					}
				}

				else if (сhoose == 3)
				{
					system("cls");
					std::cout << "\t\t Выбрана категория Чай\n\n";
					std::cout << "1 - Чесночный\n";
					std::cout << "2 - Петрушевый\n";
					std::cout << "0 - Выход к выбору категории \n\n";
					std::cout << "Ввод: ";
					std::cin >> choose_drink;
					if (choose_drink == 1)
					{
						std::cout << "Литр Чесночного чая стоит: 80 рублей\n\n";
						while (true)
						{
							std::cout << "Сколько хотите взять литров Чесночного чая?\n";
							std::cout << "Ввод: ";
							std::cin >> number;
							korzina = korzina + (garlic * number);
							break;
						}
					}
					if (choose_drink == 2)
					{
						std::cout << "Литр Петрушевого чая стоит: 70 рублей\n\n";
						while (true)
						{
							std::cout << "Сколько хотите взять литров петрушевого чая?\n";
							std::cout << "Ввод: ";
							std::cin >> number;
							korzina = korzina + (petrushka * number);
							if (number >= 3)
							{
								korzina += (petrushka * number) * 0.95;
								std::cout << "Вам предоставлена скидка 5% на петрушевый чай\n";
							}
							else
							{
								korzina += petrushka * number;
							}
							Sleep(1500);
							break;
						}
					}
				}

				else if (сhoose == 4)
				{
					system("cls");
					std::cout << "\t\t Выбрана категория Настойки\n\n";
					std::cout << "1 - Боярышник\n";
					std::cout << "0 - Выход к выбору категории\n\n";
					std::cout << "Ввод: ";
					std::cin >> choose_drink;
					if (choose_drink == 1)
					{
						if (fruitBought)
						{
							std::cout << "\nБоярышник недоступен, потому что вы уже купили фруктовый сок!!!\n";
							Sleep(1500);
							break;
						}
						else
						{
							std::cout << "Литр настойки Боярышник стоит: 200 рублей\n\n";
							while (true)
							{
								std::cout << "Сколько хотите взять литров Боярышника?\n";
								std::cout << "Ввод: ";
								std::cin >> number;
								cost = hawthorn * number;
								korzina += cost;
								hawthornSum += cost;
								hawthornBought = true;
								break;
							}
						}
					}
				}
				else if (сhoose == 0)
				{
					break;
				}
				else
				{
					std::cout << "\nНекорректный ввод\n";
					Sleep(1500);
				}
			}
		}
		else if (сhoose == 2)
		{
			if (korzina > 1000)
			{
				sumKor = korzina * 0.87;
				std::cout << "Вам предоставлена скидка 13% на весь чек\n";
				std::cout << "Общая сумма что находиться в корзине: " << sumKor << " руб";
			}
			else
			{
				std::cout << "Общая сумма что находиться в корзине: " << korzina << " руб";
			}
			break;
		}

		else if (сhoose == 0)
		{
			std::cout << "\t\t Спасибо что зашли! Приходите ещё!\n\n";
			break;
		}
		else
		{
			std::cout << "\nНекорректный ввод\n";
			Sleep(1500);
		}
	}*/

//функции
 
//1 Задание(фун)
/*const int size = 12;
	int MONTH[size]{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	bool isLeap(int year)
	{
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	int Data(int day, int month, int year, int day1, int month1, int year1)
	{
		if (year > year1 || (year == year1 && month > month1) || (year == year1 && month == month1 && day > day1))
		{
			std::swap(day, day1);
			std::swap(month, month1);
			std::swap(year, year1);
		}
		int daysCount = 0;
			while (day != day1 || month != month1 || year != year1)
			{
				int maxDays = MONTH[month - 1];
				if (month == 2 && isLeap(year))
				{
					maxDays = 29;
				}
				day++;
				daysCount++;

				if (day > maxDays)
				{
					day = 1;     
					month++;      
				}

				if (month > 12) 
				{
					month = 1;    
					year++;      
				}
			}

		return daysCount;
	}*/
// 1 Задание
/*int day = 0;
	int month = 0; 
	int year = 0; 
	int day1 = 0; 
	int month1 = 0; 
	int year1 = 0;


	std::cout << "Введите 1 дату(через пробел):" << "\n";
	std::cin >> day >> month >> year;
	std::cout << "Введите 2 дату(через пробел):" << "\n";
	std::cin >> day1 >> month1 >> year1;

	std::cout << Data(day, month, year, day1, month1, year1);*/
	

// 2 Задание(фун)
/*const int size = 5;
int arr[size]{4, 3, 6, 5, 1};

double Arif(int arr[], int size)
{
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum / size;
}*/
// 2 Задание
/*std::cout << "Среднее Арифметическое:" << Arif(arr, size);
	*/


// 3 Задание(фун)
/*const int size = 10;
int arr[size]{ 1, 2 ,3 , -1, -2, -3, -4, 0, 0, 0 };

	void Kol(int arr[], int size)
	{
		int pol = 0;
		int otr = 0;
		int nol = 0;
		for (int i = 0; i < size; i++)
		{
			if (arr[i] > 0)
			{
				pol++;
			}
			else if (arr[i] < 0) 
			{
				otr++;            
			}
			else                 
			{
				nol++;           
			}
		}
		std::cout << "Кол-во положительных элементов: " << pol << "\n";
		std::cout << "Кол-во отрицательных элементов: " << otr << "\n";
		std::cout << "Кол-во нулевых элементов: " << nol << "\n";
	}*/
// 3 Заданиe
/*Kol(arr, size);
	*/

//адреса
/*	const int size = 5;
	int arr[size]{ 4,3, 6 ,7,4 };
	
	for (int i = 0; i < size; i++)
	{
		std::cout << *(arr + i)<< "\n";
	}*/

/*	int a = 5;

	int* px = &a;

	std::cout << px << "\n"; // адрес
	std::cout << *px << "\n"; // знач. переменной
	*/

// че то по вышке
/*double f(double x) {
	return log(x) - cos(x);
}

double df(double x) {
	return 1.0 / x + sin(x);
}*/
/*	std::cout << "\t\t Ваше уравнение: \n\n";
	std::cout << "f(x) = ln(x) - cos(x) = 0\n\n";

	
	double a = 0.5;
	double h = 0.1;
	double b;
	double f_a = f(a);

	while (a < 3.0)
	{
		b = a + h;
		double f_b = f(b);

		if (f_a * f_b < 0) {
			std::cout << "Наш 1-ый подотрезок: [" << a << "; " << b << "]\n";
			std::cout << "   f(" << a << ") = " << f_a << "\n";
			std::cout << "   f(" << b << ") = " << f_b << "\n\n";
			break;
		}

		a = b;
		f_a = f_b;
	}

	double c;

	for (int i = 1; i <= 3; i++) {
		c = (a + b) / 2;
		double f_c = f(c);
		f_a = f(a);

		std::cout << "Итерация " << i << ": c = " << c << "\n";

		if (f_a * f_c < 0) {
			b = c;
		}
		else {
			a = c;
		}
	}

	double x0 = (a + b) / 2;
	std::cout << "Начальное приближение x0 = " << x0 << "\n\n";

	double x = x0;
	double eps = 1e-6;
	int iter = 1;

	while (true) {
		double d = df(x);

		if (fabs(d) < 1e-8) {
			std::cout << "ВНИМАНИЕ: df(x) ≈ 0 при x = " << x << "\n";
			break;
		}

		double xNext = x - f(x) / d;

		std::cout << "Итерация " << iter << ": x = " << xNext
			<< ", f(x) = " << f(xNext) << "\n";

		if (fabs(xNext - x) < eps) {
			x = xNext;
			break;
		}

		x = xNext;
		iter++;
	}

	std::cout << "\nКорень найден: x = " << x << ", f(x) = " << f(x) << "\n";

	
	Вопрос 1. Сколько раз вычислена f(x) за все три этапа?
	
	Ответ: 23 раза

	
	Вопрос 2. Почему не запустили Ньютон сразу на всём отрезке [0.5; 3.0] с x = 0.5?

Ответ: метод Ньютона — локальный: он гарантированно сходится только тогда, когда начальная точка уже близка к корню. 
Поэтому сначала корень локализуют сканированием и сужают бисекцией,
и лишь потом уточняют Ньютоном.

Что происходит с производной в точке x = 0.5:

	df(0.5) = 1/0.5 + sin(0.5) (примерно)  2 + 0.479 = 2.48
 	

	Вывод: без подготовленного начального приближения x0​
	метод Ньютона ненадёжен - он может уйти за область определения, попасть в окрестность нуля производной или просто разойтись.
	*/















































