#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double a, b, c, d;
    cin >> a >> b >> c >> d;

    double area_tri = (a * b) / 2.0;
    double area_ret = c * d;

    bool cabe_direto = (a <= c && b <= d);
    bool cabe_girado = (a <= d && b <= c);

    bool possivel = (cabe_direto || cabe_girado) && (area_tri <= area_ret);

    if (possivel) {
        double sobra = area_ret - area_tri;
        cout << "Ao infinito e alem." << endl;
        cout << fixed << setprecision(1) << area_tri << " " << area_ret << " " << sobra << endl;
    } else {
        cout << "Vamos treinar na caverna do Superman." << endl;
        cout << fixed << setprecision(1) << area_tri << " " << area_ret << " " << area_ret << endl;
    }

    return 0;
}