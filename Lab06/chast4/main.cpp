#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    const int SIZE = 10;
    double massiv[SIZE];
    cout << "Введите данные массива: " << endl;
    for(int i = 0; i < SIZE; i++)
    {
        cin >> massiv[i];
    }
    for(int i = 0; i < SIZE; i++)
    {
        cout << "massiv" << "[" << i << "] = " << massiv[i] << endl;
    }
    cout << "\n";
    for(int i = 0; i < SIZE; i++)
    {
        if(i % 4 != 0){
            continue;
        }
        cout << "massiv" << "[" << i << "] = " << massiv[i] << endl;
    }
    
    return 0;
    system("pause");
}