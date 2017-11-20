#include <iostream>
using namespace std;
int main() {
    int maior;
    cin>>maior;
    int n;
    while (cin>>n) {
        if (n == 0) {
            break;
        }
        if (maior < n) {
            maior = n;
        }
    }
    cout<<maior<<endl;
    return 0;
}
