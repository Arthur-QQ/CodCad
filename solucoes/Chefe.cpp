#include <iostream>
#include <vector>

using namespace std;
#define INF 0x3f3f3f3f

vector<int> gerde[505];
int idades[505];
int ordem[505];
int visitados[505];
int menor;

void dfs(int ngc) {
  visitados[ngc] = 1;
  for (int j = 0; j < gerde[ngc].size(); j++) {
    int v = gerde[ngc][j];
    if (!visitados[v]) {
      menor = min(menor, idades[v]);
      dfs(v);
    }
  }
}

int main() {
  int n, m, inst;
  while (cin >> n >> m >> inst) {
    for (int i = 0; i < n; i++) {
      cin >> idades[i];
      gerde[i].clear();
      ordem[i] = i;
    }
    int a, b;
    for (int i = 0; i < m; i++) {
      cin >> a >> b; a--; b--;
      gerde[b].push_back(a);
    }
    char op;
    for (int i = 0; i < inst; i++) {
      cin >> op;
      if (op == 'P') {
        cin >> a; a--;
        for (int i = 0; i < n; i++) {
          visitados[i] = 0;
        }
        if (gerde[ordem[a]].size() == 0) {
          cout << "*\n";
        } else {
          menor = 1000;
          dfs(ordem[a]);
          cout << menor << "\n";
        }
      } else if (op == 'T') {
        cin >> a >> b; a--; b--;
        int temp = idades[ordem[a]];
        idades[ordem[a]] = idades[ordem[b]];
        idades[ordem[b]] = temp;
        temp = ordem[a];
        ordem[a] = ordem[b];
        ordem[b] = temp;
      }
    }
  }
}
