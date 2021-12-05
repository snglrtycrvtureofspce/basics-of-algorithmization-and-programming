#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()

{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double a, r, x, y;
	int p;
	cout << "Введите x: ";
	cin >> x;
	cout << "Введите y: ";
	cin >> y;
	cout << "Меню: \n1-рассчитать sh(x)\n2-рассчитать x^2\n3-рассчитать экспоненту exp(x)\nВыберите пункт меню: ";
	cin >> p;
	switch (p)
	{
	case 1:
	{
		x = sinh(x);
		cout << p << endl;
		break;
	}
	case 2:
	{
		x = pow(x, 2);
		break;
	}
	case 3:
	{
		x = exp(x);
		break;
	}
	default:
	{
		cout << "Такого варианта нет.\n";
		system("pause");
		return 0;
		break;
	}
	}
	cout << "f(x) = " << x << endl;
	if (x > y)
	{
		r = pow((fabs(x - y)), 1.0 / 3) + tan(x);
		cout << "Ответ идёт по первой ветке\n";
	}
	else
	{
		if (x < y)
		{
			r = (pow(y - x, 3) + cos(x));
			cout << "Ответ идёт по второй ветке\n";
		}
		else
		{
			if (x == y)
			{
				r = pow(x + y, 2) + pow(x, 3);
				cout << "Ответ идёт по третьей ветке\n";
			}
			else
			{
				cout << "Ответ невозможно определить, введите новые значения";
				system("pause");
				return 0;
			}
		}
	}
	cout << "Результат вычислений: " << r << endl;
	system("pause");
	return 0;
}