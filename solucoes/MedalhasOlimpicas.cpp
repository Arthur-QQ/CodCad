#include <iostream>
using namespace std;

int main() {
    int o1; int p1; int b1;
    int o2; int p2; int b2;
    cin>>o1>>p1>>b1;
    cin>>o2>>p2>>b2;

    if (o1 > o2) {
        cout<<"A\n";
    } else if (o1 == o2) {
        if (p1 > p2) {
            cout<<"A\n";
        } else if (p1 == p2) {
            if (b1 > b2) {
                cout << "A\n";
            } else {
                cout << "B\n";
            }
        } else {
            cout<<"B\n";
        }
    } else {
        cout<<"B\n";
    }
}
