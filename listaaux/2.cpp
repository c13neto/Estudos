#include <iostream>

using namespace std;

int main() {
    int n;
    if (cin >> n) {
        int h = n / 3600;
        int m = (n % 3600) / 60;
        int s = n % 60;
        cout << h << "h " << m << "m " << s << "s\n";
    }
    return 0;
}