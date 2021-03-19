#include <iostream>
using namespace std;

void print(int n, int k) {
	double a = 0;
	int i = 0;
	if (n == 0) {
		cout << 0 << endl;
	}
	else {
		do {
			if ((i + 1) % k == 0)
			{
				i++;
				continue;
			}
			else {
				a = pow(-1, i) * ((i - 1) / (2 * (pow(i, 2)) + 1));
				cout << "n=" << i << " " << "f=" << a << "\n";
			}
			i++;
		} while (i < n);
	}
}