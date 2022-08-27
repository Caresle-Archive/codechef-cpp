#include <iostream>

int main() {
    int t, v;

    std::cin >> t;

    for (int i = 0; i < t; i++) {
        std::cin >> v;

        int r = v % 10;

        if (r == 0) {
            std::cout << "0\n";
        } else {
            std::cout << r << "\n";
        }
    }
}