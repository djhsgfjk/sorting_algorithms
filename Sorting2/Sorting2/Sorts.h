#include <iostream>
#include "date.cpp"

using namespace std;

#ifndef SORTS_H
#define SORTS_H

void bubble_sort(char* a, int n);
void bubble_sort(int* a, int n);
void bubble_sort(string* a, int n);
void bubble_sort(date* a, int n);

void insertion_sort(char* a, int n);
void insertion_sort(int* a, int n);
void insertion_sort(string* a, int n);
void insertion_sort(date* a, int n);

void choices_sort(char* a, int n);
void choices_sort(int* a, int n);
void choices_sort(string* a, int n);
void choices_sort(date* a, int n);

void Shell_sort(char* a, int n);
void Shell_sort(int* a, int n);
void Shell_sort(string* a, int n);
void Shell_sort(date* a, int n);

void quick_sort(char* a, int first, int last);
void quick_sort(int* a, int first, int last);
void quick_sort(string* a, int first, int last);
void quick_sort(date* a, int first, int last);

template <class Type>
void merge(Type* a, int l, int m, int r);
void merge_sort(char* a, int l, int r);
void merge_sort(int* a, int l, int r);
void merge_sort(string* a, int l, int r);
void merge_sort(date* a, int l, int r);

template <class Type>
void heapify(Type* a, int k, int i);
void heap_sort(char* a, int n);
void heap_sort(int* a, int n);
void heap_sort(string* a, int n);
void heap_sort(date* a, int n);

template <class Type>
Type get_max(Type* a, int n);
template <class Type>
int get_max_size(Type* a, int n);

void count_sort(char* a, int n);
void radix_sort(char* a, int n);

void count_sort(int* a, int n, int exp);
void radix_sort(int* a, int n);

void count_sort(string* a, int exp, int b, int e);
void radix_sort(string* a, int n);

void count_sort_date_year(date* a, int n, int exp);
void count_sort_date_month(date* a, int exp, int b, int e);
void count_sort_date_day(date* a, int exp, int b, int e);
void radix_sort(date* a, int n);
void radix_sort(date* a, int n);

#endif
