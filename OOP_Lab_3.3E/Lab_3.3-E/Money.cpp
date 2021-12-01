//Money.cpp
#include "Money.h"

using namespace std;

Money::Money()
	: Pair()
{}


Money::Money(const int F, const int S)
{
	int a = F;
	int b = S;
	while (b > 99)
	{
		b -= 100;
		a++;
	}
	while (b < -99)
	{
		b += 100;
		a--;
	}
	SetFirst(F);
	SetSecond(S);
}



Money::Money(double p)
{
	int a = (int)p;
	p -= a;
	p *= 100;
	int b = (int)p;

	while (b > 99)
	{
		b -= 100;
		a++;
	}
	while (b < -99)
	{
		b += 100;
		a--;
	}
	SetFirst(a);
	SetSecond(b);
}

Money::Money(const Money& v)
{
	int a = v.GetFirst();
	int b = v.GetSecond();

	while (b > 99)
	{
		b -= 100;
		a++;
	}
	while (b < -99)
	{
		b += 100;
		a--;
	}
	SetFirst(a);
	SetSecond(b);
}

Money::~Money(void)
{}


///////////////
Money operator + (Money& p1, Money& p2)
{
	Money tmp;
	int P_F = p1.GetFirst() + p2.GetFirst();
	int P_S = p1.GetSecond() + p2.GetSecond();

	if (P_S > 99)
	{
		P_S = P_S - 100;
		P_F = P_F + 1;
	}

	tmp.SetFirst(P_F);
	tmp.SetSecond(P_S);

	return tmp;

}

Money operator - (Money& p1, Money& p2)
{
	Money tmp;
	int P_F = p1.GetFirst() - p2.GetFirst();
	int P_S = p1.GetSecond() - p2.GetSecond();

	while (P_S > 99)
	{
		P_S -= 100;
		P_F++;
	}
	while (P_S < -99)
	{
		P_S += 100;
		P_F--;
	}
	tmp.SetFirst(P_F);
	tmp.SetSecond(P_S);

	return tmp;

}


double operator / (Money& p1, Money& p2)
{
	double P1 = p1.GetFirst() + 0.01 * p1.GetSecond();
	double P2 = p2.GetFirst() + 0.01 * p2.GetSecond();

	return P1 / P2;

}


Money& Money::operator ++()
{
	this->SetFirst(this->GetFirst() + 1);
	return *this;
}

Money& Money::operator --()
{
	this->SetFirst(this->GetFirst() - 1);
	return *this;
}

Money Money::operator ++(int)
{
	Money a(*this);
	this->SetFirst(this->GetFirst() + 1);
	return a;
}

Money Money::operator --(int)
{
	Money a(*this);
	this->SetFirst(this->GetFirst() - 1);
	return a;
}