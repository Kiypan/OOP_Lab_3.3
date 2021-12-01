#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "CBitString.h"

using namespace std;

int main()
{

	BitString o;
	cin >> o;
	int n;
	cout << o << endl << endl;

	// ShiftLeft
	cout << "How many bits do you want to shift left?" << endl;
	cout << "Input:  "; cin >> n;
	BitString a = o << n;
	cout << "a: " << a << endl;

	// ShiftRight
	cout << "How many bits do you want to shift right?" << endl;
	cout << "Input:  "; cin >> n;
	BitString b = o >> n;
	cout << "b: " << b << endl;

	// Xor

	// count
	cout << "Number of elements of class BitString : " << BitString::Count() << endl;
	cout << "Size of class: " << sizeof(o) << endl;

	{
		// Xor
		cout << "Xor: " << endl;
		BitString c = a ^ b;
		cout << "c: " << c << endl;
		cout << "Number of elements of class BitString : " << BitString::Count() << endl;
	}

	BitString d(a.GetFirst(), b.GetFirst());
	cout << "d: " << d << endl;
	cout << "Number of elements of class BitString : " << BitString::Count() << endl;

	// operations
	cout << "++o: " << ++o << endl;
	cout << "--o: " << --o << endl;
	cout << "o++: " << o++ << endl;
	cout << "o--: " << o-- << endl << endl;

	cin.get();
	return 0;

}