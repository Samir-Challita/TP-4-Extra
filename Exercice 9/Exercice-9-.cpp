#include <iostream>
#include "Functions.h"
using namespace std;

int main() {
	cout << "Les nombres parfaits entre 6 et 1000 sont : " << endl;

	for (int x = 6; x <= 1000; x++) {
		if (parfait(x) == 1)
			cout << x << endl;
	}

	int p_nb, d_nb;
	cout << "Enter le premier et le dernier nb que tu desire pour voire les nb pardaits entre eux : "
		<< "\nPremier nb : ";
	cin >> p_nb;
	cout << "Deusieme nb : ";
	cin >> d_nb;
	while (d_nb <= p_nb) {
		cout << "Deusieme nb : ";
		cin >> d_nb;
	}
	for (int x = p_nb; x <= d_nb; x++) {
		if (parfait(x) == 1)
			cout << x << endl;
	}
	return 0;
}