//Money_PB.h
#pragma once
#pragma pack(1)
#include "Pair.h"

class Money_PB : public Pair
{
public:
	Money_PB();
	Money_PB(const int first, const int second);
	Money_PB(const Money_PB& s);
	Money_PB(double p);
	~Money_PB(void);
	
	
	Money_PB& operator ++ ();
	Money_PB& operator -- ();
	Money_PB operator ++ (int);
	Money_PB operator -- (int);
	

	friend Money_PB operator + (Money_PB&, Money_PB&);
	friend Money_PB operator - (Money_PB&, Money_PB&);
	friend double operator / (Money_PB&, Money_PB&);

};
