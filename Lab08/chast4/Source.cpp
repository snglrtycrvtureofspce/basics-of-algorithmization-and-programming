#include <iostream>
#include <Windows.h>
#include <malloc.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int* A = new int[] {33, 0, 28, -16, -32, 74, 0, -30, 99, 0};
	int max = A[0], iMax = 0;
	for (int i = 0; i < (_msize(A) / sizeof(A[0])); i++) {
		if (A[i] > max) {
			max = A[i];
			iMax = i;
		}
	}
	cout << "Номер максимального элемента массива: " << max << '\n';
	cout << "_______________________________________________________\n";
	int mul = 1;
	for (int i = 0; i < (_msize(A) / sizeof(A[0])); i++) {
		if (A[i] == 0) {
			break;
		}
		mul *= A[i];
	}
	cout << "Произведение элементов массива, расположенных между первым и вторым нулевыми элементами: " << mul << '\n';
	cout << "_______________________________________________________\n";
	/*
	int p, S[10], j = 0, k = 0;
	for (int i = 0; i < 10; i++)  //Переставляем нечетные цифры
	{
		p = i % 2;
		if (p == 0)
		{
			A[j] = S[i];
			j++;
			k++;
			S[i] = 0;
		}
	}
	for (int i = 0; i < 10; i++)  //Переставляем четные цифры
	{
		if (S[i] != 0)
		{
			A[k] = S[i];
			k++;
		}
	}
	for (int i = 0; i < (_msize(A) / sizeof(A[0])); i++) {
		cout << "A[" << i << "] = " << A[i] << '\n';
	}
	*/
	delete[] A;
	A = NULL;
	system("pause");
	return 0;
}