#include <iostream>
using namespace std;

void swap(int &a, int &b) {
	int r;
	r = a;
	a = b;
	b = r;
}