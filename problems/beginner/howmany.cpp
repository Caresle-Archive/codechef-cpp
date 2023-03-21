#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 9) cout << "1" << "\n";
    else if (n <= 99) cout << "2" << "\n";
    else if (n <= 999) cout << "3" << "\n";
    else cout << "More than 3 digits\n"; 
}