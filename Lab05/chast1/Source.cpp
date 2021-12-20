#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double x, a, b, n, i, Y, S;
	for (i = 0, a = 0.1, b = 1, n = 100; i < 10; i++, a++, b++, n++)
	{
		x = (b - a) / n;
		Y = exp(2 * x);
		S = 1 + 2 * x / i;
		cout << "Y(x) = " << Y << "\tS(x) = " << S << endl;
	}
	system("pause");
	return 0;
}