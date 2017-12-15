#include <vector>
#include <iostream>

using namespace std;

#define INF 1000000000

void merge_sort(vector<int> &v) {
    if (v.size() == 1) {
        return;
    }
    vector<int> m1, m2;
    for (int i = 0; i < v.size()/2; i++) {
        m1.push_back(v[i]);
    }
    for (int j = v.size() / 2; j < v.size(); j++) {
        m2.push_back(v[j]);
    }
    merge_sort(m1);
    merge_sort(m2);
    m1.push_back(-INF);
    m2.push_back(-INF);
    int ini1 = 0, ini2 = 0;
    for (int k = 0; k < v.size(); k++) {
        if (m1[ini1] > m2[ini2]) {
            v[k] = m1[ini1];
            ini1++;
        } else {
            v[k] = m2[ini2];
            ini2++;
        }
    }
    return;
}

int main() {
    int n;
    cin >> n;
    vector<int> v;
    int att;
    for (int i = 0; i < n; i++) {
        cin >> att;
        v.push_back(att);
    }
    merge_sort(v);
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "\n";
}
