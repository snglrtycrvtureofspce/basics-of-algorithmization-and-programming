#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int x;
	cout << "������� ����� �����: ";
	cin >> x;
	if (x > -120 && x < -100)
	{
		cout << "������ A" << endl;
	}
	else
	{
		if (x > 100 && x % 5 == 0)
		{
			cout << "������ B" << endl;
		}
		else
		{
			if (x < 0 && x % 2 == 0)
			{
				cout << "������ C" << endl;
			}
			else
			{
				cout << "������ D" << endl;
			}
		}
	}
	system("pause");
	return 0;
}