#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"");
	const int SIZE = 10;
	int arr[SIZE];

	cout << "������� �������� �������: " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	cout <<  "_____________________________________________________________________________________________________________" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] != 0)
		{
			cout << arr[i];
		}
	}
	cout << endl;
	
	return 0;
    system("pause");
}