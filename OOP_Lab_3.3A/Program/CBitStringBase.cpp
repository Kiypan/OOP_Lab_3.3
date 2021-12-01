//реалізація методів класу

#include "CBitStringBase.h"
using namespace std;

long BitStringBase::GetFirst() const
{
	return first;
}
long BitStringBase::GetSecond() const
{
	return second;
}
void BitStringBase::SetFirst(long value)
{
	first = value;
}
void BitStringBase::SetSecond(long value)
{
	second = value;
}
BitStringBase::BitStringBase(const long& first, const long& second): first(first), second(second) {}
BitStringBase& BitStringBase::operator = (const BitStringBase& pr)
{
    first = pr.first;
    second = pr.second;
    return *this;
}
BitStringBase::operator std::string() const
{
    stringstream ss;
    ss << first << ", " << second;
    return ss.str();
}
ostream& operator << (ostream& out, const BitStringBase& r)
{
    out << string(r);
    return out;
}
istream& operator >> (istream& in, BitStringBase& r)
{
    cout << "first = "; in >> r.first;
    cout << "second = "; in >> r.second;
    return in;
}