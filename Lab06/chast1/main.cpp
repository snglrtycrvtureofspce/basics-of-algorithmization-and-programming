#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL,"");
	int a = 0;
	const int SIZE = 15;
	double arr[SIZE];
	srand(time(NULL));
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand();///////////////////////////////
	}
	cout << "Количество элементов значения которых больше первого элемента: " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[0] < arr[i])
		{
			cout << arr[i] << endl;
			a += 1;
		}
	}
	cout << "Всего элементов: " << a << endl;
	
	return 0;
    system("pause");
}