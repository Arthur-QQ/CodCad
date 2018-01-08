#include <iostream>

#define INF 0x3f3f3f3f
using namespace std;

int n, m;
int mapinha[1000][1000];
int resp;
int menordist = INF;

void dfs(pair<int, int> cs, int dist, int marcados[][1000]) {
  int l = cs.first;
  int c = cs.second;
  marcados[l][c] = 1;
  if (mapinha[l][c] == 3) {
    if (menordist > dist) {
      menordist = dist;
    }
  }
  if (l >= 1 and !marcados[l-1][c] and mapinha[l-1][c] != 0) {
    dfs(make_pair(l-1, c), dist+1, marcados);
  }
  if (l < n - 1 and !marcados[l+1][c] and mapinha[l+1][c] != 0) {
    dfs(make_pair(l+1, c), dist+1, marcados);
  }
  if (c >= 1 and !marcados[l][c-1] and mapinha[l][c-1] != 0) {
    dfs(make_pair(l, c-1), dist+1, marcados);
  }
  if (c < m - 1 and !marcados[l][c+1] and mapinha[l][c+1] != 0) {
    dfs(make_pair(l, c+1), dist+1, marcados);
  }
}

int main() {
  cin >> n >> m;
  int marcados[1000][1000];
  int a;
  pair<int, int> coords;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a;
      mapinha[i][j] = a;
      marcados[i][j] = 0;
      if (a == 2) {
        coords = make_pair(i, j);
      }
    }
  }
  dfs(coords, 1, marcados);
  cout << menordist << "\n";
}
