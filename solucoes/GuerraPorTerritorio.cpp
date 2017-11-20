#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int v[n];
    int s1[n];
    int ks1 = 0;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        ks1 += v[i];
        s1[i] = ks1;
    }
    for (int ii = 0;ii < n; ii ++) {
        if (s1[ii] == s1[n - 1] - s1[ii]) {
            cout << ii + 1 << endl;
        }
    }

}
