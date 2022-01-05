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
        cout << "������� � ��� ����������? - ";
        cin >> count;
        if (count < 1) {
            cout << "���������� ���������� ������ ���� ������ ����" << endl;
        }
    } while (count < 1);
    Worker* Firm = new Worker[count];
    if (Firm == NULL) {
        cout << "������ ����, ������.." << endl;
        return 0;
    }
    else {
        cout << endl;
    }

    for (int i = 0, workerInfo = 1; i < count; i++) {
        cout << "______________________________________________________" << endl;
        cout << "������� ������� ���������: ";
        cin >> Firm[i].age;
        cout << "\n������� ��� ���������: ";
        cin >> Firm[i].weight;
        cout << "\n������� ��� ���������: ";
        cin >> Firm[i].name;
        cout << "\n������� ��� ���������: (0 - ������� 1 - �������): ";
        cin >> Firm[i].sex;
        cout << "\n������� ����� ���������: ";
        cin >> Firm[i].salary;
        if (count > 1) {
            cout << "______________________________________________________" << endl;
            workerInfo++;
            cout << "�������� " << workerInfo << " ���������:" << endl;
            cout << "______________________________________________________" << endl;
        }
        else {
            cout << endl;
        }
    }
    cout << "� ����� ����� " << count << " �����������" << "\n�� ��������: " << endl;
    for (int i = 0; i < count; i++) {
        int workerInfo = 1;
        cout << "�������: " << Firm[i].age << endl;
        cout << "���: " << Firm[i].weight << endl;
        cout << "���: " << Firm[i].name << endl;
        if (Firm[i].sex == false) {
            cout << "���: �������" << endl;
        }
        else {
            cout << "���: �������" << endl;
        }
        cout << "�����: " << Firm[i].salary << endl;
        if (count > 1) {
            cout << "______________________________________________________" << endl;
            cout << "�������� " << workerInfo + 1 << " ���������:" << endl;
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