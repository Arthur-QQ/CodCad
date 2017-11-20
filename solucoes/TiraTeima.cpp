#include <iostream>
using namespace std;

int main() {
    int x; int y;
    cin>>x>>y;

    if (x < 0 or y < 0 or x > 432 or y > 468) {
        cout<<"fora\n";
    } else {
        cout<<"dentro\n";
    }
}
