#include <iostream>
#include <vector>

#define MAXN 1010

using namespace std;

int dp[MAXN], n, m;
vector<int> vequetor;

void fillUp() {
    for (int i = 0; i <= m; i++) {
        dp[i] = 0;
    }
}

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

bool isValid(int val_m) {
    int resp = solve(val_m, vequetor);
    // cout << "for m = " << val_m << " the answer was " << resp << "\n";
    return resp == 2;
}

int main() {
    cin >> n >> m;
    int k;
    for (int i = 0; i < n; i++) {
        cin >> k;
        vequetor.push_back(k);
    }
    int ans = 0;
    for (int i = 1; i < m; i++) {
        fillUp();
        if (!isValid(i)) {
            ans++;
        }
    }
    cout << ans << "\n";
}
