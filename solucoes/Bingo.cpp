#include <iostream>
using namespace std;

int main() {
    int n, b;
    while (true) {
        cin >> n >> b;
        if (n == 0 and b == 0) {
            break;
        }
        int bolinhascoisadas[b];
        for (int i = 0;i<b;i++) {
            cin >> bolinhascoisadas[i];
        }
        int diferencas[n + 1];
        for (int i = 0; i<= n; i++) {
            diferencas[i] = 0;
        }

        for (int i = 0; i < b;i++) {
            for (int ii = 0; ii < b; ii++) {
                int dif = bolinhascoisadas[i] - bolinhascoisadas[ii];
                if (dif < 0) {
                    dif = -dif;
                }
                diferencas[dif] = 1;
            }
        }
        for (int i = 0; i <= n; i++) {
            if (diferencas[i] == 0) {
                cout << "N" << endl;
                break;
            } else if (i == n) {
                cout << "Y" << endl;
            }
        }
    }
}
