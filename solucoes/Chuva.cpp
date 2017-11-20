#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int m1[n][n];
    int m2[n][n];

    for (int i = 0; i < n; i++) {
        for (int ii = 0; ii < n; ii++) {
            cin >> m1[i][ii];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int ii = 0; ii < n; ii++) {
            cin >> m2[i][ii];
        }
    }

    int soma;
    for (int i = 0; i < n; i++) {
        for (int ii = 0; ii < n; ii++) {
            soma = m1[i][ii] + m2[i][ii];
            if (ii < n - 1) {
                cout << soma << " ";
            } else {
                cout << soma << endl;
            }
        }
    }
    return 0;
}
