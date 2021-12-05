#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double x, b, f, s;
	int p;
	cout << "Введите x: ";
	cin >> x;
	cout << "Введите b: ";
	cin >> b;
	cout << "Введите действия над переменной f(x):\n1-рассчитать экспоненту exp(x)\n2-рассчитать x^2" << endl;
	cin >> p;
	switch (p)
	{
	case 1:
	{
		x = exp(x);
		cout << "f(x)=exp(x): " << x << endl;
		break;
	}
	case 2:
	{
		x = pow(x, 2);
		cout << "f(x)=x^2: " << x << endl;
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
	if (1 < x * b < 10)
	{
		s = exp(x);
		cout << "Ответ идёт по ветке 1" << endl;
	}
	else
	{
		if (10 <= x * b < 40)
		{
			s = sqrt(fabs(x + 4 * b));
			cout << "Ответ идёт по ветке 2" << endl;
		}
		else
		{
			s = b * pow(x, 2);
			cout << "Ответ идёт по ветке 3" << endl;
		}
	}
	cout << "s = " << s << endl;
	system("pause");
	return 0;
}