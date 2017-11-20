#include <iostream>
using namespace std;

int main() {
    int p1; int c1; int p2; int c2;
    cin>>p1>>c1>>p2>>c2;

    int l1 = p1 * c1;
    int l2 = p2 * c2;

    if (l1 > l2) {
        cout<<"-1\n";
    } else if (l2 > l1) {
        cout<<"1\n";
    } else {
        cout<<"0\n";
    }
}
