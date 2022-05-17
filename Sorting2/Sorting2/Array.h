#include <iostream>
#include<ctime>
#include <string>
#include "date.cpp"

using namespace std;

#ifndef ARRAY_H
#define ARRAY_H

void rand_fill(char* a, int n);

void rand_fill(int* a, int n);

void rand_fill(string* a, int n);

void rand_fill(date* a, int n);

template <class Type>
void reverse(Type* a, int n);

template <class Type>
void print(Type* a, int n);

#endif