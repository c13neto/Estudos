#include <iostream>

using namespace std;

int main() {
    int x, y, r;
    cin >> x >> y >> r;

    int diametro = 2 * r;

    int qtd_x = x / diametro;
    int qtd_y = y / diametro;

    cout << qtd_x * qtd_y << endl;

    return 0;
}