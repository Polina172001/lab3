#include <iostream>
using namespace std;

int findFirstNegativeElement(double eps) {
	int count = 0;
	double a;
	int i = 0;
	a = pow(-1, 0) * ((0 - 1) / (2 * (pow(0, 2)) + 1));
	do {
		a = pow(-1, i) * ((i - 1) / (2 * (pow(i, 2)) + 1));
		if (abs(a) <= eps && a < 0) {
			return count = i + 1;
		}
		++i;
	} while (abs(a) > 0);
}