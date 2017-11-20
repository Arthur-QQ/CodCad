#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int saida;
    int acessos = 0;
    int i = 0;
    bool ok = false;

    while (i < n) {
        int acesso;
        cin>>acesso;
        acessos += acesso;
        if (acessos >= 1000000 and not ok) {
            ok = true;
            saida = i + 1;
        }
        i++;
    }
    cout<<saida<<endl;
    return 0;
}
