#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int v[3];
    for (int i = 0;i < 3;i++) {
        cin >> v[i];
    }
    sort(v, v+3);
    int soma = 0;
    int saida = 0;
    for (int i = 0;i < 3;i++) {
        soma += v[i];
        if (soma <= n) {
            saida += 1;
        } else {
            break;
        }
    }

    cout << saida << endl;
}
