#include <iostream>
#include <Windows.h>
#include <fstream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 100;

	string path = "ZenevichLab18.txt";
	ofstream f;
	f.open(path,ofstream::app);
	if(!f.is_open())
	{
		cout << "File open error!" << endl;
	}
	else
	{
		char arr[SIZE]{};
		cout << "Enter a paragraph:";
		cin.ignore();
		cin.getline(arr, SIZE);
	}
	f.close();

	ifstream f0;
	f0.open(path, ofstream::app);
	if (!f0.is_open())
	{
		cout << "File open error!" << endl;
	}
	else
	{
		char ch;
		while(f0.get(ch))
		{
			cout << ch;
		}
	}
	f0.close();

	char p = '0';
	cout << "Select job number: ";
	cin >> p;
	switch(p)
	{
	case '0':
		{
		cout << "End of the program ..." << endl;
		break;
		}
	case '1':
		{
		break;
		}
	default:
		{
		cout << "You entered the wrong number!" << endl;
		break;
		}
	}
	system("pause");
	return 0;
}