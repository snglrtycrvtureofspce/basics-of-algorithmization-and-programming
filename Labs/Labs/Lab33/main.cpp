#include <iostream>

using namespace std;


void swap(int* a, int i, int j)
{
	const int s = a[i];
	a[i] = a[j];
	a[j] = s;
}