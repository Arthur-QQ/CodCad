#include <iostream>
#include <algorithm>

using namespace std;
int n, m;
int maiorI(int vetor[], int a, int b) {
    int mI;
    for (int i = 0; i < n; i++) {
        if (i != a and i != b) {
            mI = i;
            break;
        }
    }
    for (int i = 0;i < n; i++) {
        if (vetor[mI] > vetor[i] and i != a and i != b) {
            mI = i;
        }
    }
    return mI;
}
int main() {
    cin >> n >> m;
    int v[n];
    for (int i = 0;i<n;i++) {
        v[i] = 0;
        for (int j = 0;j<m;j++) {
            int ent;
            cin >> ent;
            v[i] += ent;
        }
    }

    int p = maiorI(v, -1, -1);
    int s = maiorI(v, p, -1);
    int t = maiorI(v, p, s);
    cout << p+1 << endl << s+1 << endl << t+1 << endl;

}
