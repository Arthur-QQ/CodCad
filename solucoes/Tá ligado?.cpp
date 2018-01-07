// problema fudido da porra
#include <iostream>
#include <vector>

#define INF 0x3f3f3f3f

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector <int> listaadj[100100]; int a, b, inst;
  for (int i = 0; i < m; i++) {
    cin >> inst >> a >> b;
    if (inst == 0) {
      bool bb = false;
      for (int i = 0; i < listaadj[a].size(); i++) {
        if (listaadj[a][i] == b) {
          bb = true;
          break;
        }
      }
      cout << bb << "\n";
    } else if (inst == 1) {
      listaadj[b].push_back(a);
      listaadj[a].push_back(b);
    }
  }
}
