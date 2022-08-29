#include <iostream>

int main() {
    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++) {
        float a, b, c;
        std::cin >> a >> b >> c;
        if ((a + b) / 2 > c) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }

    }
}