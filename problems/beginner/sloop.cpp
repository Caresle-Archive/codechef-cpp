#include <iostream>

int main() {
	int t;
	std::cin >> t;
	for(int i = 0; i < t; i++) {
		int m, s;
		std::cin >> m >> s;

		std::cout << m / s << "\n";
	}
}