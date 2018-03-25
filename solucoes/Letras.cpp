#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int lci(vector<int> s) {
    vector<int> pilha;
    for (int i = 0; i < s.size(); i++) {
        vector<int>::iterator it = upper_bound(pilha.begin(), pilha.end(), s[i]);
        if (it == pilha.end()) {
            pilha.push_back(s[i]);
        } else {
            *it = s[i];
        }
    }
    return pilha.size();
}

int main() {
    string ss;
    cin >> ss;
    vector<int> s;
    for (int i = 0; i < ss.size(); i++) {
        s.push_back((int)ss[i]);
    }
    cout << lci(s) << "\n";
}
