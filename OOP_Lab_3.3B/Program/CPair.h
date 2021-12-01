#pragma once
//визначення класу

#include <string>
#include <iostream>
#include <sstream>

class Pair
{
    long first = 0;
    long second = 0;
public:
	Pair() {};
	Pair(const Pair& obj) :
		first(obj.first), second(obj.second) {}
	Pair(const long& first, const long& second);
	~Pair() {};

	Pair& operator = (const Pair&);
	operator std::string() const;

    long GetFirst() const;
    long GetSecond() const;

    void SetFirst(long value);
    void SetSecond(long value);

	friend bool operator == (const Pair& l, const Pair& r);
	friend bool operator != (const Pair& l, const Pair& r);
	friend bool operator > (const Pair& l, const Pair& r);
	friend bool operator < (const Pair& l, const Pair& r);
	friend bool operator >= (const Pair& l, const Pair& r);
	friend bool operator <= (const Pair& l, const Pair& r);

	friend std::ostream& operator << (std::ostream&, const Pair&);
	friend std::istream& operator >> (std::istream&, Pair&);
};