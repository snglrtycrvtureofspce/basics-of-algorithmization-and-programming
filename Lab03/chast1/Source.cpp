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
	cout << "������� x: ";
	cin >> x;
	cout << "������� y: ";
	cin >> y;
	cout << "����: \n1-���������� sh(x)\n2-���������� x^2\n3-���������� ���������� exp(x)\n�������� ����� ����: ";
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
		cout << "������ �������� ���.\n";
		system("pause");
		return 0;
		break;
	}
	}
	cout << "f(x) = " << x << endl;
	if (x > y)
	{
		r = pow((fabs(x - y)), 1.0 / 3) + tan(x);
		cout << "����� ��� �� ������ �����\n";
	}
	else
	{
		if (x < y)
		{
			r = (pow(y - x, 3) + cos(x));
			cout << "����� ��� �� ������ �����\n";
		}
		else
		{
			if (x == y)
			{
				r = pow(x + y, 2) + pow(x, 3);
				cout << "����� ��� �� ������� �����\n";
			}
			else
			{
				cout << "����� ���������� ����������, ������� ����� ��������";
				system("pause");
				return 0;
			}
		}
	}
	cout << "��������� ����������: " << r << endl;
	system("pause");
	return 0;
}