#include <iostream>
using namespace std;
// Esse aqui me tirou do serio (so pode usar matriz)
int main() {
    int n; int x; int y; // Nao suporto ficar sem usar 'i' nem 'j' num laço 'for'
    cin >> n;
    cin >> x >> y;
    int matriz[n][n];
    int orientacao[n][n][2];
    bool bandeiral[n][n];
    int voltas[n][n];
    int doacaoparade[n][n][2];
    for (int i = 0; i < n;i++) {
        for (int ii = 0;ii < n; ii++) {
            cin >> matriz[i][ii];
            orientacao[i][ii][0] = -1;
            orientacao[i][ii][1] = 0;
            doacaoparade[i][ii][0] = -1;
            doacaoparade[i][ii][1] = -1;
            bandeiral[i][ii] = false;
            voltas[i][ii] = 0;
        }
    }
    int bandeiras = 0;
    int la = x - 1;
    int ca = y - 1;
    while (true) {
        bandeiral[la][ca] = true;
        int oa[2] = {orientacao[la][ca][0], orientacao[la][ca][1]};
        if (oa[0] != 0) {
            orientacao[la][ca][0] = 0;
            orientacao[la][ca][1] = -oa[0];
        } else {
            orientacao[la][ca][0] = oa[1];
            orientacao[la][ca][1] = 0;
        }
        oa[0] = orientacao[la][ca][0];
        oa[1] = orientacao[la][ca][1];
        int novalinha = la + oa[0];
        int novacoluna = ca + oa[1];
        if ((novalinha >= 0 and novalinha < n and novacoluna >= 0 and novacoluna < n) and (matriz[la][ca] <= matriz[novalinha][novacoluna]) and (not bandeiral[novalinha][novacoluna])) {
            doacaoparade[novalinha][novacoluna][0] = la;
            doacaoparade[novalinha][novacoluna][1] = ca;
            bandeiras++;
            ca = novacoluna;
            la = novalinha;
        }
        if (voltas[la][ca] == 4) {
            if (x - 1 == la and y - 1 == ca) {
                break;
            }
            int cordenadasdoquedeu[2] = {doacaoparade[la][ca][0], doacaoparade[la][ca][1]};
            la = cordenadasdoquedeu[0];
            ca = cordenadasdoquedeu[1];
        } else {
            voltas[la][ca] += 1;
        }
    }
    cout << bandeiras + 1 << endl;

    return 0;
}
