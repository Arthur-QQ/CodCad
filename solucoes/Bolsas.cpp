#include <iostream>
#include <algorithm>

using namespace std;

struct encomenda {
    int t;
    int d;
};

bool compara (encomenda a, encomenda b) {
    return a.d < b.d;
};

int main() {
    int n;
    cin >> n;
    encomenda e[n];
    for (int i = 0; i < n; i++) {
        cin >> e[i].t >> e[i].d;
    }
    sort(e, e+n, compara);
    int s = 0;
    int atrasomaismaior = 0;
    int atraso = 0;
    for (int i = 0; i < n; i++) {
        atraso = max(0, s + e[i].t - e[i].d);
        if (atraso > atrasomaismaior) {
            atrasomaismaior = atraso;
        }
        s += e[i].t;
    }
    cout << atrasomaismaior << endl;
}
