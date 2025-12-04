// 08 - Crie um vetor de 6 nomes (strings).
//O programa deve: ler os nomes, perguntar um nome a ser buscado, informar se ele existe no vetor 

#include <iostream>
#include <string>
using namespace std;

int main() {
    string nomes[6];
    string busca;

    cout << "Digite 6 nomes: ";
    for (int i = 0; i < 6; i++) {
        cin >> nomes[i];
    }

    cout << "Digite o nome que deseja procurar: ";
    cin >> busca;

    for (int i = 0; i < 6; i++) {
        if (nomes[i] == busca) {
            cout << "O nome existe no vetor."<<endl;
            return 0;
        }
    }

    cout << "O nome nao existe no vetor."<<endl;

    return 0;
}
