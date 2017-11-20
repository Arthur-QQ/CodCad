#include <iostream>
using namespace std;

int main() {
    int cv; int ce; int cs;
    int fv; int fe; int fs;

    cin>>cv>>ce>>cs>>fv>>fe>>fs;

    int pontosC = 3 * cv + ce;
    int pontosF = 3 * fv + fe;

    if (pontosC > pontosF) {
        cout<<"C\n";
    } else if (pontosC < pontosF) {
        cout<<"F\n";
    } else {
        if (cs == fs) {
            cout<<"=\n";
        } else if (cs > fs) {
            cout<<"C\n";
        } else {
            cout<<"F\n";
        }
    }
}
