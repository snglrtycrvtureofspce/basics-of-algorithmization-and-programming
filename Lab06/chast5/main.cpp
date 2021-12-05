#include <iostream>
#include <ctime>
using namespace std;

int main(){
    setlocale(LC_ALL,"");
    srand(time(NULL));
    
    const int SIZE = 1220;
    int arr[SIZE];

    for(int i = 0; i < SIZE; i++){
        arr[i] = 10 + rand() % 10; // a + rand() % (b - a + 1)
        cout << arr[i] << "\t";
    }
    cout << "\n";

    for(int i = 765; i < 949; i++){
        cout << arr[i];
    }
    cout << "\n\n";

    for(int i = 999; i <= 1099; i++){
        cout << arr[i];
    }
    cout << endl;

    return 0;
    system("pause");
}