#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int b, p, o;
    if (cin >> b >> p >> o) {
        cout << fixed << setprecision(2);
        cout << b * 70.0 * 0.343 << "\n";
        cout << p * 70.0 * 1.715 << "\n";
        cout << o * 70.0 * 300000.0 << "\n";
    }
    return 0;
}