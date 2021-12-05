#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int x, y, ma, mi, t;
	cout << "Введите x: ";
	cin >> x;
	cout << "Введите y: ";
	cin >> y;
	ma = max(y, 0);
	mi = min(x, 5);
	t = ma * (mi, ma) / 5;
	if (t > 0)
	{
		cout << "Ваш ответ: " << t << endl;
	}
	else
	{
		if (t == 0)
		{
			cout << "Ваше ответ будет равен нулю, введите повторные значения" << endl;
			cout << "Введите x: ";
			cin >> x;
			cout << "Введите y: ";
			cin >> y;
			ma = max(y, 0);
			mi = min(x, 5);
			t = ma * (mi, ma) / 5;
			cout << "Ваш ответ: " << t << endl;
		}
	}
	system("pause");
	return 0;
}