/*int INDICE = 13, SOMA = 0, K = 0;

enquanto K < INDICE faça

{

K = K + 1;

SOMA = SOMA + K;

}

imprimir(SOMA);



Ao final do processamento, qual será o valor da variável SOMA?*/

#include <iostream>

using namespace std;

int main() {
    int INDICE = 13, SOMA = 0, K = 0;

    while (K < INDICE) {
        K = K + 1;
        SOMA = SOMA + K;
    }

    cout << SOMA << endl;

    return 0;
}