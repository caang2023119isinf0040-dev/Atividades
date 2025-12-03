//Criar um aplicativo para armazenar uma lista com os valores dos 15 primeiros produtos
//Você vai digitar os valores e mostrar a soma
#include <iostream>
using namespace std;
int main(){
    float soma = 0;
    float valor[15];
    for(int i = 0; i < 15; i++){
        cout << "Digite o preço do produto " << i+1 <<":";
        cin >> valor[i];
        soma += valor[i];
        }
    float media = soma/15;
    cout << "Media: " << media;
    }
