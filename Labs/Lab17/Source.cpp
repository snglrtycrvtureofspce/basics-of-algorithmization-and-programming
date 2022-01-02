#include <iostream>
#include <Windows.h>

using namespace std;


int sch = 0; //кол-во структур в масиве
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
        cout << "Сначала что-нибудь введите!" << endl;
    }
    else {
        cout << "Введите товар" << endl;
        char w[20];
        cin >> w;
        bool flag = 1;
        for (int i = 0; i < sch; i++)
        {
            if (strcmp(w, l_arr[i].tovar) == 0)
            {
                cout << "Товар " << l_arr[i].tovar << endl;
                cout << "Цена " << l_arr[i].cena << endl;
                cout << "Залог " << l_arr[i].kolichestvo << endl;
                flag = 0;
            }
            if (flag)
                cout << "Поиск не дал результатов" << endl;
        }
    }
}

void poisk_po_chene()
{
    if (!sch)
    {
        cout << "Сначала что-нибудь введите!" << endl;
    }
    else {
        cout << "Введите цену" << endl;
        int w;
        cin >> w;
        bool flag = 1;
        for (int i = 0; i < sch; i++)
        {
            if (l_arr[i].cena == w)
            {

                cout << "Товар " << l_arr[i].tovar << endl;
                cout << "Цена " << l_arr[i].cena << endl;
                cout << "Залог " << l_arr[i].kolichestvo << endl;
                flag = 0;
            }
            if (flag)
                cout << "Поиск не дал результатов" << endl;
        }
    }
}

void del()
{
    cout << "\nВведите номер записи котурую надо удалить" << endl;
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
    cout << "\nВведите номер записи" << endl;
    cin >> c;
    do
    {
        cout << "1-для изменения товара" << endl;
        cout << "2-для изменения цены" << endl;
        cout << "3-для изменения колличества" << endl;
        cout << "4-для выхода из режима редактирования " << endl;
        cout << "Введите: ";
        cin >> per;
        switch (per)
        {
        case 1: cout << "Товар " << endl;
            cin >> l_arr[c - 1].tovar;
            break;
        case 2: cout << "Цена ";
            cin >> l_arr[c - 1].cena;
            break;
        case 3: cout << "Колличество ";
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
        cout << "Запись номер " << sch + 1 << endl;;
        cout << "Товар" << endl;
        cin >> l_arr[sch].tovar;
        cout << "Цена" << endl; // добавить проверки
        cin >> l_arr[sch].cena;
        cout << "Колличество " << endl;
        cin >> l_arr[sch].kolichestvo;
        sch++;
    }
    else {
        cout << "Введено максимальное кол-во записей";
    }
}

void out()
{
    setlocale(LC_CTYPE, "Russian");
    int sw;  // переключатель
    int o;   // номер структур которые надо выводить
    cout << "1-если хотите вывести какую-либо запись" << endl;
    cout << "2-если хотите вывести все записи" << endl;
    cout << "Введите: ";
    cin >> sw;
    if (sw == 1)
    {
        cout << "Введите номер записи, которую нужно вывести" << endl;
        cout << "Введите: ";
        cin >> o;
        o--;
        cout << "Товар " << l_arr[o].tovar << endl;
        cout << "Цена " << l_arr[o].cena << endl;
        cout << "Колличество " << l_arr[o].kolichestvo << endl;
    }
    if (sw == 2)
    {
        for (int i = 0; i < sch; i++)
        {
            cout << "Товар " << l_arr[i].tovar << endl;
            cout << "Цена " << l_arr[i].cena << endl;
            cout << "Колличество " << l_arr[i].kolichestvo << endl;
        }
    }
    cout << endl;
}

int main() {
    setlocale(LC_ALL, "");
    
    char p;
    cout << "Введите номер: ";
    cin >> p;
    switch (p) {
    case '1': {
        cout << "Записей пока нет" << endl;
        do {
            cout << "\t\t\t\t\tСклад" << endl;
            cout << "_______________________________________________________________________________________" << endl;
            cout << "1 - Ввод новой записи " << '\t';
            cout << "2 - Вывод записи(ей) " << '\t';
            cout << "3 - Изменение записи " << endl;
            cout << "4 - Удаление записи " << '\t';
            cout << "5 - Поиск по товару " << '\t';
            cout << "6 - Поиск по цене " << endl;
            cout << "\t\t\t7 - Выход из программы" << endl;
            cout << "Введите: ";
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
                cout << "Завершение программы..." << endl;
                system("pause");
                return 0;
            }
            default: {
                cout << "Не верный номер!" << endl;
                cout << "Введите значение ещё раз." << endl;
            }
            }
        } while (choice != '7');
        break;
    }
    default: {
        cout << "Не верный номер" << endl;
        break;
    }
    }
    system("pause");
    return 0;
}