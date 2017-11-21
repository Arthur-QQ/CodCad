#include <iostream>
#include <algorithm>

using namespace std;

int m;

bool melhor(int i, int j) {
    int cada_i = i / m;
    int cada_j = j / m;
    int ganho_i = i % m;
    int ganho_j = j % m;
    return (ganho_i > ganho_j) or (ganho_i == ganho_j and cada_i > cada_j);
}

int main() {
    int n;
    cin >> n >> m;
    int vetor[n];
    for (int i = 0;i < n; i++) {
        cin >> vetor[i];
    }

    sort(vetor, vetor+n, melhor);
    for (int i = 0;i < n; i++) {
            cout << vetor[i] << " ";
    }
    cout << endl;
}
