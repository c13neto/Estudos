#include <iostream>

using namespace std;

int main() {
    long long C, c, X;
    if (cin >> C >> c >> X) {
        if (C % c == 0) {
            long long side = C / c;
            long long needed = side * side * side;
            if (X >= needed) {
                cout << "Eh possivel\n";
            } else {
                cout << "!Eh possivel\n";
            }
        } else {
            cout << "!Eh possivel\n";
        }
    }
    return 0;
}