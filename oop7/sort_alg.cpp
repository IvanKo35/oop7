#include "sort_alg.h"
#include <vector>
#include<algorithm>

double Complex::module()
{
	return sqrt(pow(this->re, 2) + pow(this->im, 2));
}

void Complex::printComplex()
{
	cout << re << " + " << im << "i";
}

vector<Complex> bubble_sort(vector<Complex> s) {
	for (size_t i = 0; i < s.size() - 1; i++) {
		for (size_t j = i + 1; j < s.size(); j++) {
			if (s[j] < s[i]) {
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
			if (s[j] < s[i]) {
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

bool operator<(Complex a, Complex b)
{
	bool out = a.module() < b.module() ? 1 : 0;
	return out;
}
