#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()

{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	const double PI = acos(-1.0);
	double T, m, k;
	cout << "������� ����� m: ";
	cin >> m;
	cout << "������� ����������� ��������� k: ";
	cin >> k;
	T = 2 * PI * sqrt(m / k);
	cout << "��� �����: " << T << endl;
	system("pause");
	return 0;
}