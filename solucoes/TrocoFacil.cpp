#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int m;
    int dinheiroseros[6] = {100, 50, 25, 10, 5, 1};
    int saidinha = 0;
    for (int i = 0; i < 6; i++) {
        if (n >= dinheiroseros[i]) {
            int quociente = (n - n % dinheiroseros[i]) / dinheiroseros[i];
            saidinha += quociente;
            n %= dinheiroseros[i];
        }
    }
    cout << saidinha << endl;
}
