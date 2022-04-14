#include <iostream>
#include "sort_alg.h"
#include <vector>
using namespace std;

int main()
{
    vector<int> a = { 1,4 ,12, 56,6, 23, 25, 43, 64 };
    vector<Complex> s = { {1,4} , {12, 56}, {6, 23}, {25, 43}, {4, 0} };

    a = bubble_sort(a);
    s = bubble_sort(s);
    print_vector(s);
}