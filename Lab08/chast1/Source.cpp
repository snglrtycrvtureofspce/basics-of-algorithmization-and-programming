#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n,m;
	do {
		cout << "������� ������ ������� �������: ";
		cin >> n;
		cout << '\n';
	}
	while(n <= 0);
	do {
		cout << "������� ������ ������� �������: ";
		cin >> m;
		cout << '\n';
	} while (m <= 0);
	int* A = new int[n];
	int* B = new int[m];
	if (A == NULL) {
		cout << "�� ������� �������� ������ ��� ������ ������.\n";
		system("pause");
		return 0;
	}
	if (B == NULL) {
		cout << "�� ������� �������� ������ ��� ������ ������.\n";
		system("pause");
		return 0;
	}
	cout << "������� �������� ������� �������: " << endl;
	for (int i = 0; i < n; i++) {
		cout << "A[" << i << "] = ";
		cin >> A[i];
	}
	cout << "������� �������� ������� �������: " << endl;
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
		cout << "������� ������ ������: " << '\n';
		for (int i = 0; i < n; i++) {
			cout << "A[" << i << "] = " << A[i] << '\n';
		}
		cout << "���������� �������� �������� ������� �������: " << max << " � �������� � �������� � " << iMax << endl;
	}
	else {
		cout << "������� ������ ������: " << '\n';
		for (int i = 0; i < m; i++) {
			cout << "B[" << i << "] = " << B[i] << '\n';
		}
		cout << "���������� �������� �������� ������� �������: " << max2 << " � �������� � �������� � " << iMax2 << endl;
	}
	delete[] A;
	delete[] B;
	A = NULL;
	B = NULL;
	system("pause");
	return 0;
}