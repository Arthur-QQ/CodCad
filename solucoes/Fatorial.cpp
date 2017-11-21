#include <iostream>

using namespace std;

int fat(int p) {
    if (p <= 1) {
        return 1;
    }
    return p * fat(p - 1);
}
int main() {
    int n;
    cin >> n;
    cout << fat(n) << endl;
    return 0;
}
