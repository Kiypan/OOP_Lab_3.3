//Money_PB.cpp
#include "Money_PB.h"

using namespace std;

Money_PB::Money_PB()
	: Pair()
{}


Money_PB::Money_PB(const int F, const int S)
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



Money_PB::Money_PB(double p)
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

Money_PB::Money_PB(const Money_PB& v)
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

Money_PB::~Money_PB(void)
{}


///////////////
Money_PB operator + (Money_PB& p1, Money_PB& p2)
{
	Money_PB tmp;
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

Money_PB operator - (Money_PB& p1, Money_PB& p2)
{
	Money_PB tmp;
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


double operator / (Money_PB& p1, Money_PB& p2)
{
	double P1 = p1.GetFirst() + 0.01 * p1.GetSecond();
	double P2 = p2.GetFirst() + 0.01 * p2.GetSecond();

	return P1 / P2;

}


Money_PB& Money_PB::operator ++()
{
	this->SetFirst(this->GetFirst() + 1);
	return *this;
}

Money_PB& Money_PB::operator --()
{
	this->SetFirst(this->GetFirst() - 1);
	return *this;
}

Money_PB Money_PB::operator ++(int)
{
	Money_PB a(*this);
	this->SetFirst(this->GetFirst() + 1);
	return a;
}

Money_PB Money_PB::operator --(int)
{
	Money_PB a(*this);
	this->SetFirst(this->GetFirst() - 1);
	return a;
}