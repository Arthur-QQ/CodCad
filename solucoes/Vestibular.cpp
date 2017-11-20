#include <iostream>

using namespace std;

int main() {
    int n;
    string c1;
    string c2;
    cin >> n >> c1 >> c2;
    int saida = 0;
    for (int i = 0;i < n;i++) {
        if (c1[i] == c2[i]) {
            saida ++;
        }
    }
    cout << saida << endl;
    return 0;
}
