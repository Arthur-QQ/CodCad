#include <iostream>

using namespace std;
int main() {
    int m, n;
    cin >> m >> n;
    int maior;
    if (m > n) {
        maior = m;
    } else {
        maior = n;
    }
    int vm[maior];
    int vn[maior];
    for (int i = 0; i < m; i++) {
        cin >> vm[i];
    }
    for (int i = m; i < maior; i++) {
        vm[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        cin >> vn[i];
    }
    for (int i = n; i < maior; i++) {
        vn[i] = 0;
    }
    int somalocona[maior];
    somalocona[0] = 0;
    int soma = 0;
    int carregado = 0;
    bool can_add = false;
    int ending_index = maior - 1;
    for (int i = maior - 1; i >= 0; i--) {
        soma = vm[i] + vn[i] + carregado;
        carregado = (soma - soma % 2) / 2;
        if (soma % 2 == 1 or can_add) {
            if (not can_add) {
                ending_index = i;
            }
            can_add = true;
            somalocona[i] = soma % 2;
        } else if (i == 0) {
            somalocona[i] = 0;
            ending_index = 0;
        } else {
            somalocona[i] = -1;
        }
    }

    for (int i = 0; i <= ending_index; i++) {
        if (i < ending_index) {
            cout << somalocona[i] << " ";
        } else {
            cout << somalocona[i] << endl;
        }
    }

    return 0;
}
