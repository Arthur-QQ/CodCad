#include <iostream>

using namespace std;

int main() {
    int n;
    int ors = 0;
    cin >> n; int a;
    for (int i = 0; i < n; i++) {
        cin >> a;
        ors |= a;
    }
    cout << ors << "\n";
}
