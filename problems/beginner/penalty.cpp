#include <iostream>

using namespace std;

int main() {
    int t;

    cin >> t;

    for (int i = 0; i < t; i++) {
        int a[10];
        int t1 = 0, t2 = 0;

        for (int j = 0; j < 10; j++)
            cin >> a[j];

        for (int j = 0; j < 10; j++) {
            if ((j + 1) % 2 != 0 && a[j] == 1)
                t1++;
            if ((j + 1) % 2 == 0 && a[j] == 1)
                t2++;
        }
        
        if (t1 == t2) {
            cout << 0 << "\n";
            continue;
        }

        cout << (t1 > t2 ? 1 : 2) << "\n";
    }
}