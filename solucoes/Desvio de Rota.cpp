#include <iostream>
#include <vector>
#include <queue>

#define INF 0x3f3f3f3f

using namespace std;

typedef pair<int, int> pii;

int n, m, c, k;
vector<pii> adjs[300];
int distancias[300];
int marcadineos[300];

void dequestra() {
    for (int i = 0; i < n; i++) {
        distancias[i] = INF;
    }
    distancias[k] = 0;
    priority_queue<pii, vector<pii>, greater<pii> > fila;
    fila.push(pii(0, k));
    while (true) {
        int davez = -1; int cidade_topo;
        while (!fila.empty()) {
            cidade_topo = fila.top().second;
            fila.pop();
            if (!marcadineos[cidade_topo]) {
                davez = cidade_topo;
                break;
            }
        }
        if (davez == -1) {
            break;
        }
        marcadineos[cidade_topo] = 1;
        for (int i = 0; i < adjs[cidade_topo].size(); i++) {
            int cidade_atual = adjs[cidade_topo][i].second;
            int distancia_atual = adjs[cidade_topo][i].first;
            if (distancias[cidade_atual] > distancias[cidade_topo] + distancia_atual) {
                if ((cidade_topo < c && cidade_topo + 1 == cidade_atual) || cidade_topo >= c) {
                    distancias[cidade_atual] = distancias[cidade_topo] + distancia_atual;
                    fila.push(pii(distancias[cidade_atual], cidade_atual));
                }
            }
        }
    }
}

int main() {
    while (true) {
        cin >> n >> m >> c >> k;
        if (n == m && m == c && c == k && c == 0) {
            break;
        }
        for (int i = 0; i < n; i++) {
            adjs[i].clear();
            marcadineos[i] = 0;
        }
        int u, v, p;
        for (int i = 0; i < m; i++) {
            cin >> u >> v >> p;
            adjs[u].push_back(pii(p, v));
            adjs[v].push_back(pii(p, u));
        }
        dequestra();
        cout << distancias[c-1] << "\n";
    }
}
