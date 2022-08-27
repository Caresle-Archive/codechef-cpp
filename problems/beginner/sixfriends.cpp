#include <iostream>

int main() {
    int cost_x, cost_y, t = 0;

    std::cin >> t;

    for (int i = 0; i < t; i++) {
        std::cin >> cost_x >> cost_y;

        if (cost_x * 3 < cost_y * 2) {
            std::cout << cost_x * 3 << "\n";
        } else {
            std::cout << cost_y * 2 << "\n";
        }

    }
}