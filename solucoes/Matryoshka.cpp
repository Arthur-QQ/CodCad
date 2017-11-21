#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int vetor[n];
    int copiadovetor[n];
    for (int i = 0;i < n; i++) {
        cin >> vetor[i];
        copiadovetor[i] = vetor[i];
    }
    int foradolugar = 0;
    sort(vetor, vetor+n);
    int vforadolugar[n];
    for (int i = 0;i < n; i++) {
        if (vetor[i] != copiadovetor[i]) {
            vforadolugar[foradolugar] = copiadovetor[i];
            foradolugar++;
        }
    }
    cout << foradolugar << endl;
    sort(vforadolugar, vforadolugar+foradolugar);
    for (int i = 0; i<foradolugar; i++) {
        cout << vforadolugar[i] << " ";
    }
    cout << endl;
}
