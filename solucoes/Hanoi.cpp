#include <iostream>

using namespace std;

int f(int n) {
    if (n == 1) {
        return 1;
    } else {
        return 2*f(n-1) + 1;
    }
}
int main() {
    int n;
    int casoteste = 1;
    while (cin >> n) {
        if (n == 0) {
            break;
        }
        cout << "Teste " << casoteste << endl << f(n) << endl << endl;
        casoteste += 1;
    }
    return 0;
}
