#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()

{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double c, d, k, y, z, x;
	cout << "������� c: ";
	cin >> c;
	cout << "������� z, ���� z > 0, ������� x = z^2 - z, � ���� z >= 0, ������� x = z^3: ";
	cin >> z;
	cout << "������� d: ";
	cin >> d;
	cout << "������� k: ";
	cin >> k;

	if (z < 0)
	{
		x = pow(z, 2) - z;
		cout << "������� ����������� �� ������ �����" << endl;
	}
	else
	{
		if (z >= 0)
		{
			x = pow(z, 3);
			cout << "������� ����������� �� ������ �����" << endl;
		}
	}
	y = pow(sin(c * x + pow(d, 2) + k * pow(x, 2)), 3);
	cout << "y = " << y << endl;
	system("pause");
	return 0;
}