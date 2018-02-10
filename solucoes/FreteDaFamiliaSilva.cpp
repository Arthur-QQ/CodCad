// usei kruskal, que se ferre o de prim

#include <iostream>
#include <vector>
#include <algorithm>

#define MAXN 1005

using namespace std;

typedef pair<int, pair<int, int> > pii;

int n, m;
int a, b, c;
vector<pii> arestas;
int pais[MAXN];
int pesos[MAXN];

bool compara(pii p1, pii p2) {
    return p1.first < p2.first;
}

int acha(int x) {
    if (pais[x] == x) {
        return x;
    }
    pais[x] = acha(pais[x]);
    return pais[x];
}

void junta(int v1, int v2) {
    v1 = acha(v1);
    v2 = acha(v2);
    if (pesos[v1] > pesos[v2]) {
        pais[v2] = v1;
        pesos[v1]++;
    } else {
        pais[v1] = v2;
        pesos[v2]++;
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        pais[i] = i;
        pesos[i] = 0;
    }
    for (int i = 0; i < m; i++) {
        cin >> a >> b >> c;
        arestas.push_back(make_pair(c, make_pair(a, b)));
    }
    sort(arestas.begin(), arestas.end(), compara);
    int soma = 0;
    for (int i = 0; i < m; i++) {
        if (acha(arestas[i].second.first) != acha(arestas[i].second.second)) {
            junta(arestas[i].second.first, arestas[i].second.second);
            soma += arestas[i].first;
        }
    }
    cout << soma << "\n";
}
