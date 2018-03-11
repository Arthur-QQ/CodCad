#include <iostream>
#include <vector>

#define MAXN 1010

using namespace std;

int dp[MAXN], n, m;

int solve(int x, vector<int> &c) {
    if (x == 0) return 2;
    if (x < 0) return 1;
    if (dp[x] > 0) return dp[x];
    for (int i = 0; i < c.size(); i++) {
        if (solve(x - c[i], c) == 2) {
            return dp[x] = 2;
        }
    }
    return dp[x] = 1;
}

int main() {
    cin >> n >> m;
    vector<int> vequetor;
    int k;
    for (int i = 0; i < n; i++) {
        cin >> k;
        vequetor.push_back(k);
    }
    if (solve(m, vequetor) == 2) {
        cout << "S\n";
    } else {
        cout << "N\n";
    }
}
