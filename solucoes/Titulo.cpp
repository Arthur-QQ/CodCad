#include <iostream>

using namespace std;

string title(string F){
	//Seu código aqui
	string saida = "";
	for (int i = 0; i < F.size(); i++) {
        if (65 <= F[i] and F[i] <= 90) {
            F[i] += 32;
        }
        if (97 <= F[i] and F[i] <= 122 and (i == 0 or F[i - 1] == ' ')) {
            saida += F[i] - 32;
        } else {
            saida += F[i];
        }
	}
	return saida;
}

int main(){
	string F;

	getline(cin, F);

	cout<<title(F)<<"\n";
}
