// функція main
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "CBitString_PUBLIC.h"
#include "CBitString_PRIVATE.h"
#include <bitset>

using namespace std;

int main()
{

	BitString_PUBLIC b;
	b.SetFirst(1111);
	b.SetSecond(22223);

	cout << std::bitset<32>(b.GetFirst()) << " " << std::bitset<32>(b.GetSecond()) << endl;
	cout << std::bitset<32>((b >> 4).GetFirst()) << " " << std::bitset<32>((b >> 4).GetSecond()) << endl;
	cout << std::bitset<32>((b << 25).GetFirst()) << " " << std::bitset<32>((b << 25).GetSecond()) << endl;
	cout << "PUBLIC" << endl << endl;
	{
		BitString_PUBLIC o;
		cin >> o;
		int n;

		cout << o << endl << endl;

		// ShiftLeft
		cout << "How many bits do you want to shift left?" << endl;
		cout << "Input:  "; cin >> n;
		BitString_PUBLIC a = o << n;
		cout << a << endl;

		// ShiftRight
		cout << "How many bits do you want to shift right?" << endl;
		cout << "Input:  "; cin >> n;
		BitString_PUBLIC b = o >> n;
		cout << b << endl;

		// Xor
		cout << "Xor: " << endl;
		cout << (a ^ b) << endl << endl;

		cout << "++o: " << ++o << endl;
		cout << "--o: " << --o << endl;
		cout << "o++: " << o++ << endl;
		cout << "o--: " << o-- << endl << endl;

		// Size
		cout << "Size of public class: " << sizeof(o) << endl;		
	}
	cout << "PRIVATE" << endl << endl;
	{
		BitString_PRIVATE o;
		cin >> o;
		int n;

		cout << o << endl << endl;

		// ShiftLeft
		cout << "How many bits do you want to shift left?" << endl;
		cout << "Input:  "; cin >> n;
		BitString_PRIVATE a = o << n;
		cout << a << endl;

		// ShiftRight
		cout << "How many bits do you want to shift right?" << endl;
		cout << "Input:  "; cin >> n;
		BitString_PRIVATE b = o >> n;
		cout << b << endl;

		// Xor
		cout << "Xor: " << endl;
		cout << (a ^ b) << endl << endl;

		//oprations
		cout << "++o: " << ++o << endl;
		cout << "--o: " << --o << endl;
		cout << "o++: " << o++ << endl;
		cout << "o--: " << o-- << endl << endl;

		// SIze
		cout << "Size of private class: " << sizeof(o) << endl;
	}
	cin.get();

	return 0;

}