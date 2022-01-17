#include <iostream>

using namespace std;

class line
{
public:
	line(double L)
	{
		this->L = L;
	}

	void show()
	{
		cout << "Первая длина линии: " << this->L << endl;
	}
protected:
	double L;
};

class rectangle : line
{
public:
	rectangle(double L2) : line(L)
	{
		L2 = L2;
		this->p = 2 * (L + L2);
		this->s = L * L2;
	}
	void show()
	{
		line::show();
		cout << "Периметр: " << this->p << endl;
		cout << "Площадь: " << this->s << endl;
	}
	void perimetr()
	{
		auto P = 2 * (line::L + L2);
	}
	void square()
	{
		auto S = L * L2;
	}
protected:
	double L2;
private:
	int s, p;
};

int main()
{
	setlocale(LC_ALL, "");
	line first(12);
	first.show();
	rectangle second(24);
	second.show();
	return 0;
}