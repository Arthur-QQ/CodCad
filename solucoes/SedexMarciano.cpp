#include <iostream>
#include <cmath>

using namespace std;
int main() {
    int l, a, p, r;
    cin >> l >> a >> p >> r;
    if (sqrt(pow(l, 2) + pow(a, 2) + pow(p, 2)) <= 2*r) {
        cout << "S\n";
    } else {
        cout << "N\n";
    }
    return 0;
}
