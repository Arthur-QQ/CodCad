#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

#define MAXN 1010

using namespace std;

int tab[MAXN][MAXN];
vector<int> v1, v2;

int lcs(int x, int y) {
    if (x < 0 or y < 0) {
        return 0;
    }
    if (tab[x][y] >= 0) {
        return tab[x][y];
    }
    if (v1[x] == v2[y]) {
        return tab[x][y] = 1 + lcs(x-1, y-1);
    }
    return tab[x][y] = max(lcs(x-1, y), lcs(x, y-1));
}

int main() {
    int a;
    cin >> a;
    memset(tab, -1, sizeof(tab));
    int x;
    for (int i = 0; i < a; i++) {
        cin >> x;
        v1.push_back(x);
        v2.push_back(x);
    }
    sort(v2.begin(), v2.end());
    cout << lcs(a-1, a-1) << "\n";
}
