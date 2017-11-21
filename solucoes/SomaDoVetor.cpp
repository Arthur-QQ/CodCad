
#include <iostream>

using namespace std;

int soma_vetor(int n, int v[]){
	// Seu código aqui.
	int soma = 0;
	for (int i = 0; i < n;i++) {
        soma += v[i];
	}
	return soma;
}

int main(){

	int n, v[100100]; // ACHO SOU O UNICO Q NAO COLOCA UM MONTE DE ESPACO NO VETOR ;-;
	cin >> n;

	for(int i=0;i<n;i++) // MANO SO NUM COLOQUEI CHAVE PQ NUM PODIA
		cin >> v[i];

	cout << soma_vetor(n,v) << "\n";
}
