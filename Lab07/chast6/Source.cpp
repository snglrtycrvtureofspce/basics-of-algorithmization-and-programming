#include<iostream>
#include<Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double arr[3][6];
	cout << "¬ведите значени€ массива: " << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr[i][j] << ' ' << ';' << ' ';
		}
		cout << '\n';
	}
	cout << "New vision of array" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if ((i && j) % 2 != 0) {
				cout << arr[i][j] << ' ' << ';' << ' ';
			}
		}
		cout << '\n';
	}
	system("pause");
	return 0;
}