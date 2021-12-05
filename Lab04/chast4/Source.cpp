#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double a;
	int p;
	cout << "Введите плотность материала (г/ куб.дм): ";
	cin >> a;
	if (a >= 7130 && a <= 11400)
	{
		p = 1;
	}
	else
	{
		if (a >= 1000 && a < 7130)
		{
			p = 2;
		}
		else
		{
			cout << "Введите корректное значения от 1000 до 11400" << endl;
			system("pause");
			return 0;
		}
	}
	switch (p)
	{
	case 1:
	{
		cout << "Плотность не менее 7130 г/куб.дм имеют следующие материалы:\nСвинец - 11400\nМедь - 8900\nСталь - 7850\nЦинк - 7200\nЧугун - 7130" << endl;
		break;
	}
	case 2:
	{
		cout << "Плотность менее 7130 г/куб.дм имеют следующие материалы:\nСтекло - 2600\nАлюминий - 2500\nБетон - 2400\nВода - 1000" << endl;
		break;
	}
	system("pause");
	return 0;
	}
}