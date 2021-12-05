#include <iostream>

using namespace std;
bool foo(int* x, unsigned size, int value)
{
  int total = 0;
  while (size--) total += *x++;
  return total != value * value;
}
bool haha(int arr[],const int SIZE, int value) {
	bool result = true;
	int count = 0;
	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % 10;
	}
	for (int i = 0; i < SIZE; i++) {
		count += arr[i];
	}
	if (count > value) {
		result = false;
	}
	return result;
}

int main() {
	srand(time(NULL));
	setlocale(LC_ALL,"");
	const int SIZE = 10;
	int arr[SIZE];
	haha(arr,SIZE, 1);
    return 0;

}