#include <iostream>
#include <vector>
#include <queue>

#define INF 0x3f3f3f3f
#define MAXN 103

using namespace std;

typedef pair<int, int> pii;

int n;
int damap[MAXN][MAXN];
vector<pii> vizinhos[MAXN * MAXN];
int distances[MAXN * MAXN];
int marcacados[MAXN * MAXN];

int tonormalid(int l, int c) {
  return n * l + c;
}

void dequestra() {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      distances[tonormalid(i, j)] = INF;
    }
  }
  distances[0] = damap[0][0];
  priority_queue<pii, vector<pii>, greater<pii> > fila;
  fila.push(pii(0, 0));
  while (true) {
    int davez = -1;
    while (!fila.empty()) {
      int topinho = fila.top().second;
      fila.pop();
      if (!marcacados[topinho]) {
        davez = topinho;
        break;
      }
    }
    if (davez == -1) {
      break;
    }
    marcacados[davez] = 1;
    for (int i = 0; i < vizinhos[davez].size(); i++) {
      int da = vizinhos[davez][i].first;
      int va = vizinhos[davez][i].second;
      if (distances[va] > da + distances[davez]) {
        distances[va] = da + distances[davez];
        fila.push(pii(distances[va], va));
      }
    }
  }
}

int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> damap[i][j];
    }
  }

  int xs[4] = {1, -1, 0, 0};
  int ys[4] = {0, 0, 1, -1};

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < 4; k++) {
        int l = i + xs[k];
        int c = j + ys[k];
        if (l >= 0 && l < n && c >= 0 && c < n) {
          vizinhos[tonormalid(i, j)].push_back(pii(damap[l][c], tonormalid(l, c)));
        }
      }
    }
  }
  dequestra();
  if (n == 1) {
    cout << distances[0] << "\n";
  } else {
    cout << distances[n * n - 1] << "\n";
  }
}
