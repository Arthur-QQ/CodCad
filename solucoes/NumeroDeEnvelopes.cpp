#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int menor;
    cin>>menor;
    for (int i = 1; i < n; i++) {
        int ni;
        cin>>ni;
        if (menor > ni) {
            menor = ni;
        }
    }
    cout<<menor<<endl;
}
