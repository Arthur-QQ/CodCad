#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int mergulhoanterior = 0;
    long long saida = 0;
    bool yay = true;
    for (int i = 0; i < n; i++) {
        int atual;
        cin >> atual;
        int op1 = min(atual, m - atual);
        int op2 = m - op1;
        if (i == 0) {
            saida += op1;
            mergulhoanterior = op1;
        } else {
            if (op1 >= mergulhoanterior) {
                saida += op1;
                mergulhoanterior = op1;
            } else if (op2 >= mergulhoanterior) {
                saida += op2;
                mergulhoanterior = op2;
            } else {
                yay = false;
            }
        }
    }
    if (yay) {
        cout << saida;
    } else {
        cout << -1;
    }
    cout << endl;
    return 0;
}
