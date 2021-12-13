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
	cout << "¬ведите код государства: ";
	cin >> a.title;
	cout << "\n¬ведите название государства: ";
	cin >> a.name;
	cout << "\n¬ведите площадь государства: ";
	cin >> a.square;
	cout << "\n¬ведите им€ президента в государстве: ";
	cin >> a.president;
	cout << "\n¬ведите пол президента: ";
	cin >> a.sex;
	cout << "____________________________________________________________" << endl;
	cout << a.title << "\t|\t";
	cout << a.name << "\t|\t";
	cout << a.square << "\t|\t";
	cout << a.president << "\t|\t";
	if (a.sex == true) {
		cout << "мужской" << "\t|\n";
	}
	else {
		cout << "женский" << "\t|\n";
	}

	state* pA = &a;
	state& rA = a;
	cout << pA->title << "\t|\t" << a.name << "\t|\t" << rA.square << "\t|\t" << (&a)->president << "\t|\t" << a.sex << endl;
	system("pause");
	return 0;
}
