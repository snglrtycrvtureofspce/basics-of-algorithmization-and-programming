#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int b, x, g;
	const int A = 1;
	const int C = 2;
	cout << "������� b: ";
	cin >> b;
	cout << "������� x: ";
	cin >> x;
	g = pow(x, 2) - A * x + b - C;
	cout << "��� �����: " << g << endl;
	system("pause");
	return 0;
}