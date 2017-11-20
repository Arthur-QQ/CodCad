#include <iostream>

using namespace std;

int main () {
 int n; int p;
 cin>>n>>p;
 int saida = 0;
 int i = 0;
 while (i < n) {
  int pf1; int pf2;
  cin>>pf1>>pf2;
  if (pf1 + pf2 >= p) {
   saida += 1;
  }
  i += 1;
 }
 cout<<saida<<"\n";
 return 0;
}
