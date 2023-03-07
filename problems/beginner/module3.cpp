#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int a, b;
        cin >> a >> b;

        if (a % 3 == 0 || b % 3 == 0) {
            cout << 0 << "\n";
            continue;
        }

        if (abs(a - b) % 3 == 0) {
            cout << 1 << "\n";
            continue;
        } else {
            cout << 2 << "\n";
        }

    }
}