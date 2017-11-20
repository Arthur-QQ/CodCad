#include <iostream>
using namespace std;

int main() {
 int a; int b;
 int c; int d;
 cin>>a>>b>>c>>d;

 if (a == c and b != d) {
  cout<<"V\n";
 } else if (b == d and a != c) {
  cout<<"V\n";
 } else {
  cout<<"F\n";
 }
 return 0;
}
