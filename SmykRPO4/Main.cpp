#include <iostream>
#include <Windows.h>




int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));


	int choosemenu = 0;
	int choosecat = 0;
	int choosedrink = 0;
	int choose = 0;
	int basket = 0;
	int AllSumInBasket = 0;
	int number = 0;
	int apple = 120, orange = 140, apricot = 145, pear = 130;
	int tomato = 110, onion = 95, cucumber = 120;
	int garlic = 75, petr = 85;


	while (true)
	{
		system("cls");
		std::cout << "\t \t \t \t \t \t Магазин Соки Севы\n";
		std::cout << "1 - Категории\n";
		std::cout << "2 - Общая сумма корзины\n";
		std::cout << "0 - Выход из магазина\n\n";
		std::cout << "Ввод: ";
		std::cin >> choosemenu;

		if (choosemenu == 1)
		{
			while (true)
			{
				system("cls");
				std::cout << "\n\n\n\t\t Выберите категорию\n\n\n";
				std::cout << "1 - Фруктовые\n";
				std::cout << "2 - Овощные\n";
				std::cout << "3 - Чаи\n";
				std::cout << "0 - Выход \n\n";
				std::cout << "Ввод: ";
				std::cin >> choosecat;


				if (choosecat == 1)
				{
					system("cls");
					std::cout << "\n\n\n\t\t Выбрана категория Фруктовые\n\n\n";
					std::cout << "1 - Яблочный\n";
					std::cout << "2 - Апельсиновый\n";
					std::cout << "3 - Абрикосовый\n";
					std::cout << "4 - Грушевый \n";
					std::cout << "0 - Выход к выбору категории \n\n";
					std::cout << "Ввод: ";
					std::cin >> choosedrink;
					if (choosedrink == 1)
					{
						std::cout << "Литр Яблочного сока стоит: 120 рублей\n\n";
						while (true)
						{
							std::cout << "Сколько хотите взять литров Яблочного сока?\n";
							std::cout << "Ввод: ";
							std::cin >> number;
							AllSumInBasket = basket + (apple * number);
							break;

						}
					}
					if (choosedrink == 2)
					{
						std::cout << "Литр Апельсинового сока стоит: 140 рублей\n\n";
						while (true)
						{
							std::cout << "Сколько хотите взять литров Апелсинового сока?\n";
							std::cout << "Ввод: ";
							std::cin >> number;
							AllSumInBasket = basket + (orange * number);
							break;
						} 
					}
					if (choosedrink == 3)
					{
						std::cout << "Литр Абрикосового сока стоит: 145 рублей\n\n";
						while (true)
						{
							std::cout << "Сколько хотите взять литров Абрикосового сока?\n";
							std::cout << "Ввод: ";
							std::cin >> number;
							AllSumInBasket = basket + (apricot * number);
							break;
						} 
					}
					if (choosedrink == 4)
					{
						std::cout << "Литр Грушевого сока стоит: 130 рублей\n\n";
						while (true)
						{
							std::cout << "Сколько хотите взять литров Грушевого сока?\n";
							std::cout << "Ввод: ";
							std::cin >> number;
								AllSumInBasket = basket + (pear * number);
								break;
						}
					}
				}

				if (choosecat == 2)
				{
					system("cls");
					std::cout << "\n\n\n\t\t Выбрана категория Овощные\n\n\n";
					std::cout << "1 - Томатный\n";
					std::cout << "2 - Луковый\n";
					std::cout << "3 - Огуречный\n";
					std::cout << "0 - Выход к выбору категории \n\n";
					std::cout << "Ввод: ";
					std::cin >> choosedrink;
					if (choosedrink == 1)
					{
						std::cout << "Литр Томатного сока стоит: 110 рублей\n\n";
						while (true)
						{
							std::cout << "Сколько хотите взять литров Томатного сока?\n";
							std::cout << "Ввод: ";
							std::cin >> number;
							AllSumInBasket = basket + (tomato * number);
							break;
						}
					}

					if (choosedrink == 2)
					{
						std::cout << "Литр Лукового сока стоит: 95 рублей\n\n";
						while (true)
						{
							std::cout << "Сколько хотите взять литров Лукового сока?\n";
							std::cout << "Ввод: ";
							std::cin >> number;
							AllSumInBasket = basket + (onion * number);
							break;
						}
					}

					if (choosedrink == 3)
					{
						std::cout << "Литр Огуречного сока стоит: 120 рублей\n\n";
						while (true)
						{
							std::cout << "Сколько хотите взять литров Огуречного сока?\n";
							std::cout << "Ввод: ";
							std::cin >> number;
							AllSumInBasket = basket + (cucumber * number);
							break;
						}
					}
				}

				if (choosecat == 3)
				{
					system("cls");
					std::cout << "\n\n\n\t\t Выбрана категория Чаи\n\n";
					std::cout << "1 - Чесночный\n";
					std::cout << "2 - Петрушевый\n";
					std::cout << "0 - Выход к выбору категории \n\n";
					std::cout << "Ввод: ";
					std::cin >> choosedrink;
					if (choosedrink == 1)
					{
						std::cout << "Литр Чесночного чая стоит: 65 рублей\n\n";
						while (true)
						{
							std::cout << "Сколько хотите взять литров Чесночного чая?\n";
							std::cout << "Ввод: ";
							std::cin >> number;
							AllSumInBasket = basket + (garlic * number);
							break;
						}
					}
					if (choosedrink == 2)
					{
						std::cout << "Литр Петрушевого чая стоит: 85 рублей\n\n";
						while (true)
						{
							std::cout << "Сколько хотите взять литров Петрушевого чая?\n";
							std::cout << "Ввод: ";
							std::cin >> number;
							AllSumInBasket = basket + (petr * number);
							break;
						}
					}
				}
				else if (choosecat == 0)
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
	else if (choosemenu == 2)
	{
		std::cout <<"Общая сумма что находиться в корзине: " << AllSumInBasket << " руб";
		break;
	}
	
	else if (choosemenu == 0)
	{
		std::cout << "\n\n\n\t\t Спасибо что зашли! Приходите ещё!\n\n";
		break;
	}
		else
		{
			std::cout << "\nНекорректный ввод\n";
			Sleep(1500);
		}
	}

	return 0;
	}


/*
double a = 0;
double b = 0;
char c = 0;
std::cout << "\t \t \t \t \t \t Калькулятор\n";

std::cout << "Введите первое число: ";
	std::cin >> a;

std::cout << "Введите операцию(+ - * /): ";
	std::cin >> c;

std::cout << "Введите второе число: ";
	std::cin >> b;


if (c == '+')
{
	std::cout << a + b;
}

else if (c == '-')
	{
	std::cout << a - b;
	}

else if (c == '*')
	{
		std::cout << a * b;
	}

else if (c == '/' && b != 0)
	{
		std::cout << a / b;
	}
else if (c =='/' && b == 0)
	{
	std::cerr << "На ноль делить нельзя!\n";
	}
else
{
	std::cout << "\nОшибка";
}*/
/*


	Типы данных:
	
	!bool		true/false	0 - false
	!char		'+'		43		-128 -- 127
	unsigned char	'#'			0 - 255

	!short		123			-32768 -- 32767
	unsigned short		123		0 -- 65535

	!int			456326		-2147483648 - 2147483647
	long long int		12345678		дофигаааааааа
	unsigned int		123465463		0 -- 4294967295

	float				12345.4561		+- 3.4E+-38
	!double				12345687.10536	1.7E-+308
	long double			no comment		3.4e-4932 --1.1e+4932

	Операторы:

	математические: + - * / = % -- += -= *= /= ()
	сравнительные: > < >= <= != == <=>
	логические: && (и)	|| (или)	! (не)

	ТАБУ: goto	and or not	int имяПеременной









*/
/*	double a = 0, b = 0, c = 0, d = 0, x1 = 0, x2 = 0;




	std::cout << "Решение полного квадратного уравнения\n\n";
	std::cout << "ax^2 + bx + c = 0\n\n";
	std::cout << "Введите A: ";
	std::cin >> a;

	std::cout << "Введите B: ";
	std::cin >> b;

	std::cout << "Введите C: ";
	std::cin >> c;

	std::cout << "\n" << a << "x^2 + " << b << "x + " << c << " = 0\n\n";

	d = std::pow(b, 2) - 4 * a * c;

	std::cout << "\nДискриминант: " << d << "\n\n";

	if (d < 0)
	{
		std::cout << "Нет корней\n";
	}
	else if (d == 0)
	{
		x1 = -b / (2 * a);
		std::cout << "Один корень:" << x1 << "\n\n";
	}
	else
	{
		x1 = (-b + std::sqrt(d)) / (2 * a);
		x2 = (-b - std::sqrt(d)) / (2 * a);
		std::cout << "Один корень:" << x1 << "\n\n";
		std::cout << "Второй корень:" << x2 << "\n\n";
	}
*/
/*
int choose = 0, randomNumber = 0, hp = 0, number = 0;
int maxHp = 25, maxHpHard = 25, chance = 30;



while (true)
{
	system("cls");
	std::cout << "\n\n\n\t\t Игра \"Угадай число\"\n\n\n";
	std::cout << "1 - Начать игру\n";
	std::cout << "2 - Найстройки\n";
	std::cout << "0 - Выход\n\n";
	std::cout << "Ввод: ";
	std::cin >> choose;

	if (choose == 1)
	{
		while (true)
		{
			system("cls");
			std::cout << "\n\n\n\t\t Выберите уровень сложности\n\n\n";
			std::cout << "1 - Легкий (1 - 500)\n";
			std::cout << "2 - Сложный (1 - 5000)\n";
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
					std::cout << "Введите число от 1 до 500: ";
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
							std::cout << "Вы проиграли!\n";
							std::cout << "Число компьютера было: " << randomNumber << "\n\n";
							system("pause");
							break;
						}
						std::cout << "\nНе верно\n";
						std::cout << "Кол-во жизней: " << hp << "\n";
						std::cout << "Взять подсказку за 1 жизнь?\n";
						std::cout << "1 - Да\nЛюбое число - Нет\n Ввод: ";
						std::cin >> choose;

						if (choose == 1)
						{


							hp--;
							if (hp <= 0)
							{
								std::cout << "Вы проиграли!\n";
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
						else
						{
							std::cout << "Отказ от подсказки\n";
							Sleep(500);
						}
					}
				}
			}

			else if (choose == 2)
			{
				while (true)
				{
					system("cls");
					std::cout << "\n\n\n\t\t Выберите уровень сложности\n\n\n";
					std::cout << "1 - Легкий (1 - 500)\n";
					std::cout << "2 - Сложный (1 - 5000)\n";
					std::cout << "0 - Выход в главное меню\n\n";
					std::cout << "Ввод: ";
					std::cin >> choose;

					if (choose == 2)
					{

						randomNumber = rand() % 5000 + 1;
						hp = maxHpHard;
						while (true)
						{
							std::cout << "Кол-во жизней: " << hp << "\n";
							std::cout << "Введите число от 1 до 5000: ";
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
									std::cout << "Вы проиграли!\n";
									std::cout << "Число компьютера было: " << randomNumber << "\n\n";
									system("pause");
									break;
								}
								std::cout << "\nНе верно\n";
								std::cout << "Кол-во жизней: " << hp << "\n";
								std::cout << "Взять подсказку за 1 жизнь?\n";
								std::cout << "1 - Да\nЛюбое число - Нет\n Ввод: ";
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
											std::cout << "Вы проиграли!\n";
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
								else
								{
									std::cout << "Отказ от подсказки\n";
									Sleep(500);
								}
							}
						}
					}

					else if (choose == 0)
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
			else if (choose == 0)
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
	else if (choose == 2)
	{
		while (true)
		{
			system("cls");
			std::cout << "\n\n\n\t\t Найстройки игры\n\n\n";
			std::cout << "1 - Изменить кол-во жизней для легкой игры\n";
			std::cout << "2 - Изменить кол-во жизней для сложной игры\n";
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
						std::cout << "Допустимые значения от 1 до 100\n";
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
						std::cout << "Допустимые значения от 1 до 100\n";
						Sleep(1500);
					}
					else
					{
						std::cout << "Успешно\n";
						maxHpHard = choose;
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
					if (choose < 0 || choose > 100)
					{
						std::cout << "Допустимые значения от 0 до 100\n";
						Sleep(1500);
					}
					else
					{
						std::cout << "Успешно\n";
						chance = choose;
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
				std::cout << "Некорректный ввод\n";
				Sleep(1500);
			}
		}
	}
	else if (choose == 0)
	{
		system("cls");
		std::cout << "\n\n\n\t\t Спасибо за игру! \n\n\n";
		break;
	}
	else
	{
		std::cout << "\nНекорректный ввод\n";
		Sleep(1500);
	}
}*/
/*int randomNumber = 0;
const int size = 10;
double sumplus = 0;
double summines = 0;

int arr[size]{};

for (size_t i = 0; i < size; i++)
{
	arr[i] = rand() % 21 - 10;
}
for (size_t i = 0; i < size; i++)
{
	std::cout << arr[i] << " ";
}

for (size_t i = 0; i < size; i++)
{
	if (arr[i] >= 0)
	{
		sumplus += arr[i];
	}
}
for (size_t i = 0; i < size; i++)
{
	if (arr[i] <= 0)
	{
		summines += arr[i];
	}
}


std::cout << "\n" << "Сумма всех положительных чисел: " << sumplus;
std::cout << "\n" << "Сумма всех отрицательных чисел: " << summines;
std::cout << "\n" << "Среднее арифметическое всех чисел: " << (sumplus + summines) / size;
*/
/*	const int row = 3, col = 4; 


	int arr[row][col];



	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 10;
			std::cout << arr[i][j] << " ";
		}
	}
	std::cout << "\n";
	*/
/*	
		const int massiv = 5;
		int arr[massiv]{};
	
		for (size_t i = 0; i < massiv; i++)
		{
			arr[i] = rand() % 6;
			std::cout << arr[i] << " ";
		}
		std::cout << "\n";
		for (size_t g = 0; g < massiv; g++)
		{
			if (arr[g] == 0)
			{
				std::cout << -1 << " ";
			}
			std::cout << arr[g] << " ";
		}
	*/
/*	const int row = 3, col = 4;


		int arr[row][col];
		int sum = 0;


		for (int i = 0; i < row; i++)
		{
			sum = 0;
			for (int j = 0; j < col; j++)
			{
				arr[i][j] = rand() % 10;
				sum += arr[i][j];
				std::cout << arr[i][j] << " ";
			}
			std::cout << "| " << sum << "\n";
		}
	*/