#include <iostream>

using namespace std;

int main() {
    int t, d;
    int v, p;

    if (cin >> t >> d >> v >> p) {
        int total_pedagios = t / d;
        int custo_distancia = t * v;
        int custo_pedagios = total_pedagios * p;

        cout << custo_distancia + custo_pedagios << endl;
    }

    return 0;
}