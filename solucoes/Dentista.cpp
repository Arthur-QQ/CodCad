#include <iostream>
#include <algorithm>

using namespace std;

struct Consulta {
    int inicio, fim;
};

bool compara(Consulta a, Consulta b) {
    return a.fim < b.fim;
}

int main() {
    int n, livre = 0;
    cin >> n;
    Consulta c[n];
    for (int i = 0; i < n; i++) {
        cin >> c[i].inicio >> c[i].fim;
    }
    sort(c, c+n, compara);
    int qtd = 0;
    for (int i = 0 ; i < n; i++) {
        if (c[i].inicio >= livre) {
            qtd++;
            livre = c[i].fim;
        }
    }
    cout << qtd << endl;
}
