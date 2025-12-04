// 04 - Crie um programa que: 
//possua um vetor de 5 números inteiros, 
//Peça ao usuário para digitar os valores, 
//Exiba todos os valores digitados
#include <iostream>
using namespace std;
int main(){
    int num[5];
    for(int i = 0; i < 5; i++){
        cout << "Digite seus números: " << i+1 << "º:";
        cin >> num[i];
        }
    cout<<"Valores digitados: "<<endl;
    for(int i = 0; i < 5; i++){
        cout<<num[i]<<endl;
    }

// 05 - Usando o vetor do exercício anterior, calcule e exiba; 
//A soma total dos números, 
//A média aritmética dos valores
    
    int soma = 0;
    for(int i = 0; i < 5; i++){
        soma += num[i];
        }
    cout<<"Soma: "<<soma<<endl;
    float media = soma/5;
    cout << "Media: " << media;
}
