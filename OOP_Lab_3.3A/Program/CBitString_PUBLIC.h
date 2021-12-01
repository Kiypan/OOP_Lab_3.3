#pragma once
#include "CBitStringBase.h"

class BitString_PUBLIC: public BitStringBase
{
public:
	BitString_PUBLIC& operator = (const BitString_PUBLIC& pr);
	// prefix
	BitString_PUBLIC& operator ++();
	BitString_PUBLIC& operator --();

	// postfix
	BitString_PUBLIC operator ++(int);
	BitString_PUBLIC operator --(int);

	friend BitString_PUBLIC operator ^ (const BitString_PUBLIC& a, const BitString_PUBLIC& b);

	friend BitString_PUBLIC operator << (const BitString_PUBLIC& a, int n);
	friend BitString_PUBLIC operator >> (const BitString_PUBLIC& a, int n);
};

