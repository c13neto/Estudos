#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    int p, c;
    cin >> p >> c;
    cin.ignore();

    string estado;
    getline(cin, estado);

    double tempo_desarme;
    if (estado == "Fez metade") {
        tempo_desarme = 3.5;
    } else {
        tempo_desarme = 7.0;
    }

    double tempo_total = p + c + tempo_desarme;

    if (tempo_total <= 45.0) {
        double tempo_sobrando = 45.0 - tempo_total;
        cout << "Vai desarmar!" << endl;
        cout << fixed << setprecision(1) << tempo_sobrando << endl;
    } else {
        cout << "Corre Felipe!" << endl;
    }

    return 0;
}