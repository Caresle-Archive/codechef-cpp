#include <iostream>

int main() {
    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++) {
        std::string number;
        std::cin >> number;
        int number_4 = 0;
        for (const auto &ch : number) {
            if (ch == '4') {
                number_4++;
            }
        }
        std::cout << number_4 << "\n";
    }
}