#include <iostream>
#include "Functions.h"
using namespace std;

int main() {
	int n, r;

	cout << "La proceure qui affiche la table de multiplication des nombres de 1 a 10 : " << endl;
	table_de_multiplication(10);
	cout << "Entrer un nb maximal pour faire le tableau : ";
	cin >> n;
	table_de_multiplication(n);
	cout << "Do you want to make another table type  0 if yes and 1 if no : ";
	cin >> r;
	while (r != 0 && r != 1) {
		cout << "Do you want to make another table type  0 if yes and 1 if no : ";
		cin >> r;
	}

	while (r == 0) {
		cout << "Entrer un nb maximal pour faire le tableau : ";
		cin >> n;
		table_de_multiplication(n);
		cout << "Do you want to make another table type  0 if yes and 1 if no : ";
		cin >> r;
		while (r != 0 && r != 1) {
			cout << "Do you want to make another table type  0 if yes and 1 if no : ";
			cin >> r;
		}
	}
	return 0;
}