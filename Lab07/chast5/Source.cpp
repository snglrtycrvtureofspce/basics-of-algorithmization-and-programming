#include <iostream>
using namespace std;

int main() {
	const int m = 21, n = 8;
	int arr[m][n];
	int s = -49;
	for (int i = 0; i < m; i++) {
		for (int j = 0; i < n; j++) {
			arr[i][j] = s;
			s = s + 7;
		}
	}
	cout << "Print massiv: " << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; i < n; j++) {
			cout << arr[i][j] << " ";
			cout << endl;
		}
	}
	cout << "Print new massiv: ";
	for (int i = 0; i < m; i++) {
		for (int j = 0; i < n; j++) {
			arr[i][j] = arr[i][j] + 3;
			cout << arr[i][j] << ";";
		}
	}
	system("pause");
	return 0;
}