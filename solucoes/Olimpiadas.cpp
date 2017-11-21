#include <iostream>
#include <algorithm>

using namespace std;

struct Pais {
    int ouro = 0;
    int prata = 0;
    int bronze = 0;
    int id;
};

bool maismelhor(Pais p1, Pais p2) {
    if (p1.ouro == p2.ouro and p1.prata == p2.prata and p1.bronze == p2.bronze) {
        return p1.id < p2.id;
    } else if (p1.ouro == p2.ouro and p1.prata == p2.prata) {
        return p1.bronze > p2.bronze;
    } else if (p1.ouro == p2.ouro) {
        return p1.prata > p2.prata;
    } else {
        return p1.ouro > p2.ouro;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    Pais p[n];
    for (int i = 0; i < n; i++) {
        p[i].id = i;
    }
    int ouro, prata, bronze;
    for (int i = 0; i < m; i++) {
        cin >> ouro >> prata >> bronze;
        p[ouro - 1].ouro += 1;
        p[prata - 1].prata += 1;
        p[bronze - 1].bronze += 1;
    }
    sort(p, p+n, maismelhor);
    for (int i = 0; i < n; i++) {
        cout << p[i].id+1 << " ";
    }
    cout << endl;
}
