#include "CBitString_PUBLIC.h"

BitString_PUBLIC& BitString_PUBLIC::operator = (const BitString_PUBLIC& pr)
{
    BitStringBase::operator = (pr);
    return (*this);
}
BitString_PUBLIC& BitString_PUBLIC::operator ++()
{
    SetFirst(GetFirst() + 1);
    return *this;
}
BitString_PUBLIC& BitString_PUBLIC::operator --()
{
    SetFirst(GetFirst() - 1);
    return *this;
}
BitString_PUBLIC BitString_PUBLIC::operator ++(int)
{
    BitString_PUBLIC t(*this);
    SetSecond(GetSecond() + 1);
    return t;
}
BitString_PUBLIC BitString_PUBLIC::operator --(int)
{
    BitString_PUBLIC t(*this);
    SetSecond(GetSecond() - 1);
    return t;
}
BitString_PUBLIC operator ^ (const BitString_PUBLIC& a, const BitString_PUBLIC& b)
{
    BitString_PUBLIC t;
    t.SetFirst(a.GetFirst() ^ b.GetFirst());
    t.SetSecond(a.GetSecond() ^ b.GetSecond());
    return t;
}

BitString_PUBLIC operator << (const BitString_PUBLIC& a, int n)
{
    BitString_PUBLIC t = a;
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

BitString_PUBLIC operator >> (const BitString_PUBLIC& a, int n)
{
    BitString_PUBLIC t = a;
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