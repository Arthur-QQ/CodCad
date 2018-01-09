#include <iostream>
#include <vector>
#define INF 0x3f3f3f3f

using namespace std;
int n, m;
int mapinha[205][205];
int marked;

void dfs(pair<int, int> coords, int eqto) {
  int l = coords.first;
  int c = coords.second;
  marked++;
  mapinha[l][c] = -1;
  if (l > 0 and mapinha[l-1][c] == eqto) {
    dfs(make_pair(l-1, c), eqto);
  }
  if (l + 1 < n and mapinha[l+1][c] == eqto) {
    dfs(make_pair(l+1, c), eqto);
  }
  if (c > 0 and mapinha[l][c-1] == eqto) {
    dfs(make_pair(l, c-1), eqto);
  }
  if (c + 1 < m and mapinha[l][c+1] == eqto) {
    dfs(make_pair(l, c+1), eqto);
  }
}

int main() {
  cin >> n >> m;
  int mc = -1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> mapinha[i][j];
      if (mc < mapinha[i][j]) {
        mc = mapinha[i][j];
      }
    }
  }
  int menor_area = INF;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (mapinha[i][j] != -1) {
        marked = 0;
        dfs(make_pair(i, j), mapinha[i][j]);
        if (menor_area > marked) {
          menor_area = marked;
        }
      }
    }
  }
  cout << menor_area << "\n";
}
