#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	char arr[4][2] = { {'s', 'q'},
					{'w','t'},
					{'r','g'},
					{'y','g'} };
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			cout << arr[i][j] << '\t';
		}
		cout << '\n';
	}

	system("pause");
	return 0;
}