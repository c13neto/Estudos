#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int total = a + b + c;

    if (total > 80 || total < 20 || a > 50 || b > 50 || c > 50) {
        cout << "Shrek vai dar o urro!" << endl;
    } else {
        cout << "Shrek ficou calmo." << endl;
    }

    return 0;
}