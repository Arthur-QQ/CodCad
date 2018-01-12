#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;
    int _count = 0;
    while (n != 0) {
        if (n % 2 != 0) {
            _count++;
        }
        n = n >> 1;
    }
    cout << _count << "\n";
}
