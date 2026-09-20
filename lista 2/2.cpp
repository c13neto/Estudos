#include <iostream>

using namespace std;

int main() {
    int sc, mm, ck;
    cin >> sc >> mm >> ck;

    if (sc == 30) {
        cout << "PROXIMO MUNDO" << endl;
    } else {
        int falta_sc = 30 - sc;
        int falta_mm = 6 - mm;
        int falta_ck = 3 - ck;
        cout << falta_sc << " " << falta_mm << " " << falta_ck << endl;
    }

    return 0;
}