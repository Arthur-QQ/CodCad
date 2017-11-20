#include <iostream>

using namespace std;
int main() {
    char alg; string num;
    while (true) {
        cin >> alg >> num;
        if (alg == '0' and num == "0") {
            break;
        }
        string saida = "";
        char alg_atual;
        bool zero = false;
        for (int i = 0; i < num.size(); i++) {
            alg_atual = num[i];
            if (alg_atual != alg and (alg_atual != '0' or zero)) {
                if (alg_atual != '0') {
                    zero = true;
                }
                saida += alg_atual;
            }
        }
        if (saida == "") {
            saida = "0";
        }
        cout << saida << endl;
    }
}
