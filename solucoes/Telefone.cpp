#include <iostream>

using namespace std;
int main() {
    string entrada;
    getline(cin, entrada);
    string saida = "";
    char c;
    int cod;
    for (int i = 0;i < entrada.size(); i++) {
        c = entrada[i];
        cod = c;
        if (cod >= 65 and cod <= 90) {
            if (cod <= 82) {
                cod -= 65;
                cod = (cod - cod % 3) / 3;
                cod += 2;
                saida += (char)(cod + 48);
            } else if (cod == 83) {
                saida += "7";
            } else if (cod >= 84 and cod <= 86) {
                saida += "8";
            } else {
                saida += "9";
            }
        } else {
            saida += c;
        }
    }
    cout << saida << endl;
    return 0;
}
