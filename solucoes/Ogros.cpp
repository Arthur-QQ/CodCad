#include <iostream>

using namespace std;

int buscabin(long long vetor[], int tamanho, long long elemento) {
    int ini = 0, meio = tamanho / 2, fim = tamanho - 1;
    if (tamanho == 1) {
        if (elemento < vetor[0]) {
            return -1;
        } else {
            return 0;
        }
    } else if (tamanho == 2) {
        if (elemento >= vetor[0] and elemento < vetor[1]) {
            return 0;
        } else if (elemento < vetor[0]) {
            return -1;
        } else {
            return 1;
        }
    }
    while (ini <= fim) {
        if (meio == 0) {
            if (elemento < vetor[0]) {
                return -1;
            } else {
                return 0;
            }
        } else if (meio == tamanho - 1) {
            if (elemento >= vetor[tamanho-1]) {
                return tamanho - 1;
            } else {
                return tamanho - 2;
            }
        } else {
            if (elemento >= vetor[meio] and elemento < vetor[meio + 1]) {
                return meio;
            } else if (ini + 1 == fim) {
                meio += 1;
            }
        }
        if (elemento > vetor[meio]) {
            ini = meio;
        } else if (elemento == vetor[meio]) {
            return meio;
        } else {
            fim = meio;
        }
        meio = (ini + fim) / 2;
    }
    return -3;
}
int main() {
    //int vvv = 2;
    //int v[vvv] = {5, 200}; // < nth
    //cout << buscabin(v, vvv, 200);
    int n, m;
    cin >> n >> m;
    long long faixas[n - 1];
    long long pont[n];
    for (int i = 0; i < n - 1; i++) {
        cin >> faixas[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> pont[i];
    }
    long long atual;
    for (int i = 0; i < m; i++) {
        cin >> atual;
        int bb = buscabin(faixas, n - 1, atual);
        cout << pont[bb + 1] << " ";
    }
    cout << endl;
}
