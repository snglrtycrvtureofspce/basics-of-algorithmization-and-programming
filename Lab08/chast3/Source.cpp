#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int n = 10;
	int* A = new int[n];
	if (A == NULL) {
		cout << "Не удалось выделить память под первый массив.\n";
		system("pause");
		return 0;
	}
	cout << "Введите значения массива: " << endl;
	for (int i = 0; i < n; i++) {
		cout << "A[" << i << "] = ";
		cin >> A[i];
	}
	cout << "_______________________________________________________\n";
	int min = A[0], iMin = 0, xd = 0;
	for (int i = 0; i < n; i++) {
		if (A[i] < min) {
			min = A[i];
			xd += 1;
		}
	}
	for (int i = 0; i < n; i++) {
		if (A[i] > 0) {
			A[i] = min;
		}
	}
	for (int i = 0; i < n; i++) {
		cout << A[i] << '\n';
	}
	delete[] A;
	A = NULL;
	system("pause");
	return 0;
}