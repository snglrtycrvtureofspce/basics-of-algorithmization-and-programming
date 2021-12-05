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
	cout << "Введите b: ";
	cin >> b;
	cout << "Введите x: ";
	cin >> x;
	g = pow(x, 2) - A * x + b - C;
	cout << "Ваш ответ: " << g << endl;
	system("pause");
	return 0;
}