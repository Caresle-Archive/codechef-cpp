#include <iostream>

int main() {
	int t;

	std::cin >> t;

	for (int i = 0; i < t; i++) {
		double q, p;
		std::cin >> q >> p;
		if (q > 1000) {
			printf("%f\n", (q * p * .9));
		} else {
			printf("%f\n", (q * p));
		}
	}
}