#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()

{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double m, r, e, t2;
	cout << "Введите m: ";
	cin >> m;
	cout << "Введите r: ";
	cin >> r;
	cout << "Введите e: ";
	cin >> e;
	if (r <= m < 2 * r)
	{
		t2 = sqrt(fabs(3 * m - 5 * r) * pow(e, m / r));
		cout << "Ответ идёт по ветке 1, ответ: " << t2 << endl;
	}
	else
	{
		if (m > 2 * r)
		{
			t2 = sqrt(fabs(3 * m - 5 * r) * pow(e, r / m));
			cout << "Ответ идёт по ветке 2, ответ: " << t2 << endl;
		}
		else
		{
			cout << "Для таких значений решения не предусмотрено." << endl;
			system("pause");
			return 0;
		}
	}
	system("pause");
	return 0;
}
