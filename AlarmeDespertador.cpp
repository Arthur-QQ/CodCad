
#include <iostream>
using namespace std;
int main() {
int h1, m1, h2, m2 = -1;
while (h1 != 0 and m1 != 0 and h2 != 0 and m2 != 0) {
cin>>h1>>m1>>h2>>m2;
if (h2 < h1 or (h1 == h2 and m2 < m1)) {
h2 += 24;
}
int t1 = h1*60+m1;
int t2 = h2*60+m2;
if(!(h1 == 0 and m1 == 0 and h2 == 0 and m2 == 0)) {
cout<<t2-t1<<"\n";
}
}

return 0;
}
