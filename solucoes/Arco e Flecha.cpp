#include <iostream>
#include <vector>
#include <cmath>

#define INF 9223372036854775806

using namespace std;

typedef long long ll;

int n;

ll merge_sort(vector<ll> &v) {
    if (v.size() <= 1) {
        return 0;
    }
    vector<ll> v1, v2;
    for (int i = 0; i < v.size() / 2; i++) {
        v1.push_back(v[i]);
    }
    for (int i = v.size() / 2; i < v.size(); i++) {
        v2.push_back(v[i]);
    }
    ll inv = merge_sort(v1) + merge_sort(v2);
    int ini1 = 0, ini2 = 0;
    v1.push_back(-INF);
    v2.push_back(-INF);
    for (int i = 0; i < v.size(); i++) {
        if (v2[ini2] >= v1[ini1]) {
            v[i] = v2[ini2];
            ini2++;
            inv += v1.size() - ini1 - 1;
        } else {
            v[i] = v1[ini1];
            ini1++;
        }
    }
    return inv;
}

int main() {
    cin >> n;
    vector<ll> v;
    ll a, b;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        v.push_back(a * a + b * b);
    }
    cout << merge_sort(v) << "\n";
}
