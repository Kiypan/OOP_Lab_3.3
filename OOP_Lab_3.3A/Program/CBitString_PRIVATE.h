#pragma once
#include "CBitStringBase.h"

class BitString_PRIVATE: private BitStringBase
{
public:

	using BitStringBase::GetFirst;
	using BitStringBase::GetSecond;

	using BitStringBase::SetFirst;
	using BitStringBase::SetSecond;

	using BitStringBase::BitStringBase;

	BitString_PRIVATE();
	BitString_PRIVATE(const long &first, const long &second);
	BitString_PRIVATE(const BitString_PRIVATE& v);

	BitString_PRIVATE& operator = (const BitString_PRIVATE& n);
	operator std::string() const;

	// prefix
	BitString_PRIVATE& operator ++();
	BitString_PRIVATE& operator --();

	// postfix
	BitString_PRIVATE operator ++(int);
	BitString_PRIVATE operator --(int);

	friend BitString_PRIVATE operator ^ (const BitString_PRIVATE& a, const BitString_PRIVATE& b);

	friend BitString_PRIVATE operator << (const BitString_PRIVATE& a, int n);
	friend BitString_PRIVATE operator >> (const BitString_PRIVATE& a, int n);

	friend std::ostream& operator << (std::ostream& out, const BitString_PRIVATE& a);
	friend std::istream& operator >> (std::istream& in, BitString_PRIVATE& a);
};

