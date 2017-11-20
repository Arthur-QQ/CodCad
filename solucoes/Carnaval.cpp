#include <iostream>
using namespace std;

int main() {
    double a1; double a2; double a3;
    double a4; double a5;

    cin>>a1>>a2>>a3>>a4>>a5;
    double maximo;
    if (a1 >= a2 and a1 >= a3 and a1 >= a4 and a1 >= a5) {
        maximo = a1;
    } else if (a2 >= a1 and a2 >= a3 and a2 >= a4 and a2 >= a5) {
        maximo = a2;
    } else if (a3 >= a1 and a3 >= a2 and a3 >= a4 and a3 >= a5) {
        maximo = a3;
    } else if (a4 >= a1 and a4 >= a2 and a4 >= a3 and a4 >= a5) {
        maximo = a4;
    } else {
        maximo = a5;
    }

    double minimo;
    if (a1 <= a2 and a1 <= a3 and a1 <= a4 and a1 <= a5) {
        minimo = a1;
    } else if (a2 <= a1 and a2 <= a3 and a2 <= a4 and a2 <= a5) {
        minimo = a2;
    } else if (a3 <= a1 and a3 <= a2 and a3 <= a4 and a3 <= a5) {
        minimo = a3;
    } else if (a4 <= a1 and a4 <= a2 and a4 <= a3 and a4 <= a5) {
        minimo = a4;
    } else {
        minimo = a5;
    }

    cout.precision(1);
    cout.setf(ios::fixed);

    cout << a1 + a2 + a3 + a4 + a5 - maximo - minimo << "\n";
}
