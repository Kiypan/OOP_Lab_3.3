//Money.h
#pragma once
#pragma pack(1)
#include "Pair.h"

class Money : public Pair
{
public:
	Money();
	Money(const int first, const int second);
	Money(const Money& s);
	Money(double p);
	~Money(void);


	Money& operator ++ ();
	Money& operator -- ();
	Money operator ++ (int);
	Money operator -- (int);


	friend Money operator + (Money&, Money&);
	friend Money operator - (Money&, Money&);
	friend double operator / (Money&, Money&);

};
