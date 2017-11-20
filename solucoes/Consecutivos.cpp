#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int firstterm;
    cin>>firstterm;
    int pastterm = firstterm;
    int seq = 1;
    int hseq = 1;
    for (int i = 1; i < n; i++) {
        int nextnumber;
        cin>>nextnumber;
        if (nextnumber == pastterm) {
            seq += 1;
            if (hseq < seq) {
                hseq = seq;
            }
        } else {
            seq = 1;
        }
        pastterm = nextnumber;
    }
    cout<<hseq<<endl;
    return 0;
}
