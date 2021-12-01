//Money_PR.cpp
#include "Money_PR.h"

using namespace std;

Money_PR::Money_PR()
	: Pair()
{}

Money_PR::Money_PR(const int F, const int S)
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



Money_PR::Money_PR(double p)
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

Money_PR::Money_PR(const Money_PR& v)
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

Money_PR::~Money_PR(void)
{}


ostream& operator <<(ostream& out, const Money_PR& s)
{
	out << string(s);
	return out;
}

istream& operator >>(istream& in, Money_PR& s)
{
	int first, second;
	cout << "a = "; in >> first;
	cout << "b = "; in >> second;
	s.SetFirst(first);
	s.SetSecond(second);
	return in;
}


///////////////
Money_PR operator + ( Money_PR& p1, Money_PR& p2)
{
	Money_PR tmp;
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

Money_PR operator - ( Money_PR& p1, Money_PR& p2)
{
	Money_PR tmp;
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


double operator / ( Money_PR& p1, Money_PR& p2)
{
	double P1 = p1.GetFirst() + 0.01 * p1.GetSecond();
	double P2 = p2.GetFirst() + 0.01 * p2.GetSecond();

	return P1 / P2;

}


Money_PR& Money_PR::operator ++()
{
	this->SetFirst(this->GetFirst() + 1);
	return *this;
}

Money_PR& Money_PR::operator --()
{
	this->SetFirst(this->GetFirst() - 1);
	return *this;
}

Money_PR Money_PR::operator ++(int)
{
	Money_PR a(*this);
	this->SetFirst(this->GetFirst() + 1);
	return a;
}

Money_PR Money_PR::operator --(int)
{
	Money_PR a(*this);
	this->SetFirst(this->GetFirst() - 1);
	return a;
}