#pragma once
#include <string>
#include <iostream>
#include <sstream>

#include "CObject.h"

class BitString: public Object
{
private:
    long first = 0;
    long second = 0;
public:
	BitString() {};
	BitString(const BitString& obj) :
		first(obj.first), second(obj.second) {}
	BitString(const long& first, const long& second);
	~BitString() {};

	BitString& operator = (const BitString&);

	operator std::string() const;

	friend std::ostream& operator << (std::ostream&, const BitString&);
	friend std::istream& operator >> (std::istream&, BitString&);

	// prefix
	BitString& operator ++();
	BitString& operator --();

	// postfix
	BitString operator ++(int);
	BitString operator --(int);

    long GetFirst() const;
    long GetSecond() const;

    void SetFirst(long value);
    void SetSecond(long value);

    friend BitString operator ^ (const BitString& a, const BitString& b);

    friend BitString operator << (const BitString& a, int n);
    friend BitString operator >> (const BitString& a, int n);
};