#include <iostream>

int main() {
	int t;
	std::cin >> t;

	for (int i = 0; i < t; i++) {
		int sa, sb, sc;
		std::cin >> sa >> sb >> sc;
		if (sa < sb && sa < sc) {
			std::cout << "Draw\n";
		} else if (sb < sa && sb < sc) {
			std::cout << "Bob\n";
		} else {
			std::cout << "Alice\n";
		}
	}
}