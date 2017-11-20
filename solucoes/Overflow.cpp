#include <iostream>
using namespace std;

int main() {
    int o;
    cin>>o;
    int p, q;
    char op;
    cin>>p>>op>>q;
    int r;
    if (op == '*') {
        r = p * q;
    } else {
        r = p + q;
    }
    if (r <= o) {
        cout<<"OK\n";
    } else {
        cout<<"OVERFLOW\n";
    }
    return 0;
}
