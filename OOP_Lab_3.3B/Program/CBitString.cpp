#include "CBitString.h"

BitString& BitString::operator = (const BitString& pr)
{
    Pair::operator = (pr);
    return (*this);
}
BitString& BitString::operator ++()
{
    SetFirst(GetFirst() + 1);
    return *this;
}
BitString& BitString::operator --()
{
    SetFirst(GetFirst() - 1);
    return *this;
}
BitString BitString::operator ++(int)
{
    BitString t(*this);
    SetSecond(GetSecond() + 1);
    return t;
}
BitString BitString::operator --(int)
{
    BitString t(*this);
    SetSecond(GetSecond() - 1);
    return t;
}
BitString operator ^ (const BitString& a, const BitString& b)
{
    BitString t;
    t.SetFirst(a.GetFirst() ^ b.GetFirst());
    t.SetSecond(a.GetSecond() ^ b.GetSecond());
    return t;
}

BitString operator << (const BitString& a, int n)
{
    BitString t = a;
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

BitString operator >> (const BitString& a, int n)
{
    BitString t = a;
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