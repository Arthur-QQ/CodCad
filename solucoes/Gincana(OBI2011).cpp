#include <iostream>
#include <vector>

using namespace std;

int n, m;
vector<int> amizades[1005];
int marcados[1005];

void dfs(int vertisse) {
  marcados[vertisse] = 1;
  for (int i = 0; i < amizades[vertisse].size(); i++) {
    if (!marcados[amizades[vertisse][i]]) {
      dfs(amizades[vertisse][i]);
    }
  }
}

int main() {
  cin >> n >> m;
  int quantidade = 0; int a, b;
  for (int i = 0; i < m; i++) {
    cin >> a >> b; a--; b--;
    amizades[a].push_back(b);
    amizades[b].push_back(a);
  }
  for (int i = 0; i < n; i++) {
    marcados[i] = 0;
  }
  for (int i = 0; i < n; i++) {
    if (!marcados[i]) {
      dfs(i);
      quantidade++;
    }
  }
  cout << quantidade << "\n";
}
