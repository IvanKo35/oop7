#include "sort_alg.h"
#include <vector>
#include<algorithm>

double Complex::module()
{
	return sqrt(pow(this->re, 2) + pow(this->im, 2));
}

bool complex_compare(Complex a, Complex b)
{
	if (b.module() > a.module()) {
		return 1;
	}
	else return 0;
	
}

void Complex::printComplex()
{
	cout << re << " + " << im << "i";
}

bool Compare(int a, int b) 
{
	if (b > a) {
		return 1;
	}
	else return 0;
}

bool Compare(Complex& a, Complex& b) {
	return a.re < b.re;
}

vector<Complex> bubble_sort(vector<Complex> s) {
	for (size_t i = 0; i < s.size() - 1; i++) {
		for (size_t j = i + 1; j < s.size(); j++) {
			if (complex_compare(s[j], s[i])) {
				Complex t = s[j];
				s[j] = s[i];
				s[i] = t;
			}
		}
	}
	return s;
}

vector<int> bubble_sort(vector<int> s)
{
	for (size_t i = 0; i < s.size()-1; i++) {
		for (size_t j = i + 1; j < s.size(); j++) {
			if (Compare(s[j], s[i])) {
				int t = s[j];
				s[j] = s[i];
				s[i] = t;
			}
		}
	}
	return s;
}

void print_vector(const vector<int> s)
{
	for (const auto& i : s) {
		cout << i << ' ';
	}
}

void print_vector(const vector<Complex> s)
{
	for (const auto& i : s) {
		cout << i.re << '+' << i.im << "i ";
	}
}