#include <iostream>

using namespace std;

int main() {
	char s = 'S';
	char *ps = &s;
	char pz = *ps;
	cout << s << '\n' << *ps << '\n' << pz << '\n';
	s += 1;
	*ps += 1;
	pz += 1;
	cout << s << '\n' << *ps << '\n' << pz << '\n';
}