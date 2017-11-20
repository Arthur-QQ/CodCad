#include <iostream>
using namespace std;

int main() {
    char c;
    cin>>c;
    double a, b;
    cin>>a>>b;
    cout.precision(2);
    cout.setf(ios::fixed);
    if (c == 'M') {
        cout<<a * b<<endl;
    } else {
        cout<< a / b<<endl;
    }
    return 0;
}
