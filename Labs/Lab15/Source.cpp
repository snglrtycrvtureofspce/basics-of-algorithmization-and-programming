#include <iostream>
#include <cmath>
using namespace std;

struct state {
	int title;
	char name[100];
	double square;
	char president[100];
	bool sex;
};


int main() {
	setlocale(LC_ALL, "");
	state a{};
	cout << "������� ��� �����������: ";
	cin >> a.title;
	cout << "\n������� �������� �����������: ";
	cin >> a.name;
	cout << "\n������� ������� �����������: ";
	cin >> a.square;
	cout << "\n������� ��� ���������� � �����������: ";
	cin >> a.president;
	cout << "\n������� ��� ����������: ";
	cin >> a.sex;
	cout << "____________________________________________________________" << endl;
	cout << a.title << "\t|\t";
	cout << a.name << "\t|\t";
	cout << a.square << "\t|\t";
	cout << a.president << "\t|\t";
	if (a.sex == true) {
		cout << "�������" << "\t|\n";
	}
	else {
		cout << "�������" << "\t|\n";
	}

	state* pA = &a;
	state& rA = a;
	cout << pA->title << "\t|\t" << a.name << "\t|\t" << rA.square << "\t|\t" << (&a)->president << "\t|\t" << a.sex << endl;
	system("pause");
	return 0;
}
