#include <iostream>
using namespace std;

int parfait(int x) {
	int S = 0;
	for (int i = 1; i <= (x / 2); i++) {
		if (x % i == 0) {
			S += i;
		}
	}
	if (x == S)
		return 1;
	else
		return 0;
}










//int premier(int x) {
//	int i, S = 0;
//	for(i = 2; i <= (x / 2); i++) {
//		if (x % i == 0) {
//			break;
//		}
//		if (i > x / 2)
//			return 1;
//		else
//			return 0;
//	}
//}