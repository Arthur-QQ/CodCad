#include <iostream>
using namespace std;

int main() {
    int p, n;
    cin>>p>>n;
    for (int i = 0; i < n; i++) {
        int fi;
        cin>>fi;
        p += fi;
        if (p > 100) {
            p = 100;
        } else if (p < 0) {
            p = 0;
        }
    }
    cout<<p<<endl;
}
