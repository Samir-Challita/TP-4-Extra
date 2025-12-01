#include <iostream>
#include "Function.h"
using namespace std;

int main() {
	int a, b;
	cout << "Entrer deux entier : \nLe premier a = ";
	cin >> a;
	cout << "Le deusieme b = ";
	cin >> b;
	swap(a, b);
	cout << "Swap : a = " << a << " et b = " << b << endl;
	return 0;
}