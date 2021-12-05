#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL,"");
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

    double **arr = new double*[rows];

    if(arr == NULL){
        cout << "Память не зарезервирована" << '\n';
        system("pause");
        return 0;
    }

    for(int i = 0; i < rows; i++){
          arr[i] = new double[cols];
          if(arr[i] == NULL){
              cout << "Память не зарезервирована" << "для строки" << i << '\n';
              system("pause");
              return 0;
          }    
    }

    cout << "Введите значения массива: " << '\n';
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }
    
    cout << "Print array:" << '\n';
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << ' ' << ';' << '\t';
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