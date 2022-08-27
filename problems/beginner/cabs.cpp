#include <iostream>

int main() {
    int t, x, y;

    std::cin >> t;

    for (int i = 0; i < t; i++) {
        std::cin >> x >> y;
        if (x < y) {
            std::cout << "FIRST\n";
        } else if (y < x) {
            std::cout << "SECOND\n";
        } else {
            std::cout << "ANY\n";
        }
    }
}