#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::end;
using std::string;


struct data_field // struct for for data storage
{
	string name = "";
	int age = 0;
	size_t intelligence_quotient = 0; // unsigned integer type
	void input(); // def prototype
	void show(); // def prototype
	void set_random(); // def prototype
};
