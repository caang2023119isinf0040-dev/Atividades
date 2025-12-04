// 06 - Leia 8 números inteiros para dentro de um vetor e determine:
//O maior valor e em qual posição ele está
//O menor valor e em qual posição ele está

#include <iostream>
using namespace std;

int main() {
    int vetor[8];

    cout << "Digite 8 números inteiros:"<<endl;
    for (int indice = 0; indice < 8; indice++) {
        cout << "Número " << indice + 1 << ": ";
        cin >> vetor[indice];
    }

    int maiorValor = vetor[0];
    int posicaoMaior = 0;

    int menorValor = vetor[0];
    int posicaoMenor = 0;

    for (int i = 1; i < 8; i++) {
        if (vetor[i] > maiorValor) {
            maiorValor = vetor[i];
            posicaoMaior = i;
        }
        if (vetor[i] < menorValor) {
            menorValor = vetor[i];
            posicaoMenor = i;
        }
    }

    cout << "Maior valor encontrado: " << maiorValor << " (posição " << posicaoMaior << ")";
    cout << "Menor valor encontrado: " << menorValor << " (posição " << posicaoMenor << ")";
