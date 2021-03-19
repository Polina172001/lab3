#include <iostream>
using namespace std;

double summ2(double eps) {
	double a = 0;
	double sum = 0;
	int i = 0;
	if (eps == 0) {
		return 0;
	}
	else {
		do {
			a = pow(-1, i) * ((i - 1) / (2 * (pow(i, 2)) + 1));
			sum += a;
			++i;
		} while (abs(a) > eps);
		return sum;
	}
}