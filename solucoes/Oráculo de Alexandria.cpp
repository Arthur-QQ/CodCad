#include <iostream>

using namespace std;

long long bigfact(int n, int k, int sc) {
    if (k * sc >= n) {
        return 1;
    }
    return (n - k * sc) * bigfact(n, k, sc + 1);
}

int main() {
    int n;
    cin >> n;
    int nn; string s; int k;
    for (int i = 0; i < n; i++) {
        cin >> nn; cin >> s;
        k = s.length();
        //cout << nn << " " << k << "\n";
        cout << bigfact(nn, k, 0) << "\n";
    }
}
