#include <iostream>
#include <vector>

#define INF 0x3f3f3f3f
using namespace std;
int n;
vector<int> filhos[100005];
int filhos_q[100005];

int get_filhos(int neg) {
  if (filhos_q[neg] != -1) {
    return filhos_q[neg];
  }
  if (filhos[neg].size() == 0) {
    return 0;
  }
  int soma = 0;
  for (int i = 0; i < filhos[neg].size(); i++) {
    filhos_q[filhos[neg][i]] = get_filhos(filhos[neg][i]);
    soma += 1 + filhos_q[filhos[neg][i]];
  }
  return soma;
}

bool is_ok(int neg) {
  if (filhos_q[neg] == -1) {
    filhos_q[neg] = get_filhos(neg);
  }
  if (filhos_q[neg] <= 1) {
    return true;
  }
  for (int i = 1; i < filhos[neg].size(); i++) {
    int filho_i = filhos[neg][i];
    if (get_filhos(filho_i) != get_filhos(filhos[neg][0])) {
      return false;
    }
  }
  return true;
}

int main() {
  cin >> n;
  int a, b;
  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    filhos[b].push_back(a);
    filhos_q[i] = -1;
  }
  filhos_q[n] = -1;
  get_filhos(0);
  bool saida = true;
  for (int i = 0; i <= n; i++) {
    if (!is_ok(i)) {
      saida = false; break;
    }
  }
  cout << (saida ? "bem" : "mal") << "\n";
}
