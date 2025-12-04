//07 - Crie um vetor com 10 números digitados pelo usuário.
//Depois peça um número x e informe:
//Se x está no vetor
//Em qual posição ele aparece pela primeira vez

#include <iostream>
using namespace std;
int main() {
    int v[10];
    int x;

    cout << "Digite 10 numeros: ";
    for (int i = 0; i < 10; i++) {
        cin >> v[i];
    }
    cout << "Digite o número que deseja procurar: ";
    cin >> x;
r
    for (int i = 0; i < 10; i++) {
        if (v[i] == x) {
            cout << "O numero está no vetor e aparece pela primeira vez na posição: " << i << endl;
            return 0;
        }
    }
    cout << "O número não está no vetor." << endl;

    return 0;
}
