#include <iostream>
#include <algorithm>
#include <vector>

#define MAXN 105

using namespace std;

typedef pair<int, pair<int, int> > pii;

vector <pii> arestas;
int pais[MAXN];
int peso[MAXN];

int n, f, r;

bool compare(pii p1, pii p2) {
    return p1.first < p2.first;
}

int find(int x) {
    if (x == pais[x]) {
        return x;
    }
    pais[x] = find(pais[x]);
    return pais[x];
}

void juntar(int x, int y) {
    x = find(x);
    y = find(y);
    if (peso[x] > peso[y]) {
        pais[y] = x;
        peso[x]++;
    } else {
        pais[x] = y;
        peso[y]++;
    }
}

int main() {
    cin >> n >> f >> r;
    for (int i = 0; i < n; i++) {
        pais[i] = i;
        peso[i] = 0;
    }
    int a, b, c;
    for (int i = 0; i < f; i++) {
        cin >> a >> b >> c;
        arestas.push_back(make_pair(c, make_pair(a, b)));
    }
    sort(arestas.begin(), arestas.end(), compare);
    int current = 0;
    int soma = 0;
    for (int i = 0; i < f; i++) {
        if (find(arestas[i].second.first) != find(arestas[i].second.second)) {
            juntar(arestas[i].second.first, arestas[i].second.second);
            soma += arestas[i].first;
        }
    }
    arestas.clear();
    for (int i = f; i < f + r; i++) {
        cin >> a >> b >> c;
        arestas.push_back(make_pair(c, make_pair(a, b)));
    }
    sort(arestas.begin(), arestas.end(), compare);
    for (int i = 0; i < r; i++) {
        if (find(arestas[i].second.first) != find(arestas[i].second.second)) {
            juntar(arestas[i].second.first, arestas[i].second.second);
            soma += arestas[i].first;
        }
    }

    cout << soma << "\n";
}
