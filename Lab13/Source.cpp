#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <cctype>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	for (unsigned short int i = 0; i < 256; i++){
		cout << i << '\t' << char(i) << '\n';
	}
}