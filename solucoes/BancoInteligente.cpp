#include <iostream>

#define MAXN 5001

using namespace std;

int vet[6] = {2, 5, 10, 20, 50, 100}, has[6], dp[MAXN];
int s;

int solve() {
    dp[0] = 1;
    for (int i = 5; i >= 0; i--) {
        for (int j = s; j >= 0; j--) {
            for (int k = 1; k <= has[i] && j - vet[i] * k >= 0; k++) {
                dp[j] += dp[j - vet[i] * k];
            }
        }
    }
    return dp[s];
}

int main() {
    cin >> s;
    for (int i = 0; i < 6; i++) {
        cin >> has[i];
    }
    cout << solve() << "\n";
}
