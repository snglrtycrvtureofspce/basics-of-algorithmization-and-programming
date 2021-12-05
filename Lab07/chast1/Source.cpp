#include <iostream>
#include <Windows.h>
#include <ctime>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	int arr[3][4];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			arr[i][j] = rand();
			cout << arr[i][j] << '\t';
		}
		cout << '\n';
	}
	int* min1 = min(arr[2][0]);
	int* min2 = min(arr[4][0]);
	min2 = min1;
	cout << 'n';
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << arr[i][j] << '\t';
		}
		cout << '\n';
	}
	system("pause");
	return 0;
}