#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int matriz[n][n];
    int somalinhas[n];
    int somadalinha = 0;
    int soma;
    for (int i = 0;i < n; i++) {
        for (int ii = 0;ii < n; ii++) {
            cin >> matriz[i][ii];
            somadalinha += matriz[i][ii];
        }
        somalinhas[i] = somadalinha;
        soma = somalinhas[i];
        somadalinha = 0;
    }
    int somacolunas[n];
    int somadacoluna = 0;
    for (int i = 0;i < n; i++) {
        for (int ii = 0;ii < n; ii++) {
            somadacoluna += matriz[ii][i];
        }
        somacolunas[i] = somadacoluna;
        somadacoluna = 0;
    }
    int somad1 = 0;
    for (int i = 0; i<n; i++) {
        somad1 += matriz[i][i];
    }
    int somad2 = 0;
    for (int i = 0; i < n; i++) {
        somad2 += matriz[n - i -1][i];
    }
    int comparareimeatodoseatudo = somacolunas[0];
    for (int i = 0;i < n; i++) {
        if (comparareimeatodoseatudo != somacolunas[i] or comparareimeatodoseatudo != somalinhas[i]) {
            comparareimeatodoseatudo = -1;
            break;
        }
    }
    if (comparareimeatodoseatudo != -1 and (comparareimeatodoseatudo != somad1 or comparareimeatodoseatudo != somad2)) {
        comparareimeatodoseatudo = -1;
    }
    cout << comparareimeatodoseatudo << endl;
    return 0;
}
