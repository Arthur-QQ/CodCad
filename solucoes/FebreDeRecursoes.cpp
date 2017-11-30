#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n, k, m;
    cin >> n >> k >> m;
    long long a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long fkmodm[k];
    memset(fkmodm, 0, sizeof(fkmodm));
    for (int i = 0; i < n; i++) {
        cin >> fkmodm[i];
    }
    for (int i = n; i < k; i++) {
        for (int j = 1; j <= n; j++) {
            fkmodm[i] += (a[j - 1] % m) * (fkmodm[i-j] % m);
            fkmodm[i] %= m;
        }
    }
    cout << fkmodm[k-1] << endl;
    return 0;
}
