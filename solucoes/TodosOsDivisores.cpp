#include <iostream>
using namespace std;

int main() {
 int x;
 cin>>x;
 int i = 1;
 while (i <= x) {
  if (x % i == 0) {
   if (x != i) {
    cout<<i<<" ";
   } else {
    cout<<x<<"\n";
   }
  }
  i += 1;
 }
 return 0;
}
