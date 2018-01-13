#include <iostream>
#include <vector>

using namespace std;

#define MAXN 10005
pair<int, int> geracoes[MAXN]; // o primeiro guarda o numero de membros de uma geracao e o segundo o numero de
// o numero de comparecidos
vector<int> filhos[MAXN];
bool compareceu[MAXN];
int n, m;

void dfs(int paizao, int ger_atual) {
    geracoes[ger_atual].first++;
    if (compareceu[paizao]) {
        geracoes[ger_atual].second++;
    }
    for (int i = 0; i < filhos[paizao].size(); i++) {
        dfs(filhos[paizao][i], ger_atual+1);
    }
}

int main() {
    cin >> n >> m;

    int pi;

    for (int i = 0; i < n; i++) {
        cin >> pi; // pai do i
        filhos[pi].push_back(i+1);
        compareceu[i+1] = false;
        geracoes[i+1].first = 0;
        geracoes[i+1].second = 0;
    }
    compareceu[0] = true;
    for (int i = 0; i < m; i++) {
        cin >> pi;
        compareceu[pi] = true;
    }
    cout.setf(ios::fixed);
    cout.precision(2);
    dfs(0, 0);
    for (int i = 1; i <= n; i++) {
        if (geracoes[i].first != 0) {
            double d = geracoes[i].first;
            cout << (geracoes[i].second / d) * 100 << " ";
        } else {
            break;
        }
    }
    cout << "\n";
}
