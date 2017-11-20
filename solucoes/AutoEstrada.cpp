#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int saida = 0;

    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;

        if (c == 'P') {
            saida += 2;
        } else if (c == 'C') {
            saida += 2;
        } else if (c == 'A') {
            saida += 1;
        }
    }

    cout << saida << endl;

    return 0;
}
