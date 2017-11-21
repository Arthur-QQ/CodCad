#include <iostream>

using namespace std;

int s(int p) {
    if (p == 1) {
        return 1;
    }
    return p + s(p - 1);
}
int main() {
    int n;
    cin >> n;
    cout << s(n) << endl;
    return 0;
}
