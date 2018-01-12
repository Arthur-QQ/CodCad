#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;
    if (n == 0) {
        cout << "N\n";
        return 0;
    }
    int _count = 0;
    while (n != 0) {
        if (n % 2 == 0) {
            cout << "N\n";
            return 0;
        }
        n = n >> 1;
    }
    cout << "S\n";
}
