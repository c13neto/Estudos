#include <bits/stdc++.h>
using namespace std;

int main() {
    int q1, q2, q3, e1, e2, e3;
    cin >> q1 >> q2 >> q3 >> e1 >> e2 >> e3;
    int soma = (q1 - (3 * e1)) + (q2 - (3 * e2)) + (q3 - (3 * e3));
    cout << soma << endl;
    return 0;
}
