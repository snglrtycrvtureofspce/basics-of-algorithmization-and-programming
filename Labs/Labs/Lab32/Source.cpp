#include <iostream>
#include <vector>
#include <string>
#include <list>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::list;

int division_method_hash_function(const int k) // fun hash method division
{
	return k % 10;
}

int multiplication_method_hash_function(const int k) // fun hash method multiplication
{
	/*
	the value of the variable will be calculated at compile time
	*/
	constexpr int n = 13;
	constexpr double a = 0.618033;
	return n * fmod(k * a, 1);
}

////////////////////////////////////////////////////////////////////////////

int find_substr(string t, string s) // fun search for a substring in a string
{
	int p = 97;
	vector<int> p_pow(s.length()); // creation of an integer array p_pow by the constructor for the number of elements s.length() - how many elements are in the string s
	p_pow[0] = 1;
	/*
	The post-increment(i++) operation returns the value of the variable i before the increment is executed.
	The prefix increment operator (++i) returns the value of an already modified variable. 
	*/
	for (size_t i = 1; i < p_pow.size(); ++i)
	{
		p_pow[i] = p_pow[i - 1] * p; // calculate the hashes of all prefixes of the string s
	}
	vector<int> h(s.length()); // creation of an integer array h by the constructor for the number of elements s.length() - how many elements are in the string s
	for(size_t i = 0; i < s.length(); ++i)
	{
		h[i] = (s[i] - 't' + 1) * p_pow[i];
		if (i) // i != 0
		{
			h[i] += h[i - 1];
		}
	}
	/*
	count the hash of the string t
	*/
	int h_t = 0;
	for(size_t i = 0; i < t.length(); ++i)
	{
		h_t += (t[i] - 't' + 1) * p_pow[i];
	}
	/*
	compare hashes of string t and substrings s length |t|
	*/
	for(size_t i = 0; i < t.length(); ++i)
	{
		int cur_h = h[i + t.length() - 1];
		if(i)
		{
			cur_h -= h[i - 1];
		}
		/*
		if equality is satisfied at least once, stop searching
		*/
		if(cur_h == h_t * p_pow[i])
		{
			return int(i);
		}
	}
	return -1;
}

//////////////////////////////////////////////////

/*
a hash function that finds the hash code for a string, given the string,
the length of the hash code (the number of characters in the hash code),
the key of the hash code).
hash algorithm: (a0 + p * a1 + p^2 * a3 + ... + p^(n-1)a[n-1]) % pow(2, n)
*/
unsigned int find_hash_code_for_string(string str, int key_hash, int count_of_symbols_code)
{
	unsigned int size = pow(10, count_of_symbols_code); // size = hash size (size length), range int: -2 147 483 648; +2 147 483 647
	unsigned long long int hash_code = 0, tmp_hash = 0;
	for (size_t i = 0; i < str.length(); i++)
	{
		tmp_hash += (int)pow(key_hash, i) * (int)(str[i]);
		tmp_hash = tmp_hash % size;
	}
	hash_code = tmp_hash % size;
	return hash_code;
}

//////////////////////////////////////////////////

/*
working with a container - a dynamic list list< >.
*/
struct Car
{
	int x;
	Car(){}
	Car(int x)
	{
		this->x = x;
	}
	void show()
	{
		cout << this->x << " ";
	}
};

void main()
{
	int select = 0;
	cout << "Select function: "; cin >> select;
	switch (select)
	{
	case 1:
	{
		int key = 0;
		for (int i = 0; i < 10; i++)
		{
			cout << "Enter key: "; cin >> key;
			cout << "hash_function(" << key << ") = " << division_method_hash_function(key) << endl;
		}
		break;
	}
	case 2:
	{
		int key = 0;
		for (int i = 0; i < 10; i++)
		{
			cout << "Enter key: "; cin >> key;
			cout << "hash_function(" << key << ") = " << multiplication_method_hash_function(key) << endl;
		}
		break;
	}
	case 3:
	{
		vector<string>t, s, c;
		int n = 0;
		cout << "Enter count: "; cin >> n;
		string tmp;
		for (int i = 0; i < n; i++)
		{
			cout << "Enter " << i + 1 << " string: "; cin >> tmp;
			/*
			The push_back() fun is one way to insert a new element at the end of a vector,
			which increases the size of the vector by 1.
			This function is useful when one element needs to be added to the vector.
			*/
			if (tmp.length() == 1)
			{
				c.push_back(tmp); // puts any string into an array of strings t 
			}
			t.push_back(tmp);
		}
		cout << "\nEnter -1 to exit: ";
		/*
		The compare() fun is Comparing Parts of Strings
		*/
		while (cin >> tmp && tmp.compare("-1") != 0)
		{
			s.push_back(tmp); // we enter the desired substrings (words) into the array s until you enter -1 
		}
		//for (int i = 0; i < s.size(); i++) // we pass through the array s from the desired strings (words) 
		//{
		//	string s = s[i];
		//	if (s.empty()) // s == ""
		//	{
		//		continue;
		//	}
		//	if(s.length() == 1)
		//	{
		//		_in_range_(j,0,c.size()) ////////// in_range
		//		{
		//			string c = c[j];
		//			if(s == c)
		//			{
		//				cout << s << "\n";
		//				break;
		//			}
		//			continue;
		//		}
		//	}
		//}
		//for (int j = 0; j < n; j++) // Rabin Karp algorithm
		//{
		//	string T = t[j];
		//	int pos = find_substr(T, s); ////////// s
		//	if(pos >= 0)
		//	{
		//		cout << s << "\n";
		//		break;
		//	}
		//}
		break;
	}
	case 4:
	{
		int hash_key = 11;
		int count_of_symbols_code = 9;
		string str1 = "wqweqwrqwr"; // differences on the last symbol
		string str2 = "wqweqwrqwy"; // differences on the last symbol
		cout << "String: " << str1 << " hash code to this strings: " << find_hash_code_for_string(str1, hash_key, count_of_symbols_code) << endl;
		cout << "String: " << str2 << " hash code to this strings: " << find_hash_code_for_string(str2, hash_key, count_of_symbols_code) << endl;
		break;
	}
	case 5: // list erase iterator outside range // problem in .end() or .pop_back() 
	{
		list<Car>li;
		Car c(0);
		li.push_back(c); // push_back() - placing the element at the end of the list
		Car c0(1);
		li.push_back(c0);
		Car c1(2);
		li.push_back(c1);
		Car c2(3);
		li.push_back(c2);
		Car c3(4);
		li.push_front(c3); // push_front() - placing the element at the beginning of the list
		Car c4(5);
		li.push_front(c4);
		/*
		An iterator is an object that is capable of iterating over the elements of a container class without the user having to know the implementation of a particular container class.
		In many containers (especially list and associative containers),
		iterators are the primary way to access the elements of these containers.
		*/
		list<Car>::iterator j; // iterator j to save a pointer to an element of the car list
		for (list<Car>::iterator i = li.begin(); i != li.end(); i++)
		{
			i->show();
			if (i->x == 3)
			{
				j = i;
			}
		}
		cout << endl;
		li.pop_back(); // pop_back() - remove the last element of the list
		li.pop_front(); // pop_front() - remove the first element of the list
		li.erase(j); // remove element on pointer
		for (list<Car>::iterator i = li.begin(); i != li.end(); i++)
		{
			(*i).show();
		}
		cout << endl;
		li.clear(); // clear all list
		break;
	}
	default:
	{
		system("CLS");
		cout << "Some kind of mistake" << endl;
		break;
	}
	}
}