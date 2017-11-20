#include <iostream>

using namespace std;

int main() {
    string entrada;
    getline(cin, entrada);
    string somentevogais = "";
    char c;
    for (int i = 0;i < entrada.size(); i++) {
        c = entrada[i];
        if (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u') {
            somentevogais += c;
        }
    }
    string reverso = "";
    for (int i = 0;i < somentevogais.size(); i++) {
        reverso += somentevogais[somentevogais.size() - i - 1];
    }
    if (reverso == somentevogais) {
        cout << "S";
    } else {
        cout << "N";
    }
    cout << endl;
    return 0;
}
