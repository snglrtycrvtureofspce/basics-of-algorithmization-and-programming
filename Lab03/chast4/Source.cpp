#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int x, y, ma, mi, t;
	cout << "������� x: ";
	cin >> x;
	cout << "������� y: ";
	cin >> y;
	ma = max(y, 0);
	mi = min(x, 5);
	t = ma * (mi, ma) / 5;
	if (t > 0)
	{
		cout << "��� �����: " << t << endl;
	}
	else
	{
		if (t == 0)
		{
			cout << "���� ����� ����� ����� ����, ������� ��������� ��������" << endl;
			cout << "������� x: ";
			cin >> x;
			cout << "������� y: ";
			cin >> y;
			ma = max(y, 0);
			mi = min(x, 5);
			t = ma * (mi, ma) / 5;
			cout << "��� �����: " << t << endl;
		}
	}
	system("pause");
	return 0;
}