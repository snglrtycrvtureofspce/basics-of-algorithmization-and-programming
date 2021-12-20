#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()

{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double c, d, k, y, z, x;
	cout << "¬ведите c: ";
	cin >> c;
	cout << "¬ведите z, если z > 0, получим x = z^2 - z, а если z >= 0, получим x = z^3: ";
	cin >> z;
	cout << "¬ведите d: ";
	cin >> d;
	cout << "¬ведите k: ";
	cin >> k;

	if (z < 0)
	{
		x = pow(z, 2) - z;
		cout << "–ешение проводилось по первой ветке" << endl;
	}
	else
	{
		if (z >= 0)
		{
			x = pow(z, 3);
			cout << "–ешение проводилось по второй ветке" << endl;
		}
	}
	y = pow(sin(c * x + pow(d, 2) + k * pow(x, 2)), 3);
	cout << "y = " << y << endl;
	system("pause");
	return 0;
}