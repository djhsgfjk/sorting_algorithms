#include <iostream>
#include <ctime>
#include <string>
#include "date.cpp"
#include "Sorts.h"
#include "Array.h"
#include <chrono>

using namespace std;

class Timer
{
private:
	// Псевдонимы типов используются для удобного доступа к вложенным типам
	using clock_t = std::chrono::high_resolution_clock;
	using second_t = std::chrono::duration<double, std::ratio<1> >;

	std::chrono::time_point<clock_t> m_beg;

public:
	Timer() : m_beg(clock_t::now())
	{
	}

	void reset()
	{
		m_beg = clock_t::now();
	}

	double elapsed() const
	{
		return std::chrono::duration_cast<second_t>(clock_t::now() - m_beg).count();
	}
};

int main()
{
	int n = 50;
	char* a = new char[n];
	//int* a = new int[n];
	//string* a = new string[n];
	//date* a = new date[n];

	cout << "Randomly generated arrays of one bite type char numbers (0 to 9) with " << n << " elements" << endl;
	//cout << "Randomly generated arrays of int with " << n << " elements" << endl;
	//cout << "Randomly generated arrays of strings with " << n << " elements" << endl;
	//cout << "Randomly generated arrays of dates (structer of int) with " << n << " elements" << endl;

	double total_bubble = 0.0;
	double total_insertation = 0.0;
	double total_choices = 0.0;
	double total_Shell = 0.0;
	double total_quick = 0.0;
	double total_merge = 0.0;
	double total_heap = 0.0;
	double total_radix = 0.0;

	double search_time;

	Timer t;

	int i;
	for (i = 0; i < 50; i++)
	{
		cout << "Test N" << i + 1 << endl;
		cout << "simple sorts:" << endl;

		rand_fill(a, n);
		cout << "bubble: ";
		t.reset();
		bubble_sort(a, n);
		search_time = t.elapsed();
		total_bubble += search_time;
		cout << search_time << "seconds" << endl;

		cout << "insertation: ";
		rand_fill(a, n);
		t.reset();
		insertion_sort(a, n);
		search_time = t.elapsed();
		total_insertation += search_time;
		cout << search_time << "seconds" << endl;

		cout << "choices: ";
		rand_fill(a, n);
		t.reset();
		choices_sort(a, n);
		search_time = t.elapsed();
		total_choices += search_time;
		cout << search_time << "seconds" << endl;

		cout << "Shell sort: ";
		rand_fill(a, n);
		t.reset();
		Shell_sort(a, n);
		search_time = t.elapsed();
		total_Shell += search_time;
		cout << search_time << "seconds" << endl;

		cout << "quick sort: ";
		rand_fill(a, n);
		t.reset();
		quick_sort(a, 0, n - 1);
		search_time = t.elapsed();
		total_quick += search_time;
		cout << search_time << "seconds" << endl;

		cout << "merge sort: ";
		rand_fill(a, n);
		t.reset();
		merge_sort(a, 0, n - 1);
		search_time = t.elapsed();
		total_merge += search_time;
		cout << search_time << "seconds" << endl;

		cout << "heap sort: ";
		rand_fill(a, n);
		t.reset();
		heap_sort(a, n);
		search_time = t.elapsed();
		total_heap += search_time;
		cout << search_time << "seconds" << endl;

		cout << "radix sort: ";
		rand_fill(a, n);
		t.reset();
		radix_sort(a, n);
		search_time = t.elapsed();
		total_radix += search_time;
		cout << search_time << "seconds" << endl;

		cout << endl;
	}

	cout << "Total tests: " << 50 << endl;
	cout << "average bubble: " << total_bubble / i << " seconds\n";
	cout << "average insertation: " << total_insertation / i << " seconds\n";
	cout << "average choices: " << total_choices / i << " seconds\n";
	cout << "average Shell: " << total_Shell / i << " seconds\n";
	cout << "average quick: " << total_quick / i << " seconds\n";
	cout << "average merge: " << total_merge / i << " seconds\n";
	cout << "average heap: " << total_heap / i << " seconds\n";
	cout << "average radix: " << total_radix / i << " seconds\n";

	return 0;
}