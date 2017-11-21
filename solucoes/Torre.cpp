#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int matrizcoisada[n][n];
    int somadecadalinha[n];
    int somadecadacoluna[n];
    for (int i = 0;i<n; i++) {
        somadecadalinha[i] = 0;
        for (int j = 0;j<n; j++) {
            cin >> matrizcoisada[i][j];
            somadecadalinha[i] += matrizcoisada[i][j];
            if (i == 0) {
                somadecadacoluna[j] = 0;
            }
            somadecadacoluna[j] += matrizcoisada[i][j];
        }
    }
    int maiorpeso = 0;
    int peso = 0;
    for (int i = 0;i<n;i++) {
        for (int j = 0;j<n;j++) {
            peso = somadecadacoluna[j] + somadecadalinha[i] - matrizcoisada[i][j] * 2;
            if (peso > maiorpeso) {
                maiorpeso = peso;
            }
        }
    }

    cout << maiorpeso << endl;
    return 0;
}
