//Source.cpp
#include <iostream>
#include "Money_PB.h"
#include "Money_PR.h"

using namespace std;

int main()
{
	//////////////////////////пара//////////////////////////

	Pair p1, p2;
	cout << "Input first pair" << endl;
	cin >> p1;
	cout << "Input second pair" << endl;
	cin >> p2;

	cout << endl;
	cout << "First pair a and b";
	cout << p1 << endl;

	cout << "Second pair a is c, b is d";
	cout << p2 << endl;

	//додавання пар
	cout << "Sum of pairs:" << p1 + p2 << endl << endl;

	//множення на число
	int number;
	cout << "(number, you want to multiply on) n = ";
	cin >> number; cout << endl;

	cout << "First pair multyplied on n : " << p1 * number << endl;
	cout << "Second pair multiplyed on n: " << p2 * number << endl;


	cout << endl;
	cout << "p1: " << p1 << endl;
	cout << "++p1: " << ++p1 << endl;
	cout << "--p1: " << --p1 << endl;
	cout << "p1++: " << p1++ << endl;
	cout << "p1--: " << p1-- << endl << endl;
	cout << "--------------------------------------------" << endl << endl;


	//////////////////////////гроші//////////////////////////
	cout << "PUBLIC" << endl << endl;
	{
		Money_PB m1, m2;

		cout << endl;
		cout << "Input money 1: ";
		cin >> m1;

		cout << endl;
		cout << "Input money 2: ";
		cin >> m2;

		cout << endl;
		cout << "Money 1: ";
		cout << m1 << endl;

		cout << "Money 2: ";
		cout << m2 << endl;

		//додавання пар
		cout << "Sum of money: " << m1 + m2 << endl;

		//віднімання пар
		cout << "Difference of money: " << m1 - m2 << endl;

		//ділення пар
		cout << "Division of money: " << m1 / m2 << endl;

		cout << "m1: " << m1 << endl;
		cout << "++m1: " << ++m1 << endl;
		cout << "--m1: " << --m1 << endl;
		cout << "m1++: " << m1++ << endl;
		cout << "m1--: " << m1-- << endl << endl;
	}

	cout << "--------------------------------------------" << endl << endl;
	cout << "PRIVATE" << endl << endl;
	{
		Money_PR m1, m2;

		cout << endl;
		cout << "Input money 1: ";
		cin >> m1;

		cout << endl;
		cout << "Input money 2: ";
		cin >> m2;

		cout << endl;
		cout << "Money 1: ";
		cout << m1 << endl;

		cout << "Money 2: ";
		cout << m2 << endl;

		//додавання пар
		cout << "Sum of money: " << m1 + m2 << endl;

		//віднімання пар
		cout << "Difference of money: " << m1 - m2 << endl;

		//ділення пар
		cout << "Division of money: " << m1 / m2 << endl;
		cout << "--------------------------------------------" << endl << endl;

		cout << "m1: " << m1 << endl;
		cout << "++m1: " << ++m1 << endl;
		cout << "--m1: " << --m1 << endl;
		cout << "m1++: " << m1++ << endl;
		cout << "m1--: " << m1-- << endl << endl;
	}
	
}


