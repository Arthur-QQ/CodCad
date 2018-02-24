// super facil nem demorei 183912 anos
#include <iostream>
#include <algorithm>

#define MAXN 1001
#define INF 0x3f3f3f3f

using namespace std;

int n;

struct Caixa {
    int peso, res;
};

int aguenta(Caixa c) {
    return c.res - c.peso;
}

int compara(Caixa c1, Caixa c2) {
    return c1.res < c2.res;
}

Caixa caixas[MAXN];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> caixas[i].peso >> caixas[i].res;
    }
    sort(caixas, caixas+n, compara);
    int resp = 0;
    int melhor[n];
    for (int i = 0; i < n; i++) {
        melhor[i] = INF;
    }
    melhor[0] = 0;
    for (int i = 0; i < n; i++) {
        for (int j = resp; j >= 0; j--) {
            if (melhor[j+1] > melhor[j] + caixas[i].peso) {
                if (aguenta(caixas[i]) >= melhor[j]) {
                    melhor[j+1] = melhor[j] + caixas[i].peso;
                    // cout << "melhor[" << j + 1 << "] = " << caixas[i].peso + melhor[j] << "j = " << j << "\n";
                    resp = max(resp, j+1);
                }
            }
        }
    }
    cout << resp << "\n";
}
