#include <iostream>

using namespace std;

int main() {
    int r1, r2, r3, r4, r5;
    cin >> r1 >> r2 >> r3 >> r4 >> r5;

    double media = (r1 + r2 + r3 + r4 + r5) / 5.0;

    if (media < 300) {
        cout << "Ambiente seguro" << endl;
    } else if (media <= 600) {
        cout << "Ambiente instavel" << endl;
    } else {
        cout << "Ambiente altamente perigoso" << endl;
    }

    if (r1 > 600 || r2 > 600 || r3 > 600 || r4 > 600 || r5 > 600) {
        cout << "Pelo menos um local altamente perigoso" << endl;
    }

    return 0;
}