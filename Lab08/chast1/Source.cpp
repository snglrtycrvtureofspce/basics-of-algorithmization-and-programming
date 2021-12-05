#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n,m;
	do {
		cout << "Введите размер первого массива: ";
		cin >> n;
		cout << '\n';
	}
	while(n <= 0);
	do {
		cout << "Введите размер второго массива: ";
		cin >> m;
		cout << '\n';
	} while (m <= 0);
	int* A = new int[n];
	int* B = new int[m];
	if (A == NULL) {
		cout << "Не удалось выделить память под первый массив.\n";
		system("pause");
		return 0;
	}
	if (B == NULL) {
		cout << "Не удалось выделить память под второй массив.\n";
		system("pause");
		return 0;
	}
	cout << "Введите значения первого массива: " << endl;
	for (int i = 0; i < n; i++) {
		cout << "A[" << i << "] = ";
		cin >> A[i];
	}
	cout << "Введите значения второго массива: " << endl;
	for (int i = 0; i < m; i++) {
		cout << "B[" << i << "] = ";
		cin >> B[i];
	}
	cout << "_______________________________________________________\n";
	int max = A[0], max2 = B[0],iMax = 0,iMax2 = 0;
	for (int i = 0; i < n; i++) {
		if (A[i] > max) {
			max = A[i];
			iMax = i;
		}
	}
	for (int i = 0; i < n; i++) {
		if (B[i] > max) {
			max2 = B[i];
			iMax2 = i;
		}
	}
	if (max > max2) {
		cout << "Выведен первый массив: " << '\n';
		for (int i = 0; i < n; i++) {
			cout << "A[" << i << "] = " << A[i] << '\n';
		}
		cout << "Наибольшее значение элемента первого массива: " << max << " у элемента с индексом № " << iMax << endl;
	}
	else {
		cout << "Выведен второй массив: " << '\n';
		for (int i = 0; i < m; i++) {
			cout << "B[" << i << "] = " << B[i] << '\n';
		}
		cout << "Наибольшее значение элемента второго массива: " << max2 << " у элемента с индексом № " << iMax2 << endl;
	}
	delete[] A;
	delete[] B;
	A = NULL;
	B = NULL;
	system("pause");
	return 0;
}