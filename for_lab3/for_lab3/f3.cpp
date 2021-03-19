#include <iostream>
using namespace std;

void print(int n, int k) {
	double a = 0;
	for (int i = 0; i < n; i++) {
		if ((i + 1) % k == 0)
		{
			continue;
		}
		else {
			a = pow(-1, i) * ((i - 1) / (2 * (pow(i, 2)) + 1));
			cout << "n=" << i << " " << "f=" << a << "\n";
		}
	}
}