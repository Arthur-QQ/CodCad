
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int primero;
    int off = 0;
    int ligada = 0;
    bool pallowed = true;
    for (int i = 0;i<n;i++) {
        int t;
        cin>>t;
        if (i != 0 and t >= off) {
            ligada += off - primero;
            primero = t;
        }
        if (i == 0) {
            primero = t;
        }
        off = t + 10;
    }
    ligada += off - primero;
    cout<<ligada<<endl;
    return 0;
}
