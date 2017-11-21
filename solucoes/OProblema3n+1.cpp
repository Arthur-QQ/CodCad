#include <iostream>

using namespace std;

int v = 0;
int f(int p) {
    if (p % 2 == 0) {
        f(p / 2);
        v += 1;
    } else if (p != 1) {
        f(3*p+1);
        v += 1;
    }
}
int main() {
    int n;
    cin >> n;
    f(n);
    cout << v << endl;
    return 0;
}
