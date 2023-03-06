#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int am, bm, cm, tm, a, b, c;

        cin >> am >> bm >> cm >> tm >> a >> b >> c;

        if (a < am || b < bm || c < cm) {
            cout << "NO\n";
            continue;
        }

        if (a + b + c < tm) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
    }
}