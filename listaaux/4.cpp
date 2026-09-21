#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, m, c;
    if (cin >> a >> m >> c) {
        cout << min({a / 2, m / 3, c / 5}) << "\n";
    }
    return 0;
}