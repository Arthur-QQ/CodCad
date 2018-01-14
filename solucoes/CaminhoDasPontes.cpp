#include <iostream>
#include <vector>
#include <queue>

#define MAXN 1100
#define INF 0x3f3f3f3f

using namespace std;

typedef pair<int ,int> pii;

int n, m;
vector<pii> vizinhus[MAXN];
int distancias[MAXN];
int marcados[MAXN];

void dequestra() {
  for (int i = 0; i <= n + 1; i++) {
    distancias[i] = INF;
  }
  distancias[0] = 0;
  priority_queue<pii, vector<pii>, greater<pii> > fila;
  fila.push(pii(0, 0));
  while (true) {
    int davez = -1;
    while (!fila.empty()) {
      int carinha = fila.top().second;
      fila.pop();
      if (!marcados[carinha]) {
        davez = carinha;
        break;
      }
    }
    if (davez == -1) {
      break;
    }
    marcados[davez] = 1;
    for (int i = 0; i < vizinhus[davez].size(); i++) {
      int va = vizinhus[davez][i].second;
      int da = vizinhus[davez][i].first;
      if (distancias[va] > distancias[davez] + da) {
        distancias[va] = distancias[davez] + da;
        fila.push(pii(distancias[va], va));
      }
    }
  }
}

int main() {
  cin >> n >> m; int primero, seg, terc;
  for (int i = 0; i < m; i++) {
    cin >> primero >> seg >> terc;
    vizinhus[primero].push_back(pii(terc, seg));
    vizinhus[seg].push_back(pii(terc, primero));
  }
  dequestra();
  cout << distancias[n+1] << "\n";
}
