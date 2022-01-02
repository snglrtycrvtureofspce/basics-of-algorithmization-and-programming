#include <iostream>
#include <Windows.h>

using namespace std;


int sch = 0; //���-�� �������� � ������
char choice = 0;

struct lombard
{
    char tovar[20];
    int cena;
    int kolichestvo;
    bool empty;

}l_arr[20];

void poisk_po_tovary()
{
    if (!sch)
    {
        cout << "������� ���-������ �������!" << endl;
    }
    else {
        cout << "������� �����" << endl;
        char w[20];
        cin >> w;
        bool flag = 1;
        for (int i = 0; i < sch; i++)
        {
            if (strcmp(w, l_arr[i].tovar) == 0)
            {
                cout << "����� " << l_arr[i].tovar << endl;
                cout << "���� " << l_arr[i].cena << endl;
                cout << "����� " << l_arr[i].kolichestvo << endl;
                flag = 0;
            }
            if (flag)
                cout << "����� �� ��� �����������" << endl;
        }
    }
}

void poisk_po_chene()
{
    if (!sch)
    {
        cout << "������� ���-������ �������!" << endl;
    }
    else {
        cout << "������� ����" << endl;
        int w;
        cin >> w;
        bool flag = 1;
        for (int i = 0; i < sch; i++)
        {
            if (l_arr[i].cena == w)
            {

                cout << "����� " << l_arr[i].tovar << endl;
                cout << "���� " << l_arr[i].cena << endl;
                cout << "����� " << l_arr[i].kolichestvo << endl;
                flag = 0;
            }
            if (flag)
                cout << "����� �� ��� �����������" << endl;
        }
    }
}

void del()
{
    cout << "\n������� ����� ������ ������� ���� �������" << endl;
    int k;
    cin >> k;
    for (int i = k - 1; i < sch; i++)
    {
        l_arr[i] = l_arr[i + 1];
    }
    sch--;
}

void change()
{
    int c = 0, per = 0;
    cout << "\n������� ����� ������" << endl;
    cin >> c;
    do
    {
        cout << "1-��� ��������� ������" << endl;
        cout << "2-��� ��������� ����" << endl;
        cout << "3-��� ��������� �����������" << endl;
        cout << "4-��� ������ �� ������ �������������� " << endl;
        cout << "�������: ";
        cin >> per;
        switch (per)
        {
        case 1: cout << "����� " << endl;
            cin >> l_arr[c - 1].tovar;
            break;
        case 2: cout << "���� ";
            cin >> l_arr[c - 1].cena;
            break;
        case 3: cout << "����������� ";
            cin >> l_arr[c - 1].kolichestvo;
            break;
            cin >> per;
        }
    } while (per != 4);
}

void dobavl()
{
    if (sch < 20)
    {
        cout << "������ ����� " << sch + 1 << endl;;
        cout << "�����" << endl;
        cin >> l_arr[sch].tovar;
        cout << "����" << endl; // �������� ��������
        cin >> l_arr[sch].cena;
        cout << "����������� " << endl;
        cin >> l_arr[sch].kolichestvo;
        sch++;
    }
    else {
        cout << "������� ������������ ���-�� �������";
    }
}

void out()
{
    setlocale(LC_CTYPE, "Russian");
    int sw;  // �������������
    int o;   // ����� �������� ������� ���� ��������
    cout << "1-���� ������ ������� �����-���� ������" << endl;
    cout << "2-���� ������ ������� ��� ������" << endl;
    cout << "�������: ";
    cin >> sw;
    if (sw == 1)
    {
        cout << "������� ����� ������, ������� ����� �������" << endl;
        cout << "�������: ";
        cin >> o;
        o--;
        cout << "����� " << l_arr[o].tovar << endl;
        cout << "���� " << l_arr[o].cena << endl;
        cout << "����������� " << l_arr[o].kolichestvo << endl;
    }
    if (sw == 2)
    {
        for (int i = 0; i < sch; i++)
        {
            cout << "����� " << l_arr[i].tovar << endl;
            cout << "���� " << l_arr[i].cena << endl;
            cout << "����������� " << l_arr[i].kolichestvo << endl;
        }
    }
    cout << endl;
}

int main() {
    setlocale(LC_ALL, "");
    
    char p;
    cout << "������� �����: ";
    cin >> p;
    switch (p) {
    case '1': {
        cout << "������� ���� ���" << endl;
        do {
            cout << "\t\t\t\t\t�����" << endl;
            cout << "_______________________________________________________________________________________" << endl;
            cout << "1 - ���� ����� ������ " << '\t';
            cout << "2 - ����� ������(��) " << '\t';
            cout << "3 - ��������� ������ " << endl;
            cout << "4 - �������� ������ " << '\t';
            cout << "5 - ����� �� ������ " << '\t';
            cout << "6 - ����� �� ���� " << endl;
            cout << "\t\t\t7 - ����� �� ���������" << endl;
            cout << "�������: ";
            cin >> choice;
            switch (choice) {
            case '1': {
                dobavl();
                break;
            }
            case '2': {
                out();
                break;
            }
            case '3': {
                change();
                break;
            }
            case '4': {
                del();
                break;
            }
            case '5': {
                poisk_po_tovary();
                break;
            }
            case '6': {
                poisk_po_chene();
                break;
            }
            case '7': {
                cout << "���������� ���������..." << endl;
                system("pause");
                return 0;
            }
            default: {
                cout << "�� ������ �����!" << endl;
                cout << "������� �������� ��� ���." << endl;
            }
            }
        } while (choice != '7');
        break;
    }
    default: {
        cout << "�� ������ �����" << endl;
        break;
    }
    }
    system("pause");
    return 0;
}