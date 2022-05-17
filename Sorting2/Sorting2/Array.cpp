#include <iostream>
#include<ctime>
#include <string>
#include "date.cpp"

using namespace std;

void rand_fill(char* a, int n)
{
	srand(time(0));
	int num;
	for (int i = 0; i < n; i++)
	{
		num = rand() % 10;
		a[i] = num + '0';
	}
}

void rand_fill(int* a, int n)
{
	srand(time(0));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 100000;
}

void rand_fill(string* a, int n)
{
	srand(time(0));
	for (int i = 0; i < n; i++)
		for (int k = 1 + rand() % 20; k > 0; k--)
			a[i] += 'a' + rand() % 26;
}

void rand_fill(date* a, int n)
{
	srand(time(0));
	for (int i = 0; i < n; i++)
	{
		a[i].y = 2001 + rand() % 11;
		a[i].m = 1 + rand() % 12;
		if (a[i].m == 2)
			if (a[i].y % 4 == 0)
				a[i].d = 1 + rand() % 29;
			else
				a[i].d = 1 + rand() % 28;
		else
			if (a[i].m == 4 || a[i].m == 6 || a[i].m == 9 || a[i].m == 11)
				a[i].d = 1 + rand() % 30;
			else
				a[i].d = 1 + rand() % 31;
	}
}

template <class Type>
void reverse(Type* a, int n)
{
	Type t;
	for (int i = 0; i <= n / 2; i++)
		if (a[i] > a[n - 1 - i])
			{
				t = a[i];
				a[i] = a[n - 1 - i];
				a[n - 1 - i] = t;
			}
}

template <class Type>
void print(Type* a, int n)
{
	for (int i = 0; i < n; i++)
		cout << i + 1 << ") " << a[i] << endl;
	cout << endl;
}