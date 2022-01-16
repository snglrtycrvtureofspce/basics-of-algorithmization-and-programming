#include <iostream>
#include <windows.h>

using namespace std;

class wear
{
private:
	int size;
	double mass;
	char q;
	bool sex;
	char model[10];
public:
	wear(){}
	wear(int size, double m, const char* q, bool sex){
		Setsize(size);
		Setmass(m);
		Setq(*q);
		Setsex(sex);
	}

	~wear()
	{}
	int Getsize()
	{
		return size;
	}
	int Setsize(int s)
	{
		if (s > 0 && s < 100)
		{
			size = s;
			return size;
		}
		else
		{
			return -1;
		}
	}
	double Getmass()
	{
		return mass;
	}
	double Setmass(double m)
	{
		if (m > 0 && m < 500)
		{
			mass = m;
			return mass;
		}
	}
	char Getq()
	{
		return q;
	}
	char Setq(char q)
	{
		q = q;
		return q;
	}
	bool Getsex()
	{
		return sex;
	}
	bool Setsex(bool s)
	{
		sex = s;
		return sex;
	}
	char* Getmodel()
	{
		return model;
	}
	char* Setmodel(char m[])
	{
		if (strlen(m) > 0)
		{
			strcpy_s(model, strlen(m) + 1, m);
			return model;
		}
		else
		{
			return model;
		}
	}
	double sqare(double s)
	{
		double d = 1 + (s - 28) * 0.1;
		if (d > 1)
		{
			return d;
		}
		else
		{
			return d * 1.3;

		}

	}
	void print()
	{
		cout << "Название модели " << Getmodel() << "\nЧто-то там " << Getq() << "\nМасса" << Getmass() << "\nРазмер " << Getsize() << "\nПол ";
		if (Getsex() == true)
		{
			cout << "Мужской пол" << endl;
		}
		else
		{
			cout << "Женский пол" << endl;
		}
	}

};
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	/*wear nike;
	nike.print();
	char lol []= "Nike th";
	nike.Setmodel(lol);
	nike.Setsize(32);
	nike.Setq('M');
	nike.Setmass(255.0);
	nike.Setsex(1);
	nike.print();
	double sqare = nike.sqare(nike.Getsize()); 
	cout << "sqare " << sqare;*/
	wear q(0, 52.5, "M", true);
	q.print();

}