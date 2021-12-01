//Pair.cpp
#include "Pair.h"

Pair::Pair()
	: first(0), second(0)
{}

Pair::Pair(const int First, const int Second)
	: first(First), second(Second)
{}

Pair::Pair(const Pair& v)
	: first(v.first), second(v.second)
{}

Pair::~Pair(void)
{}


Pair& Pair::operator = (const Pair& n)
{
	first = n.first;
	second = n.second;
	return *this;
}

Pair::operator string () const
{
	stringstream ss;
	ss << endl;
	ss << "a = " << first << endl;
	ss << "b = " << second << endl;
	ss << "(" << first << ", " << second << ")" << endl;
	return ss.str();
}

ostream& operator <<(ostream& out, const Pair& s)
{
	return out << string(s);
}

istream& operator >>(istream& in, Pair& s)
{
	int first, second;
	cout << "a = "; in >> first;
	cout << "b = "; in >> second;
	s.SetFirst(first);
	s.SetSecond(second);
	return in;
}

Pair& Pair::operator --()
{
	--first;
	return *this;
}

Pair& Pair::operator ++()
{
	++first;
	return *this;
}

Pair Pair::operator --(int)
{
	Pair first(*this);
	second--;
	return first;
}

Pair Pair::operator ++(int)
{
	Pair first(*this);
	second++;
	return first;
}


Pair operator + (Pair& p1, Pair& p2)
{
	Pair tmp;
	tmp.first = p1.first + p2.first;
	tmp.second = p1.second + p2.second;
	return tmp;
}

Pair operator * (Pair& p, int n)
{
	Pair tmp;
	tmp.first = p.first * n;
	tmp.second = p.second * n;
	return tmp;
}


