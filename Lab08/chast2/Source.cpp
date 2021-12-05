#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n;
	do {
		cout << "������� ������ �������: ";
		cin >> n;
		cout << '\n';
	} while (n <= 0);
	int* A = new int[n];
	if (A == NULL) {
		cout << "�� ������� �������� ������ ��� ������ ������.\n";
		system("pause");
		return 0;
	}
	cout << "������� �������� ������� �������: " << endl;
	for (int i = 0; i < n; i++) {
		cout << "A[" << i << "] = ";
		cin >> A[i];
	}
	cout << "_______________________________________________________\n";
	int min = A[0], iMin = 0, sum = 0, xd = 0;
	for (int i = 0; i < n; i++) {
		if (A[i] < min) {
			min = A[i];
			xd += 1;
		}
	}
	for (int i = 0; i < xd; i++) {
		sum += A[i];
	}
	cout << "����� ��������� �� ������������ �������� �������: " << sum << '\n';
	delete[] A;
	A = NULL;
	system("pause");
	return 0;
}