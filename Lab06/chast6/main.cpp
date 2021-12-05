#include <iostream>
#include <Windows.h>
using namespace std;

int main(){
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int SIZE = 14;
    int arr[SIZE];

    cout << "Введите элементы массива: " << endl;
    for(int i = 0; i < SIZE; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < SIZE; i++){
        if(i % 7 == 0)//////////////////////
        {
            cout << "Кратен 7: " << arr[i] / 11000 << endl;
        }
        else{
            cout << "vector[" << i << "] = " << arr[i] << endl;
        }
    }
    system("pause");
    return 0;
    
}