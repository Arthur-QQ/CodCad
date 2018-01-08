#include <iostream>
#include <vector>

using namespace std;


int n, m;
int matriz[1000][1000];

bool iscosta(pair<int, int> coords, int height, int width) {
  int n_x[4] = {1, -1, 0, 0};
  int n_y[4] = {0, 0, 1, -1};
  for (int i = 0; i < 4; i++) {
    int new_x = coords.first + n_x[i];
    int new_y = coords.second + n_y[i];
    if (new_x >= 0 && new_x < height && new_y >= 0 && new_y < width) {
      if (!matriz[new_x][new_y]) {
        return true;
      }
    } else {
      return true;
    }
  }
  return false;
}

int main() {
  cin >> n >> m;
  char entrada;
  vector<pair<int, int> > coords;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> entrada;
      if (entrada == '#') {
        matriz[i][j] = 1;
        coords.push_back(make_pair(i, j));
      } else {
        matriz[i][j] = 0;
      }
    }
  }
  int resp = 0;
  for (int i = 0; i < coords.size(); i++) {
    if (iscosta(coords[i], n, m)) {
      resp++;
      // cout << coords[i].first << " " << coords[i].second << "\n";
    }
  }
  cout << resp << "\n";
}
