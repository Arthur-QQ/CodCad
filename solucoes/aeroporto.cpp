#include <iostream>
#include <vector>
#include <algorithm>

#define INF 0x3f3f3f3f

using namespace std;

int main() {
  int a = 0, v = 0;
  int teste_n = 0;
  while (true) {
    teste_n++;
    cin >> a >> v;
    if (a == 0 and v == 0) {
      break;
    }
    int trafegos[a];
    for (int i = 0; i < a; i++) {
      trafegos[i] = 0;
    }
    int aer1, aer2;
    for (int i = 0; i < v; i++) {
      cin >> aer1 >> aer2; aer1--; aer2--;
      trafegos[aer1]++;
      trafegos[aer2]++;
    }
    int maior_trafego = -1;
    for (int i = 0; i < a; i++) {
      if (maior_trafego < trafegos[i]) {
        maior_trafego = trafegos[i];
      }
    }
    cout << "Teste " << teste_n << "\n";
    for (int i = 0; i < a; i++) {
      if (maior_trafego == trafegos[i]) {
        cout << i+1 << " ";
      }
    }
    cout << "\n" << "\n";
  }
}
