#include "CBitString_PRIVATE.h"

BitString_PRIVATE::BitString_PRIVATE()
    : BitStringBase(0, 0)
{}
BitString_PRIVATE::BitString_PRIVATE(const long &first, const long &second)
    : BitStringBase(first, second)
{}
BitString_PRIVATE::BitString_PRIVATE(const BitString_PRIVATE& v)
    : BitStringBase(v)
{}
BitString_PRIVATE::operator std::string () const
{
    std::stringstream ss;
    ss << GetFirst() << ", " << GetSecond();
    return ss.str();
}
BitString_PRIVATE& BitString_PRIVATE::operator = (const BitString_PRIVATE& pr)
{
    BitStringBase::operator = (pr);
    return (*this);
}
BitString_PRIVATE& BitString_PRIVATE::operator ++()
{
    SetFirst(GetFirst() + 1);
    return *this;
}
BitString_PRIVATE& BitString_PRIVATE::operator --()
{
    SetFirst(GetFirst() - 1);
    return *this;
}
BitString_PRIVATE BitString_PRIVATE::operator ++(int)
{
    BitString_PRIVATE t(*this);
    SetSecond(GetSecond() + 1);
    return t;
}
BitString_PRIVATE BitString_PRIVATE::operator --(int)
{
    BitString_PRIVATE t(*this);
    SetSecond(GetSecond() - 1);
    return t;
}
BitString_PRIVATE operator ^ (const BitString_PRIVATE& a, const BitString_PRIVATE& b)
{
    BitString_PRIVATE t;
    t.SetFirst(a.GetFirst() ^ b.GetFirst());
    t.SetSecond(a.GetSecond() ^ b.GetSecond());
    return t;
}

BitString_PRIVATE operator << (const BitString_PRIVATE& a, int n)
{
    BitString_PRIVATE t = a;
    long tmp[2];
    const int last_bit = sizeof(long) * 8 - 1;
    for (size_t i = 0; i < n; i++)
    {
        tmp[0] = t.GetFirst() << 1;
        tmp[1] = t.GetFirst() << 1;
        if (t.GetSecond() & (1 << last_bit))
            tmp[0] |= (1 << 0);
        else
            tmp[0] &= ~(1 << 0);

        t.SetFirst(tmp[0]);
        t.SetSecond(tmp[1]);
    }
    return t;
}

BitString_PRIVATE operator >> (const BitString_PRIVATE& a, int n)
{
    BitString_PRIVATE t = a;
    long tmp[2];
    const int last_bit = sizeof(long) * 8 - 1;
    for (size_t i = 0; i < n; i++)
    {
        tmp[0] = t.GetFirst() >> 1;
        tmp[1] = t.GetSecond() >> 1;
        if (t.GetFirst() & (1 << 0))
            tmp[1] |= (1 << last_bit);
        else
            tmp[1] &= ~(1 << last_bit);

        t.SetFirst(tmp[0]);
        t.SetSecond(tmp[1]);
    }
    return t;
}
std::ostream& operator << (std::ostream& out, const BitString_PRIVATE& r)
{
    out << std::string(r);
    return out;
}
std::istream& operator >> (std::istream& in, BitString_PRIVATE& r)
{
    long tmp[2];
    std::cout << "first = "; in >> tmp[0];
    std::cout << "second = "; in >> tmp[1];
    r.SetFirst(tmp[0]);
    r.SetSecond(tmp[1]);
    return in;
}