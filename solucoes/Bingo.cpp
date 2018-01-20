#include <iostream>
using namespace std;

int main() {
    int n, b;
    while (true) {//Este laço lê na mesma linha o valor N e B, respectivamente.
        cin >> n >> b;
        //N é o maior numero sorteado na versão original do Bingo
        //B é o numero de bolinhas remanescentes apos a alteração das regras do bingo
        if (n == 0 and b == 0) {// se ambos os valores N e B forem zero então o programa será encerrado
            break;
        }
        int bolinhasValidas[b];//Vetor contendo os valores das bolinhas remanescentes após a alteração das regras do jogo.
        for (int i = 0;i<b;i++) {
            cin >> bolinhasValidas[i];
        }
        int diferencas[n + 1];//Vetor cujo indice representa as diferenças. Seu valor será carregado com 0 ou 1. Se o valor for 0 então significa que é impossivel atingir o valor do indice pelas regras do jogo. Se o valor for 1 então significa que é possivel atingir o valor do indice com as regras do jogo.
        for (int i = 0; i<= n; i++) {
            diferencas[i] = 0;//Inicialmente todos os valores são carregados com 0 pois não sabemos se o valor i pode ser atingido ou não.
        }

        for (int i = 0; i < b;i++) {//Este laço promove a comparação de todas as bolinhas remanescentes com todas as bolinhas remanescentes.
            for (int ii = 0; ii < b; ii++) {
                int dif = bolinhasValidas[i] - bolinhasValidas[ii];//Conforme as regras do jogo, deve se retirar a diferença entre o valor das bolinhas
                if (dif < 0) {//Se o valor da diferença for negativo deve se trocar o sinal pois de acordo com a regra do jogo, sempre faremos a maior menos a menor
                    dif = -dif;
                }
                diferencas[dif] = 1;//Caso um valor de diferença seja encontrado então sua respectiva posição no vetor int diferencas[] será marcado com o valor 1 indicando que o valor pode ser atingido com as regras do jogo.
            }
        }
        for (int i = 0; i <= n; i++) {
            if (diferencas[i] == 0) {//Caso apenas um valor de diferença não seja encontrado no laço anterior então imprime "N" na tela.
                cout << "N" << endl;
                break;
            } else if (i == n) {//Caso contrario imprime "Y"
                cout << "Y" << endl;
            }
        }
    }
}

/*
Albert, Charles e Mary inventaram uma nova versão do clássico jogo de Bingo.
Na versão tradicional, o jogo é presidido por um não-jogador conhecido como
caller. No começo de cada partida, cada jogador recebe uma carta contendo
uma única combinação de números de 0 até N dispostos em colunas e linhas. O
caller opera um globo contendo N+1 bolas numeradas de 0 até N. Em cada
turno, o caller sorteia uma bola do globo, anuncia o número sorteado aos
jogadores e não a coloca novamente no globo. Cada jogador procura pelo
número em sua carta e o marca caso o encontre. O primeiro jogador que marcar
um padrão pré-definido completo em sua carta (uma linha horizontal, por
exemplo) ganha um prêmio.

Na versão Albert-Charles-Mary, em cada turno, o caller sorteia uma primeira
bola, coloca-a de volta no globo, sorteia uma segunda bola, coloca-a de
volta no globo, e então anuncia a diferença absoluta entre os números das
duas bolas. Para aumentar o entusiasmo, antes do início da partida, um
subconjunto possivelmente vazio de bolas é retirado do globo, de forma que
ao menos duas bolas permaneçam no globo. Eles gostariam de saber se cada
número de 0 até N podem ainda ser anunciados utilizando a nova regra de
sorteio e considerando apenas as bolas que permaneceram dentro do globo.

Entrada
Cada caso de teste é dado em exatamente duas linhas. A primeira linha contém
dois inteiros N e B. O significado de N foi descrito acima, enquanto B
representa o número de bolas que permaneceram no globo. A segunda linha
contém B inteiros distintos b(i), indicando as bolas que permaneceram no
globo.

Saída
Para cada caso de teste, imprima uma única linha contendo um único caractere
'Y' se for possível anunciar todos os números de 0 até N, inclusive, ou um
único caractere 'N' caso contrário.

Fonte: http://www.codcad.com/problem/161
*/
