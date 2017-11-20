#include <iostream>
using namespace std;
int main() {
 int l1; int a1;
 int l2; int a2;
 cin>>l1>>a1;
 cin>>l2>>a2;
 int area1; int area2;
 area1 = l1 * a1;
 area2 = l2 * a2;
 string saida;
 if (area1 > area2) {
  saida = "Primeiro";
 } else if (area1 == area2) {
  saida = "Empate";
 } else {
  saida = "Segundo";
 }
 cout<<saida<<"\n";
 return 0;
}
