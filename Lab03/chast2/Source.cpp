#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	float x, y, R, hyph;
	cout << "Введите координаты точки и радиус круга" << endl;
	cout << "x= ";
	cin >> x;
	cout << "y= ";
	cin >> y;
	cout << "r= ";
	cin >> R;
	hyph = sqrt(pow(x, 2) + pow(y, 2));

	if (hyph <= R) {
		cout << "Точка принадлежит кругу" << endl;
	}
	else
		cout << "Точка не принадлежит кругу" << endl;
	system("pause");
	return 0;
}