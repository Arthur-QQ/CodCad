# include <iostream>

using namespace std;

int main(){
    int H;
    int P;
    int F;
    int D;

    cin>>H>>P>>F>>D;

    if (D == -1) {
        if (F > H and H > P) {
            cout << "S\n";
        } else if (P > F and F > H) {
            cout << "S\n";
        } else if (H > P and P > F) {
            cout << "S\n";
        } else {
            cout << "N\n";
        }
    } else {
        if (F > P and P > H) {
            cout << "S\n";
        } else if (P > H and H > F) {
            cout << "S\n";
        } else if (H > F and F > P) {
            cout << "S\n";
        } else {
            cout << "N\n";
        }
    }
    return 0;
}
