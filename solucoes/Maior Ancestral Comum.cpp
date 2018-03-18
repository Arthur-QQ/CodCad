#include <iostream>
#include <cstring>

using namespace std;

#define MAXN 1010

int n;
int tab[MAXN][MAXN];
int s1[MAXN], s2[MAXN];

int lcs(int a, int b) {
    if (a < 0 or b < 0) {
        return 0;
    }
    if (tab[a][b] >= 0) {
        return tab[a][b];
    }
    if (s1[a] == s2[b]) {
        tab[a][b] = 1 + lcs(a-1, b-1);
        return tab[a][b];
    }
    tab[a][b]=max(lcs(a-1, b), lcs(a, b-1));
    return tab[a][b];
}

int main() {
    ios_base::sync_with_stdio(false);
    memset(tab, -1, sizeof(tab));
    int a, b; cin >> a >> b;
    int repeated = 0;
    for (int i = 0; i < a; i++) {
        cin >> s1[i];
    }
    for (int i = 0; i < b; i++) {
        cin >> s2[i];
    } a--;b--;
    cout << a - lcs(a, b) + 1 << " " << b - lcs(a, b) + 1 << "\n";
}
