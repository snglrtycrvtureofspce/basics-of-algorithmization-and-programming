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
	/*for (unsigned short int i = 0; i < 256; i++) {
		cout << i << '\t' << char(i) << '\n';
	}*/
	int mission;
	cout << "Введите задание: ";
	cin >> mission;
	switch (mission) {
	case(1): {
		const int SIZE = 100;
		char findsymbol = 0, str[SIZE]{};
		cin.ignore();
		cin.getline(str, SIZE);
		cout << "Введите символ который хотите найти: ";
		cin >> findsymbol;
		for (int i = 0; i < strlen(str); i++) {
			if ((str[i]) == findsymbol) {
				cout << "Найден символ " << findsymbol << "\tв строке: " << i << '\n';
			}
		}
		break;
	}
	case(2): {
		const int SIZE = 100;
		char symbol = 0, str[SIZE]{};
		cin.ignore();
		cin.getline(str, SIZE);
		cout << "Введите символ: ";
		cin >> symbol;
		for (int i = 0; i < strlen(str); i++) {
			cout << str[i] << symbol;
		}
		break;
	}
	case(3): {
		const int SIZE = 100;
		char str[SIZE]{};
		cin.ignore();
		cin.getline(str, SIZE);
		cout << strlen(str) << '\n';
		break;
	}
	case(4): {
		const int SIZE = 100;
		int count = 0;
		char consonants[]{ 'a', 'e', 'i', 'o', 'u', 'y', '\0'}, str[SIZE]{};
		cin.ignore();
		cin.getline(str, SIZE);
		for (int i = 0; i < strlen(str); i++) {
			if (str[i] == consonants[i]) {
				count++;
			}
		}
		cout << "Количество: " << count << endl;
		break;
	}
	default: {
		cout << "Вы ввели неправильный номер" << endl;
		break;
	}
	}
	system("pause");
	return 0;
}