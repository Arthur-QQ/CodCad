#include <iostream>

using namespace std;

int buscabin(long long v[], int t, long long e) {
    int ini=0, meio=t/2, fim = t-1;
    while (ini <= fim) {
        if (v[meio] == e) {
            return meio;
        } else if (v[meio] > e) {
            fim = meio - 1;
        } else {
            ini = meio + 1;
        }
        meio = (ini + fim) / 2;
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    long long casas[n];
    for (int i = 0; i < n; i++) {
        cin >> casas[i];
    }
    long long k;
    cin >> k;
    for (int i = 0; i < n; i++) {
        int b = buscabin(casas, n, k - casas[i]);
        if (b != -1) {
            int a1 = casas[b];
            int a2 = k - casas[b];
            if (a1 > a2) {
                cout << a2 << " " << a1;
            } else {
                cout << a1 << " " << a2;
            }
            cout << endl;
            break;
        }
    }
    return 0;
}
