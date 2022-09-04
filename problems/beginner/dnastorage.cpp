#include <iostream>

int main() {
	int t;
	std::cin >> t;

	for (int i = 0; i < t; i++) {
		int string_length = 0;
		std::cin >> string_length;
		std::string binary_string = "";
		std::cin >> binary_string;
		std::string encoded = "";

		for (int j = 0; j < string_length; j += 2) {
			std::string a;
			a = binary_string[j];
			a += binary_string[j + 1];
			
			if (a == "00") {
				encoded += "A";
			} else if (a == "01") {
				encoded += "T";
			} else if (a == "10") {
				encoded += "C";
			} else {
				encoded += "G";
			}
		}

		std::cout << encoded << "\n";
	}
}