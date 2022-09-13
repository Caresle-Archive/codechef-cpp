#include <iostream>

int main() {
	int t;
	std::cin >> t;
	char vowels[] = {'a', 'e', 'i', 'o', 'u'};
	for (int i = 0; i < t; i++) {
		int count = 0, length;
		std::string s;
		std::cin >> length >> s;
		for (const auto &c : s) {
			bool find_vowel = false;
			for (const auto &v : vowels) {
				if (c == v) {
					find_vowel = true;
				}
			}
			if (find_vowel && count <= 3) {
				count = 0;
			}
			else {
				count++;
			}
		}
		if (count >= 4) {
			std::cout << "NO\n"; 
		} else {
			std::cout << "YES\n";
		}
	}
}