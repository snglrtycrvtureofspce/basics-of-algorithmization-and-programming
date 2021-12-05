#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL,"");
	char arr[4][2]={{'s', 'q'},
					{'w','t'},
					{'r','g'},
					{'y','g'}};
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 2; j++){
			cout << arr[i][j] << '\t';
		}
		cout << '\n';
	}
	
	system("read -p 'Нажмите Enter для продолжения...' var");
    return 0;
}