#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double w, x, y, z;
	x = 0.4 * pow(10, 4);
	y = 0.875;
	z = 0.475 * pow(10, -3);
	w = pow((fabs(cos(x) - cos(y))), (1 + 2 * pow(sin(y), 2)) * (1 + z + (pow(z, 2)) / 2) + (pow(z, 3) / 3) + (pow(z, 4) / 4));
	cout << "Ваш ответ: " << w << endl;
	system("pause");
	return 0;
}
