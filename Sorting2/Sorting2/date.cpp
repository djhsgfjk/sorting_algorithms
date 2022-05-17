#pragma once
#include <iostream>

using namespace std;

struct date
{
	int d;
	int m;
	int y;

	date& operator= (const date& d)
	{
		this->d = d.d;
		this->m = d.m;
		this->y = d.y;

		return *this;
	}

	friend bool operator> (const date& d1, const date& d2)
	{
		if (d1.y == d2.y && d1.m == d2.m && d1.d <= d2.d)
			return false;
		if (d1.y == d2.y && d1.m <= d2.m)
			return false;
		if (d1.y <= d2.y)
			return false;

		return true;
	}

	friend bool operator< (const date& d1, const date& d2)
	{
		if (d1.y == d2.y && d1.m == d2.m && d1.d >= d2.d)
			return false;
		if (d1.y == d2.y && d1.m >= d2.m)
			return false;
		if (d1.y >= d2.y)
			return false;

		return true;
	}

	friend ostream& operator<< (ostream& out, const date& d)
	{
		out << d.d << "." << d.m << "." << d.y;
		return out;
	}
};