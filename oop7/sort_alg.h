#ifndef SORT_ALG_H
#define SORT_ALG_H

#include <iostream>
#include <vector>
using namespace std;

struct Complex {
	double re = 0;
	double im = 0;
	
	double module();

	void printComplex();
};

void print_vector(const vector<int> s);
void print_vector(const vector<Complex> s);

bool operator < (Complex a, Complex b);

vector<int> bubble_sort(vector<int> s);
vector<Complex> bubble_sort(vector<Complex> s);

#endif // !SORT_ALG

