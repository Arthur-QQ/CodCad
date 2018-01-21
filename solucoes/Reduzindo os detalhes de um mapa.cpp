#include <iostream>
#include <algorithm>

#define MAXN 501

using namespace std;

struct Aresta {
    int dist, x, y;
};

Aresta arestas[MAXN * MAXN];
Aresta melhorarvore[MAXN * MAXN];
int pais[MAXN];
int peso[MAXN];

bool comparar(Aresta a1, Aresta a2) {
    return a1.dist < a2.dist;
}

int find(int p) {
    if (pais[p] == p) {
        return p;
    } else {
        pais[p] = find(pais[p]);
        return pais[p];
    }
}

int juntar(int p1, int p2) {
    p1 = find(p1);
    p2 = find(p2);
    if (peso[p1] < peso[p2]) {
        pais[p1] = p2;
    } else if (peso[p1] > peso[p2]) {
        pais[p2] = p1;
    } else {
        pais[p1] = p2;
        peso[p2]++;
    }
}
int main() {
    int n, m;
    cin >> n >> m;
    int a, b, c;
    for (int i = 0; i < n; i++) {
        pais[i] = i;
    }
    for (int i = 0; i < m; i++) {
        cin >> arestas[i].x >> arestas[i].y >> arestas[i].dist;
        arestas[i].x--;
        arestas[i].y--;
    }
    sort(arestas, arestas+m, comparar);
    int tamanho = 0;
    int soma = 0;
    for (int i = 0; i < m; i++) {
        if (find(arestas[i].x) != find(arestas[i].y)) {
            juntar(arestas[i].x, arestas[i].y);
            melhorarvore[tamanho++] = arestas[i];
            soma += arestas[i].dist;
        }
    }
    cout << soma << "\n";
}
