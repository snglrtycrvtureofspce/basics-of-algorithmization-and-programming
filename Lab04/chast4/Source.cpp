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
	cout << "������� ��������� ��������� (�/ ���.��): ";
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
			cout << "������� ���������� �������� �� 1000 �� 11400" << endl;
			system("pause");
			return 0;
		}
	}
	switch (p)
	{
	case 1:
	{
		cout << "��������� �� ����� 7130 �/���.�� ����� ��������� ���������:\n������ - 11400\n���� - 8900\n����� - 7850\n���� - 7200\n����� - 7130" << endl;
		break;
	}
	case 2:
	{
		cout << "��������� ����� 7130 �/���.�� ����� ��������� ���������:\n������ - 2600\n�������� - 2500\n����� - 2400\n���� - 1000" << endl;
		break;
	}
	system("pause");
	return 0;
	}
}