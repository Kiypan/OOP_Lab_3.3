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
	cout << a << endl;

	// ShiftRight
	cout << "How many bits do you want to shift right?" << endl;
	cout << "Input:  "; cin >> n;
	BitString b = o >> n;
	cout << b << endl;

	// Xor
	cout << "Xor: " << endl;
	cout << (a ^ b) << endl;

	// operations
	cout << "++o: " << ++o << endl;
	cout << "--o: " << --o << endl;
	cout << "o++: " << o++ << endl;
	cout << "o--: " << o-- << endl << endl;

	// comparison
	if (a == b)
		cout << "Pairs are equal" << endl;
	else
		cout << "Pairs are not equal" << endl;

	if (a != b)
		cout << "Pairs are not equal" << endl;
	else
		cout << "Pairs are equal" << endl;

	if (a > b)
		cout << "Pair a is bigger than Pair b" << endl;
	else
		cout << "Pair a is smaller than Pair b" << endl;

	if (a < b)
		cout << "Pair a is smaller than Pair b" << endl;
	else
		cout << "Pair a is bigger than Pair b" << endl;

	if (a >= b)
		cout << "Pair a is bigger than/equal to Pair b" << endl;
	else
		cout << "Pair a is smaller than/equal to Pair b" << endl;

	if (a <= b)
		cout << "Pair a is smaller than/equal to Pair b" << endl;
	else
		cout << "Pair a is bigger than/equal to Pair b" << endl;

	cin.get();
	return 0;
}