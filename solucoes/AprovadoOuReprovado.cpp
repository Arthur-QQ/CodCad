#include <iostream>
using namespace std;

int main() {
    double a; double b;
    cin>>a>>b;
    double media = (a + b) / 2;
    if (media >= 7) {
        cout<<"Aprovado\n";
    } else if (media >= 4) {
        cout<<"Recuperacao\n";
    } else {
        cout<<"Reprovado\n";
    }
}
