#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int l; int c;
    int coposderrubados = 0;
    for (int i = 0;i < n; i++) {
        cin>>l>>c;
        if (l > c) {
            coposderrubados += c;
        }
    }
    cout<<coposderrubados<<endl;
    return 0;
}
