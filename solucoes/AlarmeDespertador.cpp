#include <iostream>
using namespace std;

int main() {
    int h1, m1, h2, m2 = 1;
    while (true) {
        cin>>h1>>m1>>h2>>m2;
        if (h1 == 0 and m1 == 0 and h2 == 0 and m2 == 0) {
            break;
        }

        int o;
        if (h1 > h2 or (h2 == h1 and m1 > m2)) {
            h2 += 24;
        }
        o = (h2 - h1) * 60 + m2 - m1;
        cout<<o<<endl;
    }

    return 0;
}
