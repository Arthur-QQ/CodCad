#include <iostream>
#include <vector>

#define MAXN 1010

using namespace std;

int dp[MAXN], n, m;

int decide(int a, int b) {
    if (a == -2) return b;
    return min(a, b);
}

int solve(int x, vector<int> &c) {
    if (x == 0) return dp[0] = 0;
    if (x < 0) return -1;
    if (dp[x] != -2) return dp[x];
    for (int i = 0; i < c.size(); i++) {
        int resp = solve(x - c[i], c);
        if (resp < 10 && resp != -1) {
            dp[x] = decide(dp[x], 1 + dp[x - c[i]]);
        }
    }
    if (dp[x] == -2 or dp[x] == -1) {
        return dp[x] = -1;
    }

    return dp[x];
}

int main() {
    // -2 stands for not calculated
    // -1 stands for impossible
    cin >> n >> m;
    vector<int> vequetor;
    for (int i = 0; i <= m; i++) {
        dp[i] = -2;
    }
    int k;
    for (int i = 0; i < n; i++) {
        cin >> k;
        vequetor.push_back(k);
    }
    int res = solve(m, vequetor);
    if (res != -1 && res < 10) {
        cout << "S\n";
    } else {
        cout << "N\n";
    }
}
