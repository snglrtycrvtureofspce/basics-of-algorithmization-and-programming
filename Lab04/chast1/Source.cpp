#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()

{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double m, r, e, t2;
	cout << "������� m: ";
	cin >> m;
	cout << "������� r: ";
	cin >> r;
	cout << "������� e: ";
	cin >> e;
	if (r <= m < 2 * r)
	{
		t2 = sqrt(fabs(3 * m - 5 * r) * pow(e, m / r));
		cout << "����� ��� �� ����� 1, �����: " << t2 << endl;
	}
	else
	{
		if (m > 2 * r)
		{
			t2 = sqrt(fabs(3 * m - 5 * r) * pow(e, r / m));
			cout << "����� ��� �� ����� 2, �����: " << t2 << endl;
		}
		else
		{
			cout << "��� ����� �������� ������� �� �������������." << endl;
			system("pause");
			return 0;
		}
	}
	system("pause");
	return 0;
}
