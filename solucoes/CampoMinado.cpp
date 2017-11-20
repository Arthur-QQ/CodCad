#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int tabulero[n];
    for (int i = 0; i < n; i++) {
        cin >> tabulero[i];
    }
    int minas;
    for (int i = 0; i < n; i++) {
        minas = 0;
        for (int ii = -1; ii <= 1; ii += 1) {
            if (tabulero[i - ii] == 1) {
                minas += 1;
            }
        }
        cout << minas << endl;
    }


}
