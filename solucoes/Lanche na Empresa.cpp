#include <iostream>
#include <cstring>

#define MAXN 255
#define INF 0x3f3f3f3f

using namespace std;

int n, m;
int dists[MAXN][MAXN];

int mymax(int a, int b) {
    if (a >= INF && b >= INF) {
        return INF;
    } else if (a >= INF) {
        return b;
    } else if (b >= INF) {
        return a;
    } else {
        return max(a, b);
    }
}

int main() {
    cin >> n >> m;
    memset(dists, INF, sizeof(dists));
    int u, v, w;
    for (int i = 0; i < n; i++) {
        dists[i][i] = 0;
    }
    for (int i = 0; i < m; i++) {
        cin >> u >> v >> w; u--; v--;
        dists[u][v] = w;
        dists[v][u] = w;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                dists[j][k] = min(dists[j][k], dists[j][i] + dists[i][k]);
            }
        }
    }
    int minimo = INF, maximo;
    for (int i = 0; i < n; i++) {
        maximo = -INF;
        for (int j = 0; j < n; j++) {
            if (dists[i][j] > maximo && dists[i][j] != INF) {
                maximo = dists[i][j];
            }
        }
        if (minimo > maximo && maximo > 0) {
            minimo = maximo;
        }
    }
    cout << minimo << "\n";
}
