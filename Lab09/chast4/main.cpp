#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL,"");
    srand(time(NULL));
    int rows,cols;

    do{
        cout << "Размер строки массива: ";
        cin >> rows;
        if(rows < 1){
            cout << "Введите значения больше нуля." << '\n';
        }
    }
    while(rows < 1);

    do{
        cout << "Размер столбца массива: ";
        cin >> cols;
        if(cols < 1){
            cout << "Введите значения больше нуля." << '\n';
        }
    }
    while(cols < 1);

    int **arr = new int*[rows];

    if(arr == NULL){
        cout << "Память не зарезервирована" << '\n';
        system("pause");
        return 0;
    }

    for(int i = 0; i < rows; i++){
          arr[i] = new int[cols];
          if(arr[i] == NULL){
              cout << "Память не зарезервирована" << "для строки" << i << '\n';
              system("pause");
              return 0;
          }    
    }
    int m = 99;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++) {
            arr[i][j] = m; //от 99 до n1 с шагом –2
            m -= 2; 
        }
    }

    
    cout << "Print massiv:" << '\n';
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << ' ' << '|' << '\t';
        }
        cout << '\n';
    }

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++) {
            arr[i][j] += 11;
        }
    }

    cout << "Print new massiv:" << '\n';
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << ' ' << '|' << '\t';
        }
        cout << '\n';
    }


    for (int i = 0; i < rows; i++){
        delete[] arr[i];
        arr[i] == NULL;
    }

    delete[] arr;
    arr = NULL;
    return 0;
}