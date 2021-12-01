//Pair.h
#pragma once
#pragma pack(1)
#include <iostream>
#include <sstream>
#include <string>
#include <math.h>

using namespace std;

class Pair
{
private:
	int first, second;

public:
	int GetFirst() const { return first; }
	int GetSecond() const { return second; }
	void SetFirst(int value) { first = value; }
	void SetSecond(int value) { second = value; }

	Pair();
	Pair(const int first, const int second);
	Pair(const Pair& S);
	~Pair(void);

	Pair& operator = (const Pair& s);
	operator string () const;

	friend ostream& operator << (ostream& out, const Pair& s);
	friend istream& operator >> (istream& in, Pair& s);

	Pair& operator ++ ();
	Pair& operator -- ();
	Pair operator ++ (int);
	Pair operator -- (int);

	friend Pair operator + (Pair&, Pair&);
	friend Pair operator * (Pair&, int);

};