#include <iostream>

using namespace std;

int main() {
    int n, s;
    cin>>n>>s;
    int i = 0;
    int menor = s;
    while (i < n) {
        int mov;
        cin>>mov;
        s += mov;
        if (menor > s) {
            menor = s;
        }
        i += 1;
    }
    cout<<menor<<endl;
    return 0;
}
