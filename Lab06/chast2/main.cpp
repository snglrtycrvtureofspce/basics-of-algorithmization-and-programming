#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL,"");
	const int SIZE = 12;
	char * arr[SIZE] = {"А","Б","В","Г","Д","Е","Ё","Ж","З","И","Л","С"};//////////////////
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i];
	}
	cout << "\n";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}
	
	return 0;/////////////////////////
    system("pause");
}