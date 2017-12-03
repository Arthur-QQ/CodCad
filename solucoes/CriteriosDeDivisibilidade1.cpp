#include <iostream>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    int x = s.length();
    if ((int)(s[x-1]) % 2 == 0) {
        cout << "S";
    } else {
        cout << "N";
    }
    cout << endl;
    int soma = 0;
    for (int i = 0; i < x; i++) {
        soma += (int)(s[i]) % 3;
    }
    soma %= 3;
    if (soma == 0) {
        cout << "S";
    } else {
        cout << "N";
    }
    cout << endl;
    if (s[x-1] == '5' or s[x-1] == '0') {
        cout << "S";
    } else {
        cout << "N";
    }
    cout << endl;
}
