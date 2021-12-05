#include <iostream>
#include <Windows.h>
#include <ctime>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	int arr[25][11];
	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 11; j++) {
			arr[i][j] = 11 + rand() % 9;
		}
	}
	cout << "Show massiv: " << endl;
	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 11; j++) {
			cout << arr[i][j] << ' ' << ';' << ' ';
		}
		cout << '\n';
	}
	cout << "Show reverse massiv: " << endl;
	for (int i = 25 - 1; i >= 0 ; i--) {
		for (int j = 11 - 1; j >= 0 ; j--) {
			cout << arr[i][j] << ' ' << ';' << ' ';
		}
		cout << '\n';
	}
	system("pause");
	return 0;
}