#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int heiniken[n];
    for (int i = 0; i < n; i++) {
        cin >> heiniken[i];
    }
    int rexpoxtinha = 0;
    int dif = 0;
    for (int i = 0; i < n - 1; i++) {
        dif = heiniken[i] - m;
        heiniken[i + 1] -= dif;
        heiniken[i] -= dif;
        rexpoxtinha += abs(dif);
    }
    cout << rexpoxtinha << endl;
}
