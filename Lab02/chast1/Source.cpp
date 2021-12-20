#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double pi, z1, z2, a, x;
	pi = 3.141592653589793;
	cout << "Введите a: ";
	cin >> a;
	cout << "Введите x: ";
	cin >> x;
	z1 = pow(cos(x), 2) * (3 / 8 * pi - a / 4) - pow(cos(x), 2) * (11 / 8 * pi + a / 4);
	z2 = sqrt(2) / 2 * sin(a / 2);
	cout << "Ответ Z1:" << z1 << endl;
	cout << "Ответ Z2:" << z2 << endl;
	system("pause");
	return 0;
}
