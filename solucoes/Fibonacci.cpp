#include <iostream>

using namespace std;

int f(int p) {
    if (p <= 1) {
        return 1;
    } else {
        return f(p - 1) + f(p - 2);
    }
}

int main() {
    int n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}
