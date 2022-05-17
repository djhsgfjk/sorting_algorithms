#include <iostream>
#include <string>
#include<ctime>
#include <queue>
#include "date.cpp"
#include <chrono>

using namespace std;

void bubble_sort(char* a, int n)
{
	char t;
	for (int k = n - 1; k > 0; k--)
		for (int i = 0; i < n - 1; i++)
			if (a[i] > a[i + 1])
			{
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
			}
}

void bubble_sort(int* a, int n)
{
	int t;
	for (int k = n - 1; k > 0; k--)
		for (int i = 0; i < n - 1; i++)
			if (a[i] > a[i + 1])
			{
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
			}
}

void bubble_sort(string* a, int n)
{
	string t;
	for (int k = n - 1; k > 0; k--)
	{
		for (int i = 0; i < n - 1; i++)
			if (a[i] > a[i + 1])
			{
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
			}
	}
}

void bubble_sort(date* a, int n)
{
	date t;
	for (int k = n - 1; k > 0; k--)
	{
		for (int i = 0; i < n - 1; i++)
			if (a[i] > a[i + 1])
			{
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
			}
	}
}

void insertion_sort(char* a, int n)
{
	char t;
	for (int i = 0; i < n; i++)
		for (int j = i; j > 0 && a[j - 1] > a[j]; j--)
		{
			t = a[j - 1];
			a[j - 1] = a[j];
			a[j] = t;
		}

}

void insertion_sort(int* a, int n)
{
	int t;
	for (int i = 0; i < n; i++)
		for (int j = i; j > 0 && a[j - 1] > a[j]; j--)
		{
			t = a[j - 1];
			a[j - 1] = a[j];
			a[j] = t;
		}

}

void insertion_sort(string* a, int n)
{
	string t;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j > 0 && a[j - 1] > a[j]; j--)
		{
			t = a[j - 1];
			a[j - 1] = a[j];
			a[j] = t;
		}
	}

}

void insertion_sort(date* a, int n)
{
	date t;
	for (int i = 0; i < n; i++)
		for (int j = i; j > 0 && a[j - 1] > a[j]; j--)
		{
			t = a[j - 1];
			a[j - 1] = a[j];
			a[j] = t;
		}

}

void choices_sort(char* a, int n)
{
	char t;
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i] > a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
}

void choices_sort(int* a, int n)
{
	int t;
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i] > a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
}

void choices_sort(string* a, int n)
{
	string t;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
}

void choices_sort(date* a, int n)
{
	date t;
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i] > a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
}

void Shell_sort(char* a, int n)
{
	int i, j, k, increment;
	char temp;
	int swp = 0, comp = 0; increment = n / 2;
	while (increment > 0)
	{
		for (i = 0;i < increment;i++)
		{
			for (j = 0;j < n;j += increment)
			{
				temp = a[j];
				for (k = j - increment;k >= 0 && temp < a[k];k -= increment)
				{
					comp++;
					swp++;
					a[k + increment] = a[k];
				}
				a[k + increment] = temp;
				swp++;
			}
		}
		comp++;
		if (increment / 2 != 0)
			increment = increment / 2;
		else if (increment == 1)
			increment = 0;
		else
			increment = 1;
	}
}

void Shell_sort(int* a, int n)
{
	int i, j, k, increment;
	int temp;
	int swp = 0, comp = 0; increment = n / 2;
	while (increment > 0)
	{
		for (i = 0;i < increment;i++)
		{
			for (j = 0;j < n;j += increment)
			{
				temp = a[j];
				for (k = j - increment;k >= 0 && temp < a[k];k -= increment)
				{
					comp++;
					swp++;
					a[k + increment] = a[k];
				}
				a[k + increment] = temp;
				swp++;
			}
		}
		comp++;
		if (increment / 2 != 0)
			increment = increment / 2;
		else if (increment == 1)
			increment = 0;
		else
			increment = 1;
	}
}

void Shell_sort(string* a, int n)
{
	int i, j, k, increment;
	string temp;
	int swp = 0, comp = 0; increment = n / 2;
	while (increment > 0)
	{
		for (i = 0;i < increment;i++)
		{
			for (j = 0;j < n;j += increment)
			{
				temp = a[j];
				for (k = j - increment;k >= 0 && temp < a[k];k -= increment)
				{
					comp++;
					swp++;
					a[k + increment] = a[k];
				}
				a[k + increment] = temp;
				swp++;
			}
		}
		comp++;
		if (increment / 2 != 0)
			increment = increment / 2;
		else if (increment == 1)
			increment = 0;
		else
			increment = 1;
	}
}

void Shell_sort(date* a, int n)
{
	int i, j, k, increment;
	date temp;
	int swp = 0, comp = 0; increment = n / 2;
	while (increment > 0)
	{
		for (i = 0;i < increment;i++)
		{
			for (j = 0;j < n;j += increment)
			{
				temp = a[j];
				for (k = j - increment;k >= 0 && temp < a[k];k -= increment)
				{
					comp++;
					swp++;
					a[k + increment] = a[k];
				}
				a[k + increment] = temp;
				swp++;
			}
		}
		comp++;
		if (increment / 2 != 0)
			increment = increment / 2;
		else if (increment == 1)
			increment = 0;
		else
			increment = 1;
	}
}

void quick_sort(char* a, int first, int last)
{
	char mid, t;
	int f = first, l = last;
	mid = a[(f + l) / 2];
	do
	{
		while (a[f] < mid)
			f++;
		while (a[l] > mid)
			l--;
		if (f <= l)
		{
			t = a[f];
			a[f] = a[l];
			a[l] = t;
			f++;
			l--;
		}
	} while (f < l);
	if (first < l)
		quick_sort(a, first, l);
	if (f < last)
		quick_sort(a, f, last);
}

void quick_sort(int* a, int first, int last)
{
	int mid, t;
	int f = first, l = last;
	mid = a[(f + l) / 2];
	do
	{
		while (a[f] < mid)
			f++;
		while (a[l] > mid)
			l--;
		if (f <= l)
		{
			t = a[f];
			a[f] = a[l];
			a[l] = t;
			f++;
			l--;
		}
	} while (f < l);
	if (first < l)
		quick_sort(a, first, l);
	if (f < last)
		quick_sort(a, f, last);
}

void quick_sort(string* a, int first, int last)
{
	string mid, t;
	int f = first, l = last;
	mid = a[(f + l) / 2];
	do
	{
		while (a[f] < mid)
			f++;
		while (a[l] > mid)
			l--;
		if (f <= l)
		{
			t = a[f];
			a[f] = a[l];
			a[l] = t;
			f++;
			l--;
		}
	} while (f < l);
	if (first < l)
		quick_sort(a, first, l);
	if (f < last)
		quick_sort(a, f, last);
}

void quick_sort(date* a, int first, int last)
{
	date mid, t;
	int f = first, l = last;
	mid = a[(f + l) / 2];
	do
	{
		while (a[f] < mid)
			f++;
		while (a[l] > mid)
			l--;
		if (f <= l)
		{
			t = a[f];
			a[f] = a[l];
			a[l] = t;
			f++;
			l--;
		}
	} while (f < l);
	if (first < l)
		quick_sort(a, first, l);
	if (f < last)
		quick_sort(a, f, last);
}

template <class Type>
void merge(Type* a, int l, int m, int r)
{
	int n1 = m - l + 1;
	int n2 = r - m;
	Type* L = new Type[n1];
	Type* R = new Type[n2];
	for (int i = 0; i < n1; i++)
		L[i] = a[l + i];
	for (int j = 0; j < n2; j++)
		R[j] = a[m + 1 + j];

	int i = 0;
	int j = 0;
	int k = l;
	while (i < n1 && j < n2)
	{
		if (R[j] > L[i])
		{
			a[k] = L[i];
			i++;
		}
		else
		{
			a[k] = R[j];
			j++;
		}
		k++;
	}
	while (i < n1)
	{
		a[k] = L[i];
		i++;
		k++;
	}
	while (j < n2)
	{
		a[k] = R[j];
		j++;
		k++;
	}
}

void merge_sort(char* a, int l, int r)
{
	if (l < r)
	{
		int m = (l + r) / 2;
		merge_sort(a, l, m);
		merge_sort(a, m + 1, r);
		merge(a, l, m, r);
	}
}

void merge_sort(int* a, int l, int r)
{
	if (l < r)
	{
		int m = (l + r) / 2;
		merge_sort(a, l, m);
		merge_sort(a, m + 1, r);
		merge(a, l, m, r);
	}
}

void merge_sort(string* a, int l, int r)
{
	if (l < r)
	{
		int m = (l + r) / 2;
		merge_sort(a, l, m);
		merge_sort(a, m + 1, r);
		merge(a, l, m, r);
	}
}

void merge_sort(date* a, int l, int r)
{
	if (l < r)
	{
		int m = (l + r) / 2;
		merge_sort(a, l, m);
		merge_sort(a, m + 1, r);
		merge(a, l, m, r);
	}
}

template <class Type>
void heapify(Type* a, int k, int i)
{
	Type t;
	int largest = i;
	int l = 2 * i + 1;
	int r = 2 * i + 2;
	if (l < k && a[l] > a[largest])
		largest = l;
	if (r < k && a[r] > a[largest])
		largest = r;
	if (largest != i)
	{
		t = a[i];
		a[i] = a[largest];
		a[largest] = t;

		heapify(a, k, largest);
	}
}

void heap_sort(char* a, int n)
{
	char t;
	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(a, n, i);
	for (int i = n - 1; i > 0; i--)
	{
		t = a[0];
		a[0] = a[i];
		a[i] = t;

		heapify(a, i, 0);
	}
}

void heap_sort(int* a, int n)
{
	int t;
	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(a, n, i);
	for (int i = n - 1; i > 0; i--)
	{
		t = a[0];
		a[0] = a[i];
		a[i] = t;

		heapify(a, i, 0);
	}
}


void heap_sort(string* a, int n)
{
	string t;
	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(a, n, i);
	for (int i = n - 1; i > 0; i--)
	{
		t = a[0];
		a[0] = a[i];
		a[i] = t;

		heapify(a, i, 0);
	}
}


void heap_sort(date* a, int n)
{
	date t;
	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(a, n, i);
	for (int i = n - 1; i > 0; i--)
	{
		t = a[0];
		a[0] = a[i];
		a[i] = t;

		heapify(a, i, 0);
	}
}

template <class Type>
Type get_max(Type* a, int n)
{
	Type max = a[0];
	for (int i = 1; i < n; i++)
		if (a[i] > max)
			max = a[i];
	return max;
}

template <class Type>
int get_max_size(Type* a, int n)
{
	int max = a[0].length();
	for (int i = 1; i < n; i++)
	{
		if (a[i].length() > max)
			max = a[i].length();
	}
	return max;
}

void count_sort(char* a, int n)
{
	char* output = new char[n];
	int i;
	int count[10] = { 0 };
	int x = 0;

	for (i = 0; i < n; i++)
	{
		count[(int)(a[i] - '0')]++;
	}

	for (i = 1; i < 10; i++)
		count[i] += count[i - 1];

	for (i = n - 1; i >= 0; i--)
	{
		output[--count[(int)(a[i] - '0')]] = a[i];
	}

	for (i = 0; i < n; i++)
	{
		a[i] = output[i];
	}

	delete[] output;
}

void radix_sort(char* a, int n)
{
	count_sort(a, n);
}

void count_sort(int* a, int n, int exp)
{
	int* output = new int[n];
	int i, count[10] = { 0 };

	for (i = 0; i < n; i++)
		count[(a[i] / exp) % 10]++;

	for (i = 1; i < 10; i++)
		count[i] += count[i - 1];

	for (i = n - 1; i >= 0; i--)
	{
		output[--count[(a[i] / exp) % 10]] = a[i];
	}

	for (i = 0; i < n; i++)
		a[i] = output[i];
	delete[] output;
}

void radix_sort(int* a, int n)
{
	int m = get_max(a, n);
	for (int exp = 1; m / exp > 0; exp *= 10)
		count_sort(a, n, exp);
}

void count_sort(string* a, int exp, int b, int e)
{
	string* output = new string[e - b];
	int i;
	int count[27] = { 0 };
	int x = 0;

	for (i = b; i < e; i++)
	{
		if (a[i].length() < exp + 1)
			x = 0;
		else
			x = (int)(a[i][exp] - 'a') + 1;
		count[x]++;
	}

	if (b < e)
		for (i = 1; i < 27; i++)
			count[i] += count[i - 1];

	for (i = e - 1; i >= b; i--)
	{
		if (a[i].length() < exp + 1)
			x = 0;
		else
			x = (int)(a[i][exp] - 'a') + 1;
		output[--count[x]] = a[i];
	}

	x = 0;
	for (i = b; i < e; i++, x++)
	{
		a[i] = output[x];
	}
	delete[] output;
}

void radix_sort(string* a, int n)
{
	int m = get_max_size(a, n);
	int b = 0, e = n;
	int* next = new int[27];
	int i, j = 27;
	int x;
	for (int exp = 0; exp < m;)
	{
		if (b < e - 1)
			count_sort(a, exp, b, e);

		if (j == 27)
		{
			for (i = 0; i < 27; i++)
				next[i] = 0;
			for (i = 0; i < n; i++)
			{
				if (a[i].length() < exp + 1)
					x = 0;
				else
					x = (int)(a[i][exp] - 'a') + 1;
				next[x]++;
			}
			exp++;
			j = 0;
			e = next[j++];
		}

		do
		{
			b = e; e += next[j++];
		} while (b >= e - 1 && j < 27);

	}
}

void count_sort_date_year(date* a, int n, int exp)
{
	date* output = new date[n];
	int i, count[10] = { 0 };

	for (i = 0; i < n; i++)
		count[(a[i].y / exp) % 10]++;

	for (i = 1; i < 10; i++)
		count[i] += count[i - 1];

	for (i = n - 1; i >= 0; i--)
	{
		output[--count[(a[i].y / exp) % 10]] = a[i];
	}

	for (i = 0; i < n; i++)
		a[i] = output[i];
	delete[] output;
}

void count_sort_date_month(date* a, int exp, int b, int e)
{
	date* output = new date[e - b];
	int i, count[10] = { 0 };

	for (i = b; i < e; i++)
		count[(a[i].m / exp) % 10]++;

	for (i = 1; i < 10; i++)
		count[i] += count[i - 1];

	for (i = e - 1; i >= b; i--)
	{
		output[--count[(a[i].m / exp) % 10]] = a[i];
	}

	int x = 0;
	for (i = b; i < e; i++, x++)
	{
		a[i] = output[x];
	}
	delete[] output;
}

void count_sort_date_day(date* a, int exp, int b, int e)
{
	date* output = new date[e - b];
	int i, count[10] = { 0 };

	for (i = b; i < e; i++)
		count[(a[i].d / exp) % 10]++;

	for (i = 1; i < 10; i++)
		count[i] += count[i - 1];

	for (i = e - 1; i >= b; i--)
	{
		output[--count[(a[i].d / exp) % 10]] = a[i];
	}

	int x = 0;
	for (i = b; i < e; i++, x++)
	{
		a[i] = output[x];
	}
	delete[] output;
}

void radix_sort(date* a, int n)
{
	int exp;
	for (exp = 1; exp < 1000; exp *= 10)
	{
		count_sort_date_year(a, n, exp);
	}

	queue<int> count;
	for (int i = 0, y = -1; i < n; i++)
	{
		if (a[i].y > y)
		{
			count.push(1);
			y = a[i].y;
		}
		else
			count.back()++;
	}

	int b, e = 0;
	for (exp = 1; exp < 100;)
	{
		do
		{
			b = e; e += count.front();
			count.push(count.front());
			count.pop();
		} while (b >= e - 1 && e < n);

		if (b < e - 1)
			count_sort_date_month(a, exp, b, e);

		if (e >= n)
		{
			exp *= 10;
			e = 0;
		}
	}

	queue<int> c;
	count = c;
	for (int i = 0, y = -1, m = -1; i < n; i++)
	{
		if (a[i].y > y)
		{
			m = -1;
			y = a[i].y;
		}
		if (a[i].m > m)
		{
			count.push(1);
			m = a[i].m;
		}
		else
			count.back()++;
	}

	e = 0;
	for (exp = 1; exp < 100;)
	{
		do
		{
			b = e; e += count.front();
			count.push(count.front());
			count.pop();
		} while (b >= e - 1 && e < n);

		if (b < e - 1)
			count_sort_date_day(a, exp, b, e);

		if (e >= n)
		{
			exp *= 10;
			e = 0;
		}
	}
}