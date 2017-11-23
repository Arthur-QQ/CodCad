#include <iostream>
#include <algorithm>

using namespace std;

struct Piloto {
    int id;
    int pontuacaoemcorrida = 0;
};

bool comparar(Piloto p1, Piloto p2) {
    return (p1.pontuacaoemcorrida > p2.pontuacaoemcorrida)||(p1.pontuacaoemcorrida == p2.pontuacaoemcorrida&&p1.id<p2.id);
}

int main() {
    while (true) {
        int g, p;
        cin >> g >> p;
        if (g == 0 and p == 0) {
            break;
        }
        Piloto vp[p];
        Piloto original[p];
        int corridas[g][p];
        for (int i = 0; i < g; i++) {
            for (int j = 0; j < p; j++) {
                cin >> corridas[i][j];
                if (i == 0) {
                    vp[j].id = j + 1;
                    original[j].id = j + 1;
                }
            }
        }
        int s;
        cin >> s;
        for (int i = 0; i < s; i++) {
            int k;
            cin >> k;
            for (int j = 0; j < p; j++) {
                vp[j] = original[j];
            }
            int negosseos[p];
            for (int j = 0; j < k; j++) {
                cin >> negosseos[j];
            }
            for (int j = k; j < p; j++) {
                negosseos[j] = 0;
            }
            for (int j = 0; j < g; j++) {
                for (int l = 0; l < p; l++) {
                    vp[l].pontuacaoemcorrida += negosseos[corridas[j][l] - 1];
                }
            }
            sort(vp, vp+p, comparar);
            for (int j = 0; j < p; j++) {
                if (vp[0].pontuacaoemcorrida == vp[j].pontuacaoemcorrida) {
                    cout << vp[j].id << " ";
                } else {
                    break;
                }
            }
            cout << endl;
        }
    }

}
