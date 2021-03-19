#include <iostream>

using namespace std;

double summ2(double eps) {
	double a = 0;
	double sum = 0;
	a = pow(-1, 0) * ((0 - 1) / (2 * (pow(0, 2)) + 1));
	for (int i = 0; abs(a) > eps; i++) {
		a = pow(-1, i) * ((i - 1) / (2 * (pow(i, 2)) + 1));
		sum += a;
	}
	return sum;
}