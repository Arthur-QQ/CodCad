#include <iostream>
#include <cmath>

using namespace std;
int main() {
    double a, b;
    cin >> a >> b;
    cout.precision(4);
    cout.setf(ios::fixed);
    cout << pow(a, b) << endl;
    return 0;
}
