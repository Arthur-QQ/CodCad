#include <iostream>
#define INF 0x3f3f3f3f

using namespace std;

int main() {
    int n; cin >> n; int vet[n]; int hi = -INF;
    for (int i = 0; i < n; i++) {
        cin >> vet[i];
        if (hi < vet[i]) {
            hi = vet[i];
        }
    }
    int maior = 0;
    int resp = 0;
    for (int i = 0; i < n; i++) {
        maior = max(0, maior+vet[i]);
        resp = resp > maior ? resp : maior;
    }
    if (resp > hi) {
        cout << resp << "\n";
    } else {
        cout << hi << "\n";
    }
}
