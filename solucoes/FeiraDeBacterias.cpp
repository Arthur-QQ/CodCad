#include <iostream>
#include <cmath>

using namespace std;
int main() {
    int n;
    cin >> n;
    double maismaior = 0.0;
    int indexdomaismaior = -1;
    for (int i = 0; i < n; i++) {
        int d, c;
        cin >> d >> c;
        double atual = log10(d+0.0) * (c+0.0);
        if (atual > maismaior) {
            maismaior = atual;
            indexdomaismaior = i;
        }
    }
    cout << indexdomaismaior << endl;
    return 0;
}
