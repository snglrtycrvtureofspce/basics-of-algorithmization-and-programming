#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int x, y, R;
	cout << "������� x: ";
	cin >> x;
	cout << "������� y: ";
	cin >> y;
	R = sqrt(10 * x - 5) / 3 * y;
	cout << "��� �����: " << R << endl;
	system("pause");
	return 0;
}