#include <iostream>
using namespace std;

void table_de_multiplication(int a) {
    cout << "\t";
    for (int j = 1; j <= 10; j++) {
        cout << j << "\t";
    }
    cout << endl;
    for (int i = 1; i <= a; i++) {
        cout << i << "\t";
        for (int j = 1; j <= 10; j++) {
            cout << i * j << "\t";
        }
        cout << endl;
    }
}