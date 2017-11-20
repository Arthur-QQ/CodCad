#include <iostream>
using namespace std;

int main() {
    int b, n;
    while (true) {
        cin >> b >> n;
        if (b == 0 and n == 0) {
            break;
        }
        int reservas[b];
        for (int i = 0; i < b;i++) {
            cin >> reservas[i];
        }
        int money;
        int devedor;
        int credor;
        for (int i = 0;i < n;i++) {
            cin >> devedor >> credor >> money;
            reservas[devedor - 1] -= money;
            reservas[credor - 1] += money;
        }

        for (int i = 0;i < b; i++) {
            if (reservas[i] < 0) {
                cout << "N" << endl;
                break;
            } else if (i == b - 1) {
                cout << "S" << endl;
            }
        }
    }
    return 0;
}
