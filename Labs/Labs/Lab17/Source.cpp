#include <iostream>
#include <Windows.h>

using namespace std;

struct Worker {
	int age;
    double salary;
	double weight;
	char name[100];
	bool sex;
};

int main() {
	setlocale(LC_ALL, "");

    int count = 0;
    do {
        cout << "Сколько у вас работников? - ";
        cin >> count;
        if (count < 1) {
            cout << "Количество работников должно быть больше нуля" << endl;
        }
    } while (count < 1);
    Worker* Firm = new Worker[count];
    if (Firm == NULL) {
        cout << "Память друг, память.." << endl;
        return 0;
    }
    else {
        cout << endl;
    }

    for (int i = 0, workerInfo = 1; i < count; i++) {
        cout << "______________________________________________________" << endl;
        cout << "Введите возраст работника: ";
        cin >> Firm[i].age;
        cout << "\nВведите вес работника: ";
        cin >> Firm[i].weight;
        cout << "\nВведите имя работника: ";
        cin >> Firm[i].name;
        cout << "\nВведите пол работника: (0 - Женский 1 - Мужской): ";
        cin >> Firm[i].sex;
        cout << "\nВведите оклад работника: ";
        cin >> Firm[i].salary;
        if (count > 1) {
            cout << "______________________________________________________" << endl;
            workerInfo++;
            cout << "Описание " << workerInfo << " работника:" << endl;
            cout << "______________________________________________________" << endl;
        }
        else {
            cout << endl;
        }
    }
    cout << "В вашей фирме " << count << " сотрудников" << "\nИх описание: " << endl;
    for (int i = 0; i < count; i++) {
        int workerInfo = 1;
        cout << "Возраст: " << Firm[i].age << endl;
        cout << "Вес: " << Firm[i].weight << endl;
        cout << "Имя: " << Firm[i].name << endl;
        if (Firm[i].sex == false) {
            cout << "Пол: Женский" << endl;
        }
        else {
            cout << "Пол: Мужской" << endl;
        }
        cout << "Оклад: " << Firm[i].salary << endl;
        if (count > 1) {
            cout << "______________________________________________________" << endl;
            cout << "Описание " << workerInfo + 1 << " работника:" << endl;
            cout << "______________________________________________________" << endl;
        }
        else {
            cout << endl;
        }
    }

    /* for (int i = 0; i < count; i++) {
        for (int j = 0; j < count - 1; j++) {
            if (Firm[j].age > Firm[j + 1].age) {
                swap(Firm[j].age, Firm[j + 1].age);
            }
        }
    }

    for (int i = 0; i < count; i++) {
        cout << Firm[i].age << endl;
    }*/

    delete[] Firm;
    Firm = NULL;

    system("pause");
    return 0;
}