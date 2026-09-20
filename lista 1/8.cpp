#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    int luther = abs(2023 - a) * 2;
    int diego = abs(2023 - b) * 2;
    int alisson = abs(2023 - c) * 2;
    int klaus = abs(2023 - d) * 2;
    int ben = abs(2023 - e) * 2;
    int viktor = abs(2023 - f) * 2;

    int five = luther + diego + alisson + klaus + ben + viktor;

    cout << "Luther " << luther << endl;
    cout << "Diego " << diego << endl;
    cout << "Alisson " << alisson << endl;
    cout << "Klaus " << klaus << endl;
    cout << "Five " << five << endl;
    cout << "Ben " << ben << endl;
    cout << "Viktor " << viktor << endl;

    return 0;
}