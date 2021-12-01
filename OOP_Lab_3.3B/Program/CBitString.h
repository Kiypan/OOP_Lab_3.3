#pragma once
#include "CPair.h"

class BitString: public Pair
{
public:
	BitString& operator = (const BitString& pr);
	// prefix
	BitString& operator ++();
	BitString& operator --();

	// postfix
	BitString operator ++(int);
	BitString operator --(int);

	friend BitString operator ^ (const BitString& a, const BitString& b);

	friend BitString operator << (const BitString& a, int n);
	friend BitString operator >> (const BitString& a, int n);
};

