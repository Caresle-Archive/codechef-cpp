#include <iostream>

int main() {
    int test = 0, km = 0;

    std::cin >> test;

    for (int i = 0; i < test; i++) {
        std::cin >> km;
        if (km <= 300) {
            std::cout << "3000\n";
        } else {
            std::cout << km * 10 << "\n";
        }
    }
    
}