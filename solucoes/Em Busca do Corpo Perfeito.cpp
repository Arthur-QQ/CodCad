#include <iostream>
#include <cstring>

#define MAXNP 2018 // asdusadhasuhdas

using namespace std;

int mochilinha[MAXNP][MAXNP];
int peso[MAXNP];
int valorzinho[MAXNP];
int n, p;

int quinepeseque(int obj, int aguenta) {
    if (obj == n || aguenta == 0) {
        return 0;
    }
    if (mochilinha[obj][aguenta] == -1) {
        if (peso[obj] <= aguenta) {
            mochilinha[obj][aguenta] = max(valorzinho[obj] + quinepeseque(obj+1, aguenta-peso[obj]), quinepeseque(obj+1, aguenta));
        } else {
            mochilinha[obj][aguenta] = quinepeseque(obj+1, aguenta);
        }
    }
    return mochilinha[obj][aguenta];
}

int main() {
    cin >> p >> n;
    memset(mochilinha, -1, sizeof(mochilinha));
    for (int i = 0; i < n; i++) {
        cin >> peso[i] >> valorzinho[i];
    }
    cout << quinepeseque(0, p) << "\n";
}
