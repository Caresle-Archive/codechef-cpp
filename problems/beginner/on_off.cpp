#include <iostream>

int main() {
    int t;
    std::cin >> t;
    
    for (int i = 0; i < t; i++) {
        int n;
        bool is_on = true;
        std::cin >> n;
        std::string initial_state, final_state;
        
        std::cin >> initial_state;
        std::cin >> final_state;

        for (int j = 0; j < n; j++) {
            if (initial_state[j] != final_state[j]) {
                is_on = !is_on;
            }
        }
        std::cout << is_on << "\n";
    }
}