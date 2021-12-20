#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int x;
	cout << "Введите целое число: ";
	cin >> x;
	if (x > -120 && x < -100)
	{
		cout << "Группа A" << endl;
	}
	else
	{
		if (x > 100 && x % 5 == 0)
		{
			cout << "Группа B" << endl;
		}
		else
		{
			if (x < 0 && x % 2 == 0)
			{
				cout << "Группа C" << endl;
			}
			else
			{
				cout << "Группа D" << endl;
			}
		}
	}
	system("pause");
	return 0;
}