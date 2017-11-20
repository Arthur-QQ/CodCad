#include <iostream>
using namespace std;

void getnumber(int n1, int n2, int n3) {
 int p1; int p2; int p3;
 if (n1 > n2 && n1 > n3) {
  if (n2 > n3) {
        p1 = 1; p2 = 2; p3=3;
    } else {
        p1 = 1; p2 = 3; p3 = 2;
    }
 } else if (n2 > n1 && n2 > n3) {
    p1 = 2;
    if (n1 > n3) {
        p2 = 1; p3 = 3;
    } else {
        p2 = 3; p3 = 1;
}
} else {
        p1 = 3;
 if (n2 > n1) {
        p2 = 2; p3 = 1;
    } else {
        p2 = 1; p3 = 2;
    }
}
    cout<<p3<<"\n";
    cout<<p2<<"\n";
    cout<<p1<<"\n";
}
int main() {
    int t1;int t2;int t3;
    cin>>t1;
    cin>>t2;
    cin>>t3;
    getnumber(t1,t2,t3);
    return 0;
}
