//реалізація методів класу

#include "CPair.h"
using namespace std;

long Pair::GetFirst() const
{
	return first;
}
long Pair::GetSecond() const
{
	return second;
}
void Pair::SetFirst(long value)
{
	first = value;
}
void Pair::SetSecond(long value)
{
	second = value;
}
Pair::Pair(const long& first, const long& second): first(first), second(second) {}
Pair& Pair::operator = (const Pair& pr)
{
    first = pr.first;
    second = pr.second;
    return *this;
}
Pair::operator std::string() const
{
    stringstream ss;
    ss << first << ", " << second;
    return ss.str();
}
ostream& operator << (ostream& out, const Pair& r)
{
    out << string(r);
    return out;
}
istream& operator >> (istream& in, Pair& r)
{
    cout << "first = "; in >> r.first;
    cout << "second = "; in >> r.second;
    return in;
}

bool operator == (const Pair& A, const Pair& B)
{
	return (A.first == B.first && A.second == B.second);
}

bool operator != (const Pair& A, const Pair& B)
{
	return !(A == B);
}

bool operator > (const Pair& A, const Pair& B)
{
	return (	
				(A.first > B.first) ||
				(A.first == B.first && A.second > B.second)
		);
}

bool operator < (const Pair& A, const Pair& B)
{
	return (
			(A.first < B.first) ||
			(A.first == B.first && A.second < B.second)
		);
}

bool operator >= (const Pair& A, const Pair& B)
{
	return !(A < B);
}

bool operator <= (const Pair& A, const Pair& B)
{
	return !(A > B);
}