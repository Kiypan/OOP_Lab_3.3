//Money_PR.h
#pragma once
#pragma pack(1)
#include "Pair.h"

class Money_PR : private Pair
{

public:

	using Pair::GetFirst;
	using Pair::GetSecond;
	using Pair::SetFirst;
	using Pair::SetSecond;
	using Pair::Pair;

	Money_PR();
	Money_PR(const int first, const int second);
	Money_PR(const Money_PR& s);
	Money_PR(const double p);
	~Money_PR(void);

	friend ostream& operator << (ostream& out, const Money_PR& s);
	friend istream& operator >> (istream& in, Money_PR& s);
	
	Money_PR& operator ++ ();
	Money_PR& operator -- ();
	Money_PR operator ++ (int);
	Money_PR operator -- (int); 

	friend Money_PR operator + (Money_PR&, Money_PR&);
	friend Money_PR operator - (Money_PR&, Money_PR&);
	friend double operator / (Money_PR&, Money_PR&);

};
