#include <iostream>
#include <Windows.h>

using namespace std;

class Line
{
protected:
	double L;
public:
	double L0;
	Line(L0) {L = L0};
	void show()
	{
		cout << "Длина линии: " << L << endl;
	}
	
};

int main()
{
	setlocale(LC_ALL, "");

	system("pause");
	return 0;
}