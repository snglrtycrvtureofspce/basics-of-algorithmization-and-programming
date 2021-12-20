#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	setlocale(LC_ALL,"");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double arr[2][4];
	cout << "Введите значения массива: " << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			cout << "arr[" << i << "," << j << "] = ";
			cin >> arr[i][j];
			cout << '\n';
		}
	}
	cout << "Print array: " << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			cout << arr[i][j] << '\t';
		}
		cout << '\n';
	}
	system("pause");
	return 0;
}