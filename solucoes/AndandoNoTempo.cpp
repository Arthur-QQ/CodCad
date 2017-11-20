#include <iostream>
using namespace std;

int main() {
    int a; int b; int c;
    cin>>a>>b>>c;

    if (a == b or a == c or b == c) {
        cout << "S\n";
    } else if (a == b + c or b == a + c or c == a + b) {
        cout << "S\n";
    } else {
        cout << "N\n";
    }
}
